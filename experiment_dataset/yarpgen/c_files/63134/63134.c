/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = var_7;
                                var_13 = ((-((((!(arr_2 [i_0])))))));
                                arr_15 [i_0] = 917504;
                            }
                        }
                    }
                    var_14 += (max((((!(arr_4 [i_2 + 1] [i_1] [i_2 + 1])))), (((arr_4 [i_2 + 1] [i_1] [i_2 + 1]) | (arr_4 [i_2 + 1] [i_1] [i_2 + 1])))));
                    var_15 = 36607;
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_16 = max(((-(arr_21 [i_5 - 1] [i_1 + 2] [i_1 + 1] [i_0]))), (!-84));
                                arr_24 [i_0] [i_1] [i_1] [i_6] = ((((max(0, (((var_2 == (arr_1 [i_6] [i_6]))))))) & (!var_6)));
                            }
                        }
                    }
                }
                arr_25 [i_0] = ((((!(arr_5 [i_1] [i_1 + 2] [i_1] [i_1]))) ? (((arr_19 [i_1 - 2] [i_1] [12] [i_0]) ^ 28918)) : var_8));
            }
        }
    }
    var_17 = (min((((var_2 || var_0) ^ var_1)), 4294967287));
    #pragma endscop
}
