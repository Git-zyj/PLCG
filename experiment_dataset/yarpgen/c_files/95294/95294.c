/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_3, ((max(var_6, var_0))))));
    var_11 = -1888;
    var_12 = ((1 < (max(var_4, ((1 ? var_5 : 46908))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 21;i_4 += 1)
                            {
                                arr_15 [i_1] [i_4] = (((-1658 ? 1 : -6979356670062423908)));
                                var_13 = ((var_4 * ((((((arr_0 [i_0]) ? 1 : -717586949)) <= (arr_2 [i_1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] [i_4 + 1] [i_1] [i_4 - 1] = (((max((arr_11 [21] [i_1] [i_2] [i_3] [i_4 - 2]), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_11 [i_4 - 1] [i_3] [i_2] [i_1] [i_0]) : (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_4 - 3]) ? (arr_11 [i_0] [9] [i_3 - 2] [9] [i_2]) : (arr_11 [i_0] [i_1] [i_1] [i_3 + 1] [i_0])))));
                                arr_17 [i_4] [0] [i_2] [i_3] [i_3] [i_2] = ((!((max((!5515184025102976670), (arr_6 [i_1] [i_1] [i_4 - 3]))))));
                                arr_18 [i_4] = (max((((arr_5 [i_0] [5] [5]) ? (arr_9 [i_0] [1] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [i_1] [i_3 - 2]))), var_8));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_14 = (min((arr_9 [i_0] [i_0] [1] [i_0]), (min((arr_9 [i_3] [i_0] [i_2] [i_0]), (arr_9 [i_0] [i_1] [i_2] [i_2])))));
                                var_15 = arr_3 [i_0] [18];
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                arr_24 [i_0] [i_0] [i_2] [i_0] [i_0] [11] = (267013053028505752 % var_2);
                                var_16 = 6979356670062423894;
                            }
                            var_17 = 0;
                            arr_25 [i_0] [i_1] [i_2] [i_3] = ((((max(5515184025102976670, (arr_9 [8] [i_1] [i_1] [i_3])))) ? -6979356670062423886 : (((arr_19 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3 + 3]) - (arr_23 [7] [0] [i_3] [i_3 - 1] [i_1] [i_3 + 3])))));
                            var_18 = ((!(((((max((arr_1 [i_1]), var_7))) ? 1 : 9223372036854775804)))));
                        }
                    }
                }
                var_19 = (max(46651, ((((min(var_5, -6979356670062423886))) ? ((((!(arr_22 [i_0]))))) : ((11386575834746968906 * (arr_11 [i_0] [2] [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
