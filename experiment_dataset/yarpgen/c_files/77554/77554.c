/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_11 | 27639);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] = 1869;
                arr_9 [i_0] [i_1] = ((arr_1 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_2 + 3]));
                var_18 = (min(var_18, (arr_5 [6] [6] [i_2])));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_19 += (((((arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_3]) & (arr_4 [i_1]))) > (arr_11 [i_0] [i_0 - 1] [i_2 - 1] [i_2] [i_2 + 3] [i_2 + 1])));
                    var_20 -= (((((-675351814 ? 1 : 16322))) / ((var_9 ? (arr_10 [i_1]) : -675351814))));
                }
                arr_12 [i_0] [i_1] [i_1] [i_0] = 1869;
            }
            arr_13 [i_0] [i_0 + 1] [i_0] = max(((((max((arr_1 [i_0 - 1]), 16322))) / (var_11 | var_4))), (arr_2 [i_0 - 1]));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_21 = (max(var_21, ((((((arr_11 [i_0] [i_0 + 1] [i_4] [i_4 - 1] [i_4] [i_4]) ? (arr_11 [i_0] [i_0] [i_0] [i_4 - 1] [i_4] [i_4]) : (arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4]))) - ((min(2940533698, var_16))))))));
            var_22 = (((10293431233402770560 ? 68719476735 : (arr_11 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_4 - 1]))));
        }
        arr_17 [i_0] = ((~(min(-1876, -598784160))));
        var_23 ^= -10776;
    }
    #pragma endscop
}
