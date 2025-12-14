/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? ((15206222407971200031 ? ((var_3 ? var_3 : var_15)) : (146608000 <= var_3))) : (((max(55288, 10235))))));
    var_18 = (max(var_18, ((min(var_14, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = var_13;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (var_9 <= -var_1);
                    var_20 = (((arr_3 [i_0 - 3] [i_0]) ? 582653009522726007 : var_9));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_21 = (max(var_21, 10260));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_22 ^= var_16;
                                var_23 = (!var_7);
                                arr_17 [5] [5] [i_3] [i_4] [i_4] [i_5] [i_0] = ((var_12 ? 12112907133005242766 : var_9));
                                var_24 = (((arr_15 [i_0] [i_0]) ? 201 : (arr_15 [i_0] [i_0])));
                                var_25 = var_11;
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_3] = (((arr_1 [i_0] [i_0 + 2]) < 20));
                }
                var_26 = ((((min(var_15, ((243 ? var_14 : 1))))) ? var_10 : (!var_5)));
                var_27 = 0;
                var_28 = ((~(((var_11 ? var_9 : 100)))));
            }
        }
    }
    var_29 = var_15;
    #pragma endscop
}
