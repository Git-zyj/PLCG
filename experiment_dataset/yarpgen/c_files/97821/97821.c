/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_4 * ((64 ? 0 : 4977383186073203009))))) ? (!var_10) : var_1));
    var_19 = ((32759 ? -64 : 64));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 += (((((-(arr_5 [i_4])))) & (((((var_10 ? var_1 : 0))) ? ((1 % (arr_5 [i_0]))) : (((arr_5 [i_0]) ? 14841732993695428928 : 12268))))));
                                arr_13 [i_0] [i_2] [i_3] = (((~16855) <= (var_15 / var_9)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_1 - 1] = (((~-31177) ? (((((min(64, 6949460634481727003))) ? ((((arr_9 [i_0] [i_0] [i_0] [i_1 - 2] [i_1] [i_1]) < -1550463946))) : (var_3 || var_7)))) : (((((~(arr_7 [i_0] [i_1] [i_1 + 1] [i_1 + 1])))) ? 13469360887636348617 : (arr_0 [i_1 + 1] [i_1 - 2])))));
            }
        }
    }
    #pragma endscop
}
