/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min(3194876171, (((max(1832392776420663686, 127)))))))));
                arr_4 [i_0] [i_1] [i_1] = ((-2659582839007641890 - ((((arr_1 [i_1]) + var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_12 = ((arr_10 [13] [i_3]) ? ((((arr_10 [i_2] [i_2]) <= 127))) : (arr_5 [i_3]));
                var_13 += ((((((arr_7 [i_2] [i_2]) + (min(var_3, 3247633101063652621))))) ? ((~(max(-114, var_4)))) : (!var_1)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_14 = (((~((min((arr_16 [i_4] [2] [i_4] [2] [i_2] [i_5]), 12707))))));

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_15 |= (min((((-836877572 ? 240 : (-127 - 1)))), ((3 - (arr_8 [i_2] [i_2])))));
                                arr_20 [i_2] [i_3] [i_2] [i_5] [i_6] = (((min((((~(arr_8 [i_3] [i_5])))), (arr_6 [i_2] [i_3]))) > (max((arr_6 [i_2] [16]), -15))));
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                arr_24 [i_2] [i_3] [i_4] [i_5] [i_3] = (((-1778900827 - 0) - -87));
                                arr_25 [i_2] [i_2] [i_4] = (max(-9119066249466358254, (min(-1490055772, 3055673326))));
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                arr_30 [i_4] &= (arr_5 [i_4]);
                                var_16 = var_2;
                                var_17 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
