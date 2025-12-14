/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((min(var_14, var_13)) >= (((arr_2 [i_0]) & (min((arr_4 [i_0] [i_1]), (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] [i_0] = var_0;
                arr_7 [i_0] [i_0] = (((max((((10314829235231458686 ? var_12 : 22787))), (min(12422847500087706772, var_6)))) != ((((!(arr_4 [i_0] [6])))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 ^= var_2;
                                arr_16 [i_0] [i_3] [i_2] [i_1] [i_0] = arr_1 [i_0];
                                var_18 = (((arr_10 [i_0]) ? (arr_9 [i_0] [10] [0]) : (var_9 / var_12)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += var_14;
    #pragma endscop
}
