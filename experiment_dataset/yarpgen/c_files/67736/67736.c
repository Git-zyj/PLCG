/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += -38;
    var_14 = (min(var_14, var_4));

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 *= (((arr_1 [i_0 - 1]) ? (((var_8 ? (!0) : ((60 ? -936336305 : -9223372036854775799))))) : (arr_2 [15])));
        var_16 ^= ((10794665804984553559 != ((max((arr_0 [i_0 - 1]), var_11)))));
        var_17 = (max(var_17, (arr_2 [i_0])));
        var_18 = (max(var_18, ((((!(((4087866046 ? var_7 : (arr_0 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = ((max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))));
        arr_5 [i_1] |= ((2626362039 || (-127 - 1)));
    }

    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_20 = (~-1);
                var_21 = -9223372036854775799;
            }
            arr_14 [i_2] = (max(((!(arr_8 [i_2 + 1]))), ((var_10 || (arr_3 [i_2 - 1])))));
            arr_15 [i_2] [i_2] = (max((arr_10 [5]), (arr_2 [i_2 - 3])));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            arr_19 [i_5] [i_2] = (arr_13 [i_2]);
            var_22 = ((max(16383, 1274970509)));
        }
        var_23 = (arr_3 [i_2]);
    }
    for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_24 = ((!(arr_10 [i_6 - 2])));
        var_25 -= ((~(((arr_6 [i_6 + 1] [i_6 + 1]) | (arr_6 [i_6 - 1] [i_6])))));
    }
    #pragma endscop
}
