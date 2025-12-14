/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (max((min(-2147483633, 2159132492041708974)), (min(var_6, ((max(0, var_11)))))));
        arr_4 [i_0] = 2147483633;
        var_17 -= 0;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (max(var_18, (((((((((arr_5 [18] [i_1]) ? var_15 : var_8)) << (((((arr_5 [i_1] [i_1]) + (arr_5 [i_1] [i_1]))) - 5305))))) ? -var_0 : (min(542326549, 128)))))));
        var_19 *= (max((min(((var_9 ? var_5 : (arr_5 [i_1] [i_1]))), -1)), ((~(((arr_5 [i_1] [i_1]) ? var_11 : 153))))));
    }
    #pragma endscop
}
