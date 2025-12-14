/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_1 [i_3]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_9));
                                var_18 = (((arr_2 [i_1 - 2] [i_0 + 1] [i_0 - 2]) ? (arr_2 [i_1 + 3] [i_0 + 2] [i_0 - 1]) : (arr_2 [i_1 + 1] [i_0 + 2] [i_0 - 2])));
                                var_19 = (max(var_19, (((-31414 ? var_8 : -31422)))));
                            }
                        }
                    }
                    var_20 |= ((-1920 ? (arr_7 [i_0] [i_0]) : (arr_6 [i_0 - 2] [i_0 - 2])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (((arr_2 [i_0 + 2] [i_1 + 3] [i_0 + 2]) & (arr_2 [i_0 + 2] [i_1 + 2] [i_1 + 2])));
                    var_21 *= 12122666451672094384;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_4 * (arr_20 [i_0] [i_0 + 2])));
                                var_22 = (((((-15924 != 15923) << (var_9 - 92))) >> (15934 - 15906)));
                                var_23 = ((-(arr_3 [i_0 - 1] [i_1 + 1])));
                                var_24 = ((-(max((arr_1 [i_0]), (min((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_7))))));
                            }
                        }
                    }
                    var_25 = (max(var_25, (((((((arr_0 [i_0 + 2] [i_1 + 1]) ? (arr_0 [i_0 - 2] [i_1 + 3]) : (arr_27 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0 - 1])))) ? ((15360 ? (arr_27 [i_0 + 1] [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_1 - 2]) : 15923)) : (arr_0 [i_0 + 1] [i_1 - 1]))))));
                }
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    arr_32 [i_9] [i_9] = (((6324077622037457231 & 15934) ? ((((((-2 + 2147483647) >> (15360 - 15343)))) ? -1 : -873)) : (((var_4 > (!22723))))));
                    var_26 = (min(((1416710553326655257 ? 19222 : ((-1 * (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (arr_17 [i_0] [i_0] [i_0])));
                }
                var_27 = var_15;
            }
        }
    }
    var_28 = (((var_4 * var_3) ? ((((!(((var_14 >> (var_13 - 222)))))))) : ((((min(var_7, var_13))) ? ((-15934 ? var_12 : var_5)) : (((72299431715319690 ? -15910 : var_16)))))));
    var_29 = var_16;
    #pragma endscop
}
