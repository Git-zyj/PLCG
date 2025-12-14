/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((-((((arr_2 [i_1] [i_0 + 2]) < (arr_2 [i_0 + 2] [i_0 + 2]))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_1] = ((-24613 ? ((((!(((var_7 ? 450936965 : 36526))))))) : (arr_0 [1])));
                    var_19 = (min(var_19, (((((((((arr_3 [i_1] [i_2]) < (arr_3 [i_2] [i_2]))) ? (((450936962 ? 74 : 727665474))) : (max(15524781936751182343, 104))))) ? ((max((min(-105, (arr_3 [i_0] [i_2]))), (((var_5 < (arr_1 [i_0] [i_1]))))))) : (!65535))))));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((var_17 < (~2081947446)));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = (((arr_0 [i_0]) ? var_2 : (min((((arr_0 [i_3]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1] [i_1]))), -65517))));
                    var_21 *= ((-(((!(arr_6 [22] [i_1]))))));
                }
                arr_11 [i_0] [i_1] [i_1] = ((((!var_6) < 727665483)));
                var_22 += ((((((!2213019849) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 1]) : (((arr_2 [i_1] [i_0]) ? (arr_3 [16] [16]) : var_15))))) ? (arr_6 [14] [i_1]) : (arr_4 [1])));
            }
        }
    }
    var_23 = (((!var_6) < (((((var_3 ? 3567301819 : var_13))) ? ((0 ? var_13 : var_16)) : 15))));
    #pragma endscop
}
