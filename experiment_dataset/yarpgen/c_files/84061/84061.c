/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_6 [i_0] = ((((var_12 / (min(1471189618739862322, (arr_0 [i_0]))))) & (((var_11 ? var_13 : (arr_5 [i_0] [i_1] [7] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] = var_10;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 4] [i_0] = ((((min(-24, 118))) ? 117 : 237));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_18 [12] [12] [i_6] [i_6] [i_6] = (~4096);
                                var_17 = (min(var_17, (((((0 ? (arr_13 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) ? (arr_0 [i_0]) : (min(2619994394261803174, var_0))))));
                                arr_19 [i_0] [i_0] [i_0] [4] [i_5] = (15158819541897166049 + 12320570336293126073);
                            }
                        }
                    }
                    var_18 = (max(var_18, (arr_16 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_2 + 3])));
                    arr_20 [i_0] [i_1] = 0;
                }
                var_19 = (((var_5 ? ((var_5 ? (arr_1 [i_1]) : (arr_0 [i_0]))) : -1)));
                var_20 = (min(var_20, ((!(63 <= var_7)))));
                var_21 = (((((-(arr_13 [i_0 - 3] [i_1] [i_0])))) * var_13));
            }
        }
    }
    var_22 = (min((min((max(var_3, 11760186968632353307)), 44487)), var_1));
    #pragma endscop
}
