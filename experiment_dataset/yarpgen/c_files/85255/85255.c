/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -10517;
    var_17 = -10;
    var_18 = ((((4294967286 ? 10 : var_10))) % ((((-127 - 1) ? 4294967293 : 133))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = var_2;
                var_19 = 16;
            }
        }
    }
    var_20 = (min(var_20, (((9007199254740991 ? ((max((-571691680563925048 <= -571691680563925025), ((-4972513043982295798 ? 133 : 116))))) : 4294967284)))));
    #pragma endscop
}
