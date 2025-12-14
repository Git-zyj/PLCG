/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [2] [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (max(((((1 || (arr_6 [i_2] [i_1] [i_2]))) ? ((min(var_2, 12936))) : (((!(arr_7 [i_1])))))), ((min((arr_3 [i_2] [1]), 1)))));
                    arr_9 [i_1] [i_1 - 1] [i_1] = ((((-2887 ? (min(54351, -4885135164891863563)) : (var_9 <= 54358))) >= (((((arr_8 [i_0] [i_1 + 1]) && (arr_8 [i_0] [i_1 + 1])))))));
                    var_14 = (min((arr_0 [i_1 - 1] [i_1 - 2]), (((arr_0 [i_1 + 1] [i_1 + 2]) ? (arr_5 [i_1 + 2] [i_1 - 2]) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                    arr_10 [i_0] [i_1] = (((max(((-2 ? var_4 : (arr_3 [i_1 - 2] [i_2]))), (arr_1 [i_1] [i_1 - 1]))) << (!1278605714)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 = (((~36129) ? ((1 ? 1 : ((min(114, 1))))) : (max(32767, ((28403 << (6316 - 6309)))))));
        var_16 ^= (((((var_10 ? ((min(21701, var_11))) : ((max(var_11, (arr_7 [i_3]))))))) ? (((((arr_3 [i_3] [i_3]) + 2147483647)) >> ((((-(arr_11 [i_3] [i_3]))) - 1690830118)))) : ((((var_9 ? (arr_1 [i_3] [i_3]) : 54351))))));
    }
    #pragma endscop
}
