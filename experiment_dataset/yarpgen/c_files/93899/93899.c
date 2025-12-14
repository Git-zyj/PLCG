/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_5;
    var_14 = ((!((((!-1440207191) ^ (min(var_6, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((~(max(var_9, -1440207191)))))));
                                var_16 = var_4;
                                var_17 = (min(var_17, (((!((((arr_8 [i_0] [i_0]) ? 1 : (~var_4)))))))));
                            }
                        }
                    }
                    var_18 *= ((-(max(var_10, var_12))));
                    arr_12 [i_1] = var_0;
                    arr_13 [i_2] [i_0] [i_0] = (~1440207213);
                    arr_14 [2] [9] &= (max(((~((var_7 ^ (arr_6 [i_1] [i_1] [i_1] [6] [i_1] [i_1]))))), (((!(((~(arr_2 [i_2] [11] [i_0])))))))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = (-2147483647 - 1);
                                var_20 = (min(var_20, (~62)));
                            }
                        }
                    }
                    var_21 = (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_22 = (((((var_4 * (25 >= 31199)))) ? (((((max(-116, 16728725203054758192))) ? ((min((arr_9 [i_0] [i_1] [9]), 49491))) : (arr_17 [i_5])))) : ((~(min((arr_10 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5]), var_11))))));
                }
                var_23 = ((((min(var_0, ((min(var_2, (arr_20 [i_0]))))))) ? (arr_0 [i_1]) : var_5));
                var_24 = var_11;
            }
        }
    }
    #pragma endscop
}
