extern void ukl_set_bypass_limit(int val);
extern void ukl_set_bypass_syscall(int val);

void __attribute__((constructor)) init_ukl() {
	ukl_set_bypass_limit(10);
	ukl_set_bypass_syscall(1);
}
