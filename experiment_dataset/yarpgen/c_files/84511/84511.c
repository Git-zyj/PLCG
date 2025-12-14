/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((181 ? (~var_8) : var_8));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (~var_9);
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0] [i_0]) == var_4)) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]));
        arr_4 [i_0] [i_0] = ((((max((((arr_1 [i_0]) ? 65504 : (arr_0 [15] [i_0]))), (arr_1 [i_0])))) ? ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (max((((arr_0 [i_0] [i_0]) ? 181 : (arr_0 [i_0] [i_0]))), ((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_12 -= (!var_8);
            arr_11 [9] [9] = (1955464757 > -8273209077483587535);
            var_13 = -5820741313884804200;
        }
        var_14 = ((((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))) >> ((((var_4 | (arr_1 [i_1]))) - 1210506451)));
        var_15 -= (((~(max(var_4, (arr_8 [i_1]))))));
        arr_12 [i_1] [i_1] = ((~((((((arr_1 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (!var_4) : 115))));
    }
    var_16 = (max((((var_6 + 9223372036854775807) << (((((max(var_6, var_3)) + 259723530406744225)) - 52)))), ((var_6 - (((max(var_5, var_1))))))));
    #pragma endscop
}
