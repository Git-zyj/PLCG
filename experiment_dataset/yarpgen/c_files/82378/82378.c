/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((-((~(arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = (((arr_2 [i_0]) >= ((1577420306 << (1 - 1)))));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_0] [i_1] = (i_0 % 2 == 0) ? (((502972863 > ((1 << (((arr_7 [i_0]) + 1414077367))))))) : (((502972863 > ((1 << (((((arr_7 [i_0]) - 1414077367)) - 390839102)))))));
                var_17 = ((-(arr_0 [i_0] [i_0])));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_18 += -14884;
                arr_13 [i_0] [i_0] [i_3] [i_0] = 2849985044;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 = ((~((var_0 & (min(6758316849503999371, 251))))));
                            arr_20 [i_4] [i_4] [i_0] [20] [i_0] = max(((((arr_6 [i_0]) == var_3))), (~1577420320));
                            arr_21 [i_0] [i_0] [14] = (arr_9 [i_3] [i_5 - 1] [i_5 - 1] [i_0]);
                        }
                    }
                }
            }
            var_20 = (max(var_20, ((min(((11688427224205552218 ? 3551754938503879472 : (((1986229998 ? (arr_3 [16]) : -2097152))))), 246)))));
        }
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_0] [1] = (((arr_9 [i_6 - 3] [i_6] [i_0] [i_0]) != ((((var_9 ? 14884 : -418110458))))));
            var_21 = ((-(arr_19 [1] [1] [i_0] [i_6] [i_6])));
            var_22 = (((var_5 + 2201306055) - (((var_12 >> (arr_22 [i_0] [6] [i_6 - 2]))))));
            var_23 = ((-(min(((max(1, (-2147483647 - 1)))), ((var_12 ? 11688427224205552220 : var_11))))));
        }
    }
    var_24 += var_13;
    var_25 = (max(var_4, var_4));
    #pragma endscop
}
