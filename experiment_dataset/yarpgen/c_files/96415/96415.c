/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 495842313;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (min(-48443, (((arr_3 [i_0]) * (((-25294 ? 1 : (-127 - 1))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = (!var_9);
                    arr_11 [i_0] [i_1] [i_1] [i_0] = (--47);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_17 = ((((min(var_13, -94)) ? 33 : (((arr_3 [i_3]) ? (arr_10 [i_4] [i_3]) : 96)))));
                                var_18 = (min(((~(((arr_5 [i_0] [i_1]) >> (204 - 183))))), ((min((arr_8 [i_1] [i_1] [i_1] [i_1]), 0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_19 = ((1881509569 ? ((13 * ((min(var_1, (arr_24 [i_0])))))) : (((((arr_8 [i_0] [i_3] [i_1] [i_7]) <= (arr_25 [i_7] [i_6] [i_1] [i_0])))))));
                                var_20 = (arr_27 [i_0] [6] [i_6] [6] [i_7] [i_7]);
                            }
                        }
                    }
                    var_21 = (((min(-var_3, (min((arr_12 [i_1] [i_1] [i_3]), (arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))) | (arr_1 [i_0])));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_22 = ((arr_17 [i_1] [i_1]) ? (arr_17 [i_1] [i_1]) : (arr_26 [i_0] [i_0] [i_1] [i_8]));
                    var_23 = ((6537982744336070220 ? (-495842314 / var_13) : ((((arr_4 [i_8]) ? var_7 : var_0)))));
                    var_24 = var_2;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 8;i_10 += 1)
        {
            {
                var_25 = -495842299;

                /* vectorizable */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    var_26 = (arr_8 [i_9] [i_9] [i_10] [i_9]);
                    var_27 = (~24433);
                }
                var_28 = (min(((((arr_19 [17] [i_9] [i_9] [17] [17] [17] [i_10]) < (arr_16 [i_9] [i_9])))), (min((arr_8 [i_9] [i_10] [i_10] [i_10]), ((min(var_6, 83)))))));
            }
        }
    }
    #pragma endscop
}
