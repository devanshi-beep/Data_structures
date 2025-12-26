vector<int> countFrequency(int n, int x, vector<int> &arr) {
    vector<int> freq(n, 0);   // size must be n

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) {
            freq[arr[i] - 1]++;
        }
    }

    return freq;
}
 