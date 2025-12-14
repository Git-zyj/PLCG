/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((((min(var_2, 8)))) ? (min(((1 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), ((~(arr_2 [i_0] [i_0]))))) : (((((arr_2 [i_0] [i_0]) == 1))))));
        arr_4 [14] = ((-((-(arr_3 [i_0] [i_0])))));
        var_14 = (min(((((((arr_1 [18]) == (arr_1 [i_0])))) % ((min(32767, -32767))))), (((min((arr_0 [17] [i_0]), 16))))));
        var_15 = ((((min(((min(32756, 96))), (~var_2)))) / (min((arr_3 [i_0] [i_0]), var_8))));
    }
    var_16 = (min(var_16, ((min((7876700389302877721 < var_1), var_6)))));
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_18 = 2087572342;
                        var_19 = -1720573776;
                        var_20 = (max(var_20, (((~(((arr_12 [i_4]) ? (arr_12 [i_4]) : (arr_12 [i_4]))))))));
                    }
                    arr_15 [i_2] = -17539;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [2] [7] [i_5] [i_5] [8] [i_2] = ((((!(((13189645742163987670 ? var_3 : 47427))))) ? (min((arr_18 [i_1] [i_1] [1] [i_2 - 1] [2] [i_2]), 133419317)) : 147));
                                arr_22 [6] [i_2] [5] [i_5] [i_6] = (min((((!(!8070450532247928832)))), ((5257098331545563945 * (((1 ? 127 : 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 |= var_2;
    #pragma endscop
}
