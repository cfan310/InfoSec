#include <stdio.h>

int main()
{
	int i;
	for(i=0; i < 10; i++)
	{
		printf("Number: %d...\n", i); 
	}
	return 0; 
}
 
// objdump -d assemblyview.exe | grep -A10 assemblyview


/*
0000000140001000 <__mingw_invalidParameterHandler>:
   140001000:   c3                      ret
   140001001:   66 66 2e 0f 1f 84 00    data16 cs nopw 0x0(%rax,%rax,1)
   140001008:   00 00 00 00
   14000100c:   0f 1f 40 00             nopl   0x0(%rax)

0000000140001010 <pre_c_init>:
   140001010:   48 83 ec 28             sub    $0x28,%rsp
   140001014:   48 8b 05 f5 33 00 00    mov    0x33f5(%rip),%rax        # 140004410 <.refptr.__mingw_initltsdrot_force>
   14000101b:   31 c9                   xor    %ecx,%ecx
   14000101d:   c7 00 01 00 00 00       movl   $0x1,(%rax)
   140001023:   48 8b 05 f6 33 00 00    mov    0x33f6(%rip),%rax        # 140004420 <.refptr.__mingw_initltsdyn_force>
   14000102a:   c7 00 01 00 00 00       movl   $0x1,(%rax)
   140001030:   48 8b 05 f9 33 00 00    mov    0x33f9(%rip),%rax        # 140004430 <.refptr.__mingw_initltssuo_force>
   140001037:   c7 00 01 00 00 00       movl   $0x1,(%rax)
   14000103d:   48 8b 05 5c 33 00 00    mov    0x335c(%rip),%rax        # 1400043a0 <.refptr.__ImageBase>
*/