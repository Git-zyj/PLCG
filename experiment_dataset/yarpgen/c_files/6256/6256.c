/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (((max(22, var_7))) ? (max((arr_7 [i_3 - 1]), (arr_7 [i_3 + 1]))) : var_11);

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_12 [i_0] [12] [i_0] [i_3 - 1] [i_4] = ((((min(var_5, (max(var_1, var_11))))) ? (!var_0) : (arr_3 [i_0])));
                                arr_13 [i_0] [i_0] [2] [i_0] [i_4] = (!((max((((15 << (var_11 - 8700108713832085145)))), ((var_5 ? 98 : (arr_7 [i_2])))))));
                            }
                            arr_14 [i_0] [i_0] = ((((((((max(-8982, -92)))) & (min(var_6, var_1))))) >= ((-15 % (arr_7 [i_0])))));
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = (((arr_1 [1]) ? ((((arr_1 [i_0]) <= 1166912901))) : ((max(-92, 1)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [i_1] [i_1] = (max(((~(arr_20 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 1]))), (((((arr_1 [i_1]) >> (((arr_6 [i_1] [i_1] [i_1]) - 946338834))))))));
                            var_14 = (-99 & -18);
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (!var_2) : (((((arr_4 [i_5]) || 91)) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_5]) : var_10)) : 137))));
                        }
                    }
                }
                var_15 += (min((arr_4 [i_0]), (max((arr_4 [i_0]), var_11))));
            }
        }
    }
    var_16 = (!var_12);
    #pragma endscop
}
