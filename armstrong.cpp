bool checkArmstrong(int n){
    if (n == 1) return true;

    int original = n;
    int temp = n;     // copy for second loop
    int count = 0;
    int sum = 0;

    while (temp > 0){
        temp /= 10;
        count++;
    }
    temp = n; // reset for digit power sum
    while (temp > 0){
        int last = temp % 10;
        sum += (int)pow(last, count);  // use digit count
        temp /= 10;
    }

    if (sum == original) return true;
    else return false;
}
