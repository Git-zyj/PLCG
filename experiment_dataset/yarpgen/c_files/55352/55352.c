/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_11 = -6012467151018382352;
                                var_12 *= (min(((((9 ? 0 : 0)))), (arr_2 [i_4] [i_1] [i_1])));
                                var_13 = (max(3, ((((min(-4, -1163032359)) + (arr_0 [i_3]))))));
                                arr_11 [i_3] [i_1] [i_3] [i_3] [i_3] = ((((((var_4 | (arr_8 [i_3] [i_1] [i_2] [4] [i_4] [i_1] [i_2]))))) ? (((!(arr_3 [i_1])))) : var_5));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_14 = 18963;
                                var_15 = -12689;
                                var_16 &= var_4;
                            }
                            var_17 -= ((((((var_6 & var_8) >> (((2097136 / 237) - 8806))))) ? (!-17) : -56));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (((!((((arr_13 [18] [i_1] [i_1] [i_0] [i_0]) + 21))))));
            }
        }
    }
    var_18 |= ((((min(var_0, var_6))) ? (((23707 && (!23)))) : var_5));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            {
                var_19 = (arr_0 [14]);
                arr_19 [i_7] [i_7 - 1] = max((arr_9 [i_7] [i_7] [i_7 + 2] [i_7 + 3] [i_7] [i_7 + 2] [i_7]), (min((arr_9 [16] [i_7] [10] [i_7 + 3] [i_7 + 3] [i_7] [i_7]), (arr_9 [i_6] [i_7] [i_7] [i_7 + 3] [i_6] [i_7] [17]))));
            }
        }
    }
    var_20 = ((max((max(0, var_9), ((min(var_3, 48515098)))))));
    #pragma endscop
}
