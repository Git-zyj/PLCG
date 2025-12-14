/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (min((((-(arr_3 [i_1] [i_1])))), ((min((arr_3 [i_1] [i_1]), 282935480)))));
                var_11 ^= (min((max((arr_0 [i_0]), 120)), (arr_0 [i_1])));
                var_12 ^= (max(((min(-var_1, (!28335)))), (~var_6)));
                arr_6 [i_1] [i_1] [i_1] = (min(((+(((arr_0 [i_1]) & var_2)))), ((((((var_10 != (arr_3 [i_1] [i_1])))) - (arr_3 [i_1] [i_1]))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 *= ((((((arr_4 [8] [i_2] [i_2]) - -1))) || (((-150 - ((((arr_0 [i_1]) != var_0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] = (((((arr_0 [i_2]) ^ (arr_0 [i_3]))) / (((arr_0 [i_2]) & var_0))));
                                var_14 = ((max((max((arr_0 [i_1]), var_8)), (max(5859056029585416330, (arr_0 [i_0]))))));
                                arr_15 [i_1] [i_1] [i_1] [6] [i_1] [6] [i_1] = ((((-(max(148, -2127970304592991962)))) / ((max(((min(54272, (arr_13 [i_4] [i_3] [i_2] [i_0] [i_0])))), var_10)))));
                                arr_16 [i_1] [i_2] [i_2] [i_1] [i_1] = -1661843790;
                                var_15 = ((255 * (min((~220), 2633123505))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 -= (!var_6);
    #pragma endscop
}
