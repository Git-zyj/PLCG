/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 42127;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((((((7694 >= ((((arr_0 [i_1] [i_1]) == var_7))))))) * ((max((arr_8 [i_1]), 1023))))))));
                        var_17 = (1036 - -17746);
                    }
                    var_18 = (max(var_18, ((min((((arr_2 [i_2]) >= 98)), ((1 || ((min(1, (arr_6 [14] [i_1] [i_2])))))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] = ((max(((((arr_13 [i_0] [i_0]) < (arr_2 [i_0])))), (min((arr_6 [i_2] [i_1] [i_1]), 64540)))));
                                arr_16 [i_0] [i_1] [i_2] [i_4 - 1] = ((((((4062699336 < (max((arr_1 [i_0] [i_5 - 1]), 2179180265)))))) == ((+(min((arr_4 [i_0] [i_1]), 396438394617480604))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (~(min(-3258785690, var_4)));
    #pragma endscop
}
