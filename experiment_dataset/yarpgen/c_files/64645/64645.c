/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [3] = var_14;
        var_21 &= ((6796270833989911443 ? (((1 ? ((255 ? 19482 : 19499)) : 46061))) : ((19494 ? 1 : 1920236998963055858))));
        arr_3 [i_0] [i_0] = ((55009 ^ (((((-64 + 2147483647) >> (11650473239719640175 - 11650473239719640156))) << (1920236998963055852 == 1)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (min(((~(arr_0 [i_1] [i_1]))), ((var_4 ? 1 : 22420))));
        arr_8 [i_1] = (10806552927326801963 < 1);
        var_22 = 3944456980103557050;
    }
    var_23 = ((-(min(((max(-6, var_6))), 7146239283683836273))));
    #pragma endscop
}
