/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((-((1077272995 ? 94 : 65535))));
                var_20 = arr_3 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [8] [8] [1] [i_0] [i_3] = (((30 ? 1 : ((48 ? -8032897382604741276 : 63)))));
                            var_21 *= (arr_1 [i_3]);
                            arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_3] [i_1] [i_2] = (~67);
                            arr_14 [i_0] [i_1] = ((~(-2147483647 - 1)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            {
                var_22 ^= arr_18 [2] [i_4];
                arr_19 [i_4] [i_5] = (arr_18 [i_4] [i_5]);
                arr_20 [i_5 + 2] = (((var_0 - var_15) ? var_9 : (min(var_7, (((arr_15 [i_5 - 1] [i_4]) ? (arr_17 [2] [i_5 - 3]) : (arr_17 [i_4] [i_5 - 2])))))));
                var_23 = ((((((((8032897382604741271 != (arr_17 [i_4] [i_5 + 2]))) && 41)))) ^ ((((((arr_15 [i_4] [i_5]) ? var_10 : (arr_15 [i_4] [i_4])))) * (min(var_4, 1636866955))))));
            }
        }
    }
    #pragma endscop
}
