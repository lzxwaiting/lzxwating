void num_10_to_8(int num, char arr[9]) {
	int i;
	for (i = 1; i <= 8; i++) {
		arr[i] = '0';
	}
	for (i = 1; i <= 8; i++) {
		arr[i] = num % 2 + 48;
		num >> 1;
	}
}