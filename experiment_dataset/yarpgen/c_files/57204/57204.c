/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_19 *= (+(min((arr_0 [i_0]), (arr_1 [i_0] [i_0 + 1]))));
        var_20 = (min(((~(arr_0 [i_0 + 1]))), (arr_1 [i_0 + 1] [i_0])));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = var_7;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_9 [i_1] = ((((((arr_3 [i_1 + 1] [i_2 + 3]) ? (arr_3 [i_1 + 1] [i_2 + 1]) : (arr_3 [i_1 + 1] [i_2 + 2])))) ? ((min((arr_3 [i_1 + 1] [i_2 + 3]), (arr_3 [i_1 + 1] [i_2 + 2])))) : (arr_3 [i_1 + 1] [i_2 - 1])));
                    var_21 = 69;
                    var_22 = (max(var_22, (arr_1 [i_1] [i_1])));
                    var_23 = (max(var_23, (arr_0 [i_3])));
                    var_24 = ((((max((arr_3 [i_3] [i_2]), var_6))) ? (arr_1 [i_1] [i_1]) : ((~(arr_8 [i_1] [i_1 + 1] [i_3])))));
                }
            }
        }
        arr_10 [i_1] = (((((-(arr_8 [i_1] [i_1] [1])))) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1])));
        var_25 -= (arr_5 [i_1 + 1] [i_1]);
        var_26 = ((((((arr_5 [i_1] [i_1 + 1]) < (arr_5 [i_1] [i_1])))) < (arr_6 [14] [i_1])));
    }
    var_27 = 9168027605477507997;
    var_28 = (!var_15);
    var_29 = (max(var_29, (max(9168027605477507997, 24))));
    var_30 = var_18;
    #pragma endscop
}
