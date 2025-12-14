/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 ? var_5 : -var_1));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = (min(var_21, (((!(((arr_4 [i_0] [i_0] [i_0]) != -2093791554)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = (min(var_22, (((((((arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [9] [i_3]) ? var_10 : var_1))) ? (arr_1 [i_0] [i_0 + 1]) : 185)))));
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((((!(arr_10 [i_0 - 1] [i_1] [i_2] [i_1]))) ? (arr_6 [i_1] [2] [i_1] [i_1]) : 30));
                        var_23 = (max(var_23, ((((arr_2 [i_0 + 2]) * (arr_2 [i_0 + 2]))))));
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0] = ((arr_3 [i_0 + 2] [i_0] [i_0 - 2]) == (arr_3 [i_0 - 1] [i_0] [i_0 - 2]));
                        var_24 = ((-11018 & (arr_10 [i_0 - 2] [i_0 - 2] [i_0] [i_1])));
                    }
                }
            }
            var_25 = (max(var_25, var_1));
            var_26 = (min(var_26, ((((((arr_1 [0] [i_1]) ? (arr_2 [5]) : (arr_10 [i_0] [i_1] [i_0 + 1] [i_0]))) % ((-11011 ? 21 : 244)))))));
        }
        var_27 = (max(var_27, (250 ^ -93)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_28 = (max(var_28, (((var_4 ? ((((((var_18 << (((arr_14 [9]) - 96))))) || ((((arr_16 [18]) ^ (arr_15 [i_4]))))))) : (((!(234 ^ 0)))))))));
        var_29 = (min((max(3741871211, 250)), ((((((arr_15 [i_4]) - 244)) - ((var_8 ? var_19 : (arr_14 [i_4]))))))));
        var_30 = (max(var_30, ((min(var_13, ((((var_1 ? -5800808998561981797 : var_12)) & var_7)))))));
        var_31 ^= (((((var_18 + (arr_16 [i_4])))) ? ((min(33, 105))) : var_8));
    }
    #pragma endscop
}
