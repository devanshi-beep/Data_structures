int* printDivisors(int n, int &size) {
    int small[100000], large[100000];
    int s = 0, l = 0;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            small[s++] = i;
            if (i != n / i)
                large[l++] = n / i;
        }
    }

    size = s + l;
    int* arr = new int[size];

    int idx = 0;
    for (int i = 0; i < s; i++) arr[idx++] = small[i];
    for (int i = l - 1; i >= 0; i--) arr[idx++] = large[i];

    return arr;
}
 