/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((255 > -167022768) | (((!(arr_2 [i_0])))))) > ((((arr_3 [i_0]) < (arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 *= (max((((var_4 < ((1231073846316790468 ? (arr_0 [i_1]) : (arr_1 [i_2])))))), (((arr_5 [i_0] [i_0] [i_0] [i_0]) & (((arr_5 [0] [i_2] [i_1] [i_0]) - 255))))));
                            var_13 &= ((+(((167022782 % 1) ? (((arr_5 [i_3] [i_2] [i_1] [i_0]) ? -167022768 : var_4)) : (0 < 62)))));
                        }
                    }
                }
                var_14 = ((!((((arr_1 [i_0]) ? var_1 : -167022768)))));
            }
        }
    }
    var_15 = (min(var_15, var_2));
    var_16 = ((((((2085481053 != 2085481053) ? ((var_5 << (97 - 85))) : ((max(1, 51084)))))) ? (max((31 & 2209486242), (16383 % 4456450555028501842))) : 2436362963));
    #pragma endscop
}
