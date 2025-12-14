/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((-143 ? var_4 : var_10))));
    var_13 = (min((max(((-321030825004041198 ? -321030825004041212 : -684793763)), (var_7 & var_3))), (((((-1 ? var_4 : 1611326656))) ^ ((3310842243 ? var_6 : 321030825004041177))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0]) ? var_5 : var_6));
        arr_2 [i_0] = (984125053 / (arr_0 [i_0]));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                var_15 += ((-var_7 ? ((-321030825004041198 ? 48763 : -2385136413947153913)) : (arr_4 [i_1] [i_2 - 1] [i_2 - 1])));
                var_16 = (min(var_16, (arr_6 [i_2 + 3] [i_2] [i_2 - 3] [i_2])));
                var_17 = (min(var_17, ((((arr_8 [i_1] [i_1] [i_1]) < -684793768)))));
            }
            arr_9 [i_1] [i_0] [i_0] = 684793762;
        }
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] = ((~((max(var_9, var_5)))));
        var_18 -= (~-684793762);
    }
    #pragma endscop
}
