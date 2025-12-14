/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 17369365520193572403;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((-(((~(arr_1 [i_0 + 1] [i_0 + 1]))))));
                var_21 *= (max((((max(0, var_5)))), (!var_4)));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] = (min(((17369365520193572403 ? ((((17369365520193572403 < (arr_10 [i_0] [i_1] [i_0]))))) : (((arr_5 [i_2]) ? var_7 : (arr_8 [i_1] [i_2] [i_3]))))), ((min(var_17, -1)))));
                            var_22 = ((~8796088827904) ? (max((arr_5 [i_0]), var_9)) : (((-4417852087173704836 ? 887707509778974558 : var_12))));
                            var_23 = (arr_1 [i_0 - 1] [i_2]);
                            arr_12 [i_0] [i_1] [2] [i_2] = ((131071 & 887707509778974558) % ((((((4294967295 ? var_3 : var_10))) ? (((17369365520193572403 ? var_15 : 4294967295))) : var_16))));
                            var_24 = (max(var_24, (max(var_6, 887707509778974558))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
