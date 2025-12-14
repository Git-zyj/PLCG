/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((+(((!var_1) ? ((min(var_9, var_6))) : var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 -= min(((-(max((arr_4 [i_0] [i_1] [i_0]), var_7)))), (((((max(var_5, var_3))) ? var_2 : ((-(arr_0 [i_0])))))));
                            var_12 = arr_3 [i_2] [i_2];
                        }
                    }
                }
                var_13 = var_1;
                var_14 &= (arr_4 [i_0] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_13 [i_0] = ((((((arr_7 [i_0] [i_0]) ? (((~(arr_3 [5] [i_1])))) : (arr_10 [i_0] [i_1] [i_4] [i_5] [i_4] [i_0])))) ? ((var_7 ? ((var_3 ? var_6 : var_3)) : -26715417)) : ((((-(arr_11 [i_0] [1])))))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((((20471 ? 45096 : 281474975662080)) + ((min(((max((arr_9 [i_0] [i_0] [i_4 - 1] [i_5]), var_0))), (min((arr_0 [i_0]), (arr_12 [i_0]))))))));
                            arr_15 [i_0] [i_1] [8] [i_0] = (arr_2 [i_0] [1] [i_0]);
                        }
                    }
                }
                arr_16 [i_0] [i_0] = (max(127, ((min((min((arr_9 [i_0] [i_0] [1] [i_0]), var_9)), (arr_12 [i_0]))))));
            }
        }
    }
    var_15 = (max(var_15, ((max(((max((!var_5), var_2))), ((var_3 ? var_6 : (min(var_3, var_8)))))))));
    #pragma endscop
}
