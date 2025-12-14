/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((!(((var_12 <= var_14) != var_14))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((+((10424029116643844328 ? (arr_4 [i_2]) : (arr_8 [i_2 - 1] [i_2 - 2])))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (min(var_13, (arr_7 [i_0] [i_0])));
                    arr_11 [i_2] [11] [i_1] [i_0] = (((~((var_8 ^ (arr_6 [i_0] [i_1] [1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = (arr_14 [4] [i_1] [i_1] [i_1] [i_1]);
                                var_21 = ((((var_5 ? ((var_10 ? 8022714957065707288 : var_2)) : -14434756914453124575)) * (((-(arr_2 [8] [i_0 - 1]))))));
                                var_22 = (max(((((((var_5 & (arr_0 [0] [4])))) ? (min(var_1, var_9)) : ((8022714957065707287 ? var_7 : var_9))))), ((6929056504042958527 ? 8022714957065707287 : var_7))));
                                arr_16 [12] = (arr_7 [14] [1]);
                                var_23 ^= 10424029116643844328;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((~105), var_0));
    var_25 = (var_1 > var_18);
    #pragma endscop
}
