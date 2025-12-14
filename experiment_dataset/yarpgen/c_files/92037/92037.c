/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((var_1 & (((arr_0 [6]) ? var_10 : (arr_2 [i_0 - 1] [17])))));
        var_19 = (arr_2 [i_0 - 2] [i_0 - 2]);
        var_20 = ((!((((arr_3 [i_0 - 3] [i_0]) - var_14)))));
        var_21 |= 1;
    }
    var_22 = ((!((max(4166651719077925954, (var_18 - var_17))))));
    var_23 += var_6;
    var_24 = ((((min((var_1 == var_8), var_5))) | var_2));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_25 = (((((((~(arr_2 [i_2] [i_1])))) ? (((arr_6 [i_1]) * (arr_0 [2]))) : var_4)) ^ (((((arr_6 [i_1]) && ((((arr_6 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_2]))))))))));
                var_26 ^= var_15;
                arr_9 [i_1] = (((arr_3 [i_2] [i_1]) % ((((arr_8 [i_1] [i_2]) >= (min((arr_2 [i_1] [i_2]), (arr_7 [i_1]))))))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_27 ^= (((min((var_15 + var_15), (((arr_11 [i_1] [i_2] [i_3] [i_3]) ? var_14 : (arr_5 [i_1] [i_1]))))) >> ((((((var_3 ? var_10 : var_8)) * var_4)) - 622))));
                    var_28 = (((arr_0 [3]) & ((((-31603 <= (arr_10 [4] [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
