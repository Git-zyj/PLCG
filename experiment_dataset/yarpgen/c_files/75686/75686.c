/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (((((~(arr_1 [i_1])))) ? (arr_0 [i_0]) : (((((arr_1 [i_1]) > (arr_1 [0]))) ? 862530531 : ((var_15 ? (arr_2 [i_0]) : 1))))));
            arr_4 [i_0] [i_1] = (((((((var_3 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_3 [i_1]) : (arr_3 [i_0]))) + (((arr_3 [i_0]) << (((arr_3 [i_1]) - 31562))))));
            var_21 = (((((((((arr_3 [7]) ? var_10 : var_15))) ? 18446744073709551599 : (((((arr_1 [i_0]) && (arr_2 [i_0])))))))) ? (arr_2 [i_0]) : ((min((arr_0 [i_0]), ((24 << (127 - 127))))))));
            var_22 = (((((-(arr_0 [i_1])))) ? ((((arr_2 [i_0]) == ((47 ? (arr_2 [i_0]) : (arr_3 [i_1])))))) : (((!(arr_2 [i_1]))))));
            var_23 = (arr_3 [i_0]);
        }
        var_24 = (arr_3 [i_0]);
    }
    var_25 = var_4;
    var_26 = (((~((78 << (75 - 54))))));

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2 + 1] &= ((max(7197855933835102204, 79)));
        var_27 = (max(var_27, 2216615441596416));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_28 = min(((+((18446744073709551615 ? (arr_10 [i_3]) : (arr_11 [i_3]))))), ((((((arr_12 [i_3]) ? var_14 : -125))) % (arr_12 [i_3]))));
        arr_13 [i_3] [i_3] = 8522825728;
    }
    var_29 = 82;
    #pragma endscop
}
