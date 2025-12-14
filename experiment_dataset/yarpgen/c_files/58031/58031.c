/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (930947080 >= 930947089);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [1] [18] = ((((((10 ? (arr_0 [i_0]) : 1146209449)) & var_11)) > (~50)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 -= (((min(13, (arr_5 [i_0 - 2])))));
                    var_18 = (arr_7 [i_0 + 1] [i_0 - 1] [i_2]);
                    var_19 -= 13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min((!3364020180), (arr_9 [i_0 - 2] [i_4 - 1] [i_2] [i_4 - 1])));
                                arr_17 [i_4 - 1] [i_3] [i_2] [i_3] [1] = ((((((arr_0 [i_4]) & (arr_1 [i_0 - 1] [i_0 - 1])))) || (arr_7 [i_0 - 1] [i_4 - 1] [6])));
                                arr_18 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_3] = (arr_16 [3] [i_1] [i_1] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_21 = 3364020185;
        arr_22 [12] [i_5] = ((((3308627169139910937 ? -22 : (arr_21 [i_5] [i_5 + 3]))) + ((((arr_16 [i_5 + 1] [i_5 - 1] [i_5 - 1] [18]) >= var_10)))));
        var_22 = (min(var_22, ((!(!4798)))));
        var_23 = (min(var_23, var_10));
        var_24 = (min(var_24, (arr_19 [i_5 + 2])));
    }
    var_25 = var_14;
    #pragma endscop
}
