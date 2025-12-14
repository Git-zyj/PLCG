/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = 3260796572280828677;
                var_12 ^= (((max(var_2, (arr_2 [17] [i_0] [6]))) << ((((18446744073709551615 && 1) <= (18446744073709551613 != 5237408857374580761))))));
                arr_4 [i_1] [13] [i_0] = var_3;
                var_13 = arr_1 [7];
            }
        }
    }
    var_14 ^= (~var_0);
    var_15 = (max(var_15, -32748));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_3] [12] [1] = ((~(arr_12 [5] [i_3] [7] [15])));
                                var_16 ^= ((((((arr_17 [i_4] [4] [i_6] [i_6 - 1] [i_6 + 2] [i_6 + 1] [6]) + 19))) ? ((((arr_17 [i_3] [i_3] [i_4] [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6]) ? 168988056 : var_1))) : (max((arr_17 [i_3] [6] [1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [12]), 15185947501428722923))));
                                var_17 ^= -1276750603;
                                arr_19 [i_2] [0] [1] [i_2] = (((var_4 ^ (0 & 127))));
                            }
                        }
                    }
                    var_18 = (max(((1 - (arr_16 [i_2] [4] [12] [9] [i_2] [4] [i_2]))), -1));
                }
            }
        }
    }
    #pragma endscop
}
