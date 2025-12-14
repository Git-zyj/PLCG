/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((-16383 + (((-32767 - 1) ? var_2 : (arr_3 [i_0] [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_12 = (min(var_12, var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (arr_3 [i_3 - 1] [i_3 - 2] [9]);
                                var_14 = (min(var_14, ((max(((((max((-32767 - 1), 32767))) ? (arr_5 [i_0] [i_2]) : 32767)), (((-32767 ? (((arr_11 [i_0] [i_0] [i_0] [i_3] [6]) * (arr_0 [i_0]))) : ((-32767 ? -1 : 45933))))))))));
                            }
                        }
                    }
                    arr_13 [i_0] = (-32767 - 1);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_0] = ((-(arr_2 [i_1] [i_5])));
                    var_15 = (arr_14 [i_0] [i_0] [i_0] [i_0]);
                    var_16 = var_7;
                    var_17 = (max(var_17, ((((arr_12 [0] [i_1] [0]) % (arr_2 [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
