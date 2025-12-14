/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (max(var_19, var_1));
    var_20 = (max((((var_0 * (max(var_0, var_5))))), ((var_3 ? (!var_5) : -9181628288009724164))));
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (min((((-(arr_4 [i_1] [i_1] [i_0])))), ((((255 ? 0 : 1)) - (2640 + 1073740800)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = (max(1, (((arr_5 [i_0] [i_0] [i_4 - 2]) ? (arr_3 [i_4 - 1]) : (arr_3 [i_4 - 1])))));
                                var_23 = (!120);
                                var_24 = (min(var_24, ((((max((arr_10 [i_0] [i_4 + 3] [i_4] [i_4 + 1] [i_4]), (arr_10 [i_2] [i_4 - 1] [i_4] [i_4 + 1] [i_4])))) >= (((arr_10 [i_0] [i_4 + 1] [i_4] [i_4 - 2] [i_4]) ? (arr_10 [i_3] [i_4 - 2] [i_4] [i_4 - 1] [i_3]) : var_2))))));
                            }
                        }
                    }
                }
                var_25 = (max(var_25, (((((612473084 ? 6625203128222845430 : (arr_3 [i_0]))) * ((((arr_9 [i_0]) + (arr_9 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
