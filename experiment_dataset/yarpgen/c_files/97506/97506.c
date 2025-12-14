/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_8 ? 1610612736 : ((max(var_0, var_7))))) > var_6));
    var_13 &= (((min(var_10, ((var_5 ? var_3 : var_10)))) <= (((((((var_4 >> (var_0 + 86)))) <= var_1))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 + 2] [i_0] = (((((var_9 <= 23328) ? (arr_1 [i_0 + 1] [i_0 - 1]) : -23328)) <= (((!var_5) ? (1 + 12288) : (var_8 ^ var_4)))));
        var_14 = (max(var_14, ((max(-978153946, 6721)))));
    }
    var_15 = ((22359 * ((var_6 ? (208 <= -23328) : ((1681730437403838288 ? (-32767 - 1) : 54230))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2 - 3] = ((var_10 - (arr_6 [1])));
                arr_11 [i_2] [i_2] [i_1] = ((((min((arr_7 [i_2 - 1] [i_2 + 2] [i_2 + 2]), (arr_7 [i_2 - 2] [i_2 + 2] [i_2 + 2])))) || var_11));
            }
        }
    }
    #pragma endscop
}
