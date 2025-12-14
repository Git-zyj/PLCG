/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(var_3, var_0))));
    var_14 *= (((+-20) == ((-(var_3 == var_6)))));
    var_15 = (var_12 - var_12);
    var_16 = ((~(var_3 <= var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (max(-var_6, var_9));
                    var_17 = (((((-var_2 == (arr_2 [i_0])))) > var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = (((arr_11 [i_0] [i_2]) ^ ((min((min((arr_14 [i_0] [i_3] [i_3] [1] [i_4]), var_0)), (arr_2 [i_0]))))));
                                var_18 = ((((-(~var_1))) != (((var_3 * var_2) * (arr_4 [10])))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = (max(((min(var_10, ((54771 >> (var_1 - 293535821)))))), (~var_11)));
                                var_19 = (var_0 >= var_5);
                                arr_17 [i_0] [i_3] = ((((((var_5 ^ (arr_9 [i_4] [i_2] [i_1] [i_0]))))) <= (var_1 == var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
