/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_2, (((((12174801639446013383 ? 9758416518153800129 : 3840)) == (((min(var_13, var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = var_11;
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_2] = ((((((((arr_0 [i_2]) * var_9)) * -var_8))) ? ((min(((min(var_11, var_0))), (min((arr_2 [i_0] [i_2] [i_0]), var_0))))) : (((((var_8 / (arr_3 [i_0] [i_1])))) ? (min(var_10, var_9)) : -1))));
                                var_15 = (min(((((var_5 <= var_3) ? (arr_6 [i_0] [i_0] [i_4 - 1]) : (arr_4 [i_0] [i_0] [15])))), (((9758416518153800111 >= 52142) + 6271942434263538243))));
                            }
                        }
                    }
                }
                var_16 = ((((min(13085, ((18877 ? 8688327555555751487 : (arr_1 [1])))))) ? (max((arr_2 [i_0] [i_1] [i_0]), (arr_9 [i_0] [i_0] [i_0]))) : (((((arr_0 [i_0]) & var_5))))));
                var_17 = (min(((var_5 ? 1 : 8)), -32493));
                arr_15 [i_0] [i_0] = ((40919 ? 65535 : 274877906943));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_7 [i_7] [i_7] [i_1] [0])));
                                var_19 = (((((((arr_4 [i_0] [i_0] [i_0]) ? 1 : (arr_11 [i_0] [i_1] [i_5] [22] [i_1] [i_5] [22]))))) ? ((min((min(0, 63)), (min((arr_12 [i_6] [i_6] [i_0]), 255))))) : (min(((min(9, 57))), ((var_2 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_5))))));
                                var_20 = (min(var_20, (((((max(var_2, (arr_10 [i_0] [i_0] [i_5] [i_7] [i_5] [0] [i_0])))) ? var_0 : (arr_0 [i_6]))))));
                                var_21 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    #pragma endscop
}
