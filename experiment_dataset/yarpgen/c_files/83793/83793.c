/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 | (!var_6)))) == (max(var_0, -7019800594816653306))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = ((((((((arr_3 [7] [i_1]) && (arr_1 [12])))) - (min(656805212, (arr_0 [i_0] [i_1]))))) & (arr_2 [i_0])));
            var_12 = 17179869183;
        }
        var_13 = (min(((~(((arr_2 [i_0]) ? 0 : (arr_6 [i_0] [i_0]))))), ((min(var_0, 656805212)))));
        var_14 -= ((!(arr_7 [10] [i_0])));
        var_15 = (arr_7 [4] [4]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_16 = (max(-656805212, -656805213));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_17 *= -6984735141448487813;
                    var_18 = (((arr_14 [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1]) ? (arr_13 [i_4] [i_4 + 2] [i_4 + 2] [i_4 - 1]) : (arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 2])));
                }
                var_19 = (min(var_19, ((((((-6984735141448487813 ? (arr_17 [i_2] [2] [i_4]) : (arr_11 [i_2] [i_2] [12])))) < -6984735141448487813)))));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_20 = ((max(6962, ((~(arr_13 [i_2] [1] [i_2] [14]))))));
                var_21 ^= (max(((((((arr_14 [i_3] [5] [i_6] [i_3]) << (780587191 - 780587179)))) ? (arr_13 [i_2] [i_3] [i_2] [i_2]) : -1001142255)), 8743));
            }
            arr_20 [i_2] [i_3] [i_3] = (arr_17 [i_2] [i_2] [i_2]);
        }
        var_22 = 26622;
    }
    var_23 = (max((((((var_9 ? 1 : -23)) > var_3))), ((var_5 % ((-1 ? var_3 : var_5))))));
    #pragma endscop
}
