/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!var_3) || ((!((max(-98, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((((var_3 ? var_11 : 3607559963))) | ((var_5 ? (arr_4 [i_0]) : var_4))))) ? (arr_4 [i_0 - 1]) : (((!(((var_9 ? (arr_3 [i_0]) : var_7))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_0 - 1] [i_1] [i_2 + 1] [i_3 + 3] [i_0] = ((~((min(97, (max(13194, (arr_7 [i_0] [i_1]))))))));
                                var_15 = (min(var_15, ((((max((~1323299954), 39987)) - var_7)))));
                            }
                            var_16 = (min(var_16, 51774));
                        }
                    }
                }
                arr_16 [i_0] = ((40014 ? ((-(arr_12 [5] [5] [i_0 - 1] [i_1 + 3] [i_0 - 1]))) : ((max(13186, (arr_13 [i_1 - 3] [i_1 - 3]))))));
            }
        }
    }
    #pragma endscop
}
