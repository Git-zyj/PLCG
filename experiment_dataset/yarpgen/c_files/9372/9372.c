/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_6 ? var_1 : var_8))) ? var_9 : ((((max(1, 2903397832))) ? var_0 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_0]);
                arr_4 [i_0] [i_1] [i_0] = (--var_10);
                var_17 = (min(var_17, ((max((max(18446744073709551609, 0)), ((((arr_2 [i_0] [i_1 - 2] [i_1 - 2]) % (arr_2 [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    var_18 = ((var_0 ^ ((var_2 ? (min(var_11, var_7)) : (max(17583769189154322915, 54670))))));
    #pragma endscop
}
