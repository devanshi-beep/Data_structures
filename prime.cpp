int countDigits(int n){
	int count = 0;
        while (n > 0) {
            int last = n % 10;
            count = count + 1;
            n = n / 10;
        }
    return count;	
}