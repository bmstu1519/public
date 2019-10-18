package com.company;

import java.util.Scanner;

class TreeFactorial {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long numb = scan.nextLong();
        System.out.println(testTree(numb));
    }

    private static long factTree(long l, long r)
    {
        if (l > r)
            return 1;
        if (l == r)
            return l;
        if (r - l == 1)
            return l * r;
        long m = (l + r) / 2;
        return  factTree(l, m) *  factTree(m + 1, r);
    }

    private static long testTree(long n)
    {
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;
        if (n == 1 || n == 2)
            return n;
        return  factTree(2, n);
    }
}
