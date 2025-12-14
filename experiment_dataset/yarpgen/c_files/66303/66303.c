/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                var_16 = (var_7 >= var_8);
                var_17 |= (arr_4 [i_0] [i_0]);
                var_18 = (min(var_18, ((min(-1, (min((arr_2 [i_0] [i_0]), (arr_5 [i_2 - 2] [i_1 - 2] [i_2 - 1] [i_2]))))))));
                var_19 = (min(var_19, ((((((var_9 ? -8343861055337463078 : var_3))) ? -8343861055337463049 : var_0)))));
            }
            var_20 = (((var_14 ? var_14 : (arr_1 [i_0]))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_0] = ((~(arr_8 [i_0] [i_3])));
            var_21 += ((-3541195686452932995 ^ (((((arr_0 [i_0]) == var_13))))));
            var_22 = (max(var_22, ((((((((-8343861055337463078 - (arr_11 [i_3] [i_3] [i_3])))) ? ((max((arr_9 [i_0] [i_3] [i_3]), (arr_11 [i_3] [i_0] [i_0])))) : ((min(var_11, var_10))))) + ((-(arr_11 [i_0] [i_3] [i_0]))))))));
            arr_13 [i_0] = (min((((0 == -116) ? (arr_1 [i_3]) : var_1)), var_7));
            var_23 = (max(var_23, (max((arr_0 [i_0]), (arr_1 [i_0])))));
        }
        var_24 -= (((arr_0 [i_0]) ? (50618 & var_2) : (min((arr_0 [i_0]), var_15))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_25 = (max(var_25, ((((arr_6 [i_4] [i_4] [i_4]) * ((var_5 ? (arr_3 [i_4] [i_4]) : var_12)))))));
        var_26 = ((8343861055337463048 ? ((min(23829, (arr_1 [i_4])))) : var_5));
    }
    var_27 = -var_6;
    var_28 += -var_10;
    var_29 = var_14;
    #pragma endscop
}
