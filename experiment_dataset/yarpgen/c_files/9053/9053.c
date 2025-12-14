/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 + 2] = var_11;
                    var_16 &= ((1040384 - ((2448682003 ? var_8 : 2448682003))));
                    var_17 = (min(var_17, (((var_12 ? ((((-var_10 > ((-100 ? var_10 : 4294967295)))))) : (max(((2448682003 ? var_10 : 4294967295)), (((var_14 ? -58 : 255))))))))));
                }
            }
        }
    }
    var_18 = (max((((min(1, var_0)) & var_10)), (max(((var_10 ? 4294967295 : 26)), (((2147483647 ? 297965270 : 1)))))));
    #pragma endscop
}
