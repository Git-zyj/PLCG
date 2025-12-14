/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((-var_4 / var_7), 4));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = 4897653445843033189;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = arr_8 [i_2 + 2] [i_2 - 1];
                    arr_10 [1] [5] [i_1 - 1] [6] = (((!var_2) % (((var_10 == var_5) | 14481231186219250889))));
                    arr_11 [i_0] [i_2 + 1] [i_2 - 1] [i_1 + 1] = ((((-(arr_0 [i_2 + 2]))) * var_7));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_17 = (arr_5 [i_3]);
        arr_14 [i_3] = ((-14997 * (((arr_6 [i_3]) - (arr_6 [i_3])))));
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        var_18 = 15;
        var_19 ^= var_12;
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_22 [14] = (min((arr_21 [i_5 + 1] [i_5 + 1] [1]), ((((!var_5) & ((63488 & (arr_20 [15] [16]))))))));
            var_20 = ((+(min((arr_16 [i_5 - 1] [i_5 + 1]), var_7))));
        }
        var_21 = (((max((arr_18 [i_5 + 1]), -4318607762474221371)) ^ (arr_20 [2] [i_5 - 1])));
    }
    var_22 = (min(var_22, var_2));
    #pragma endscop
}
