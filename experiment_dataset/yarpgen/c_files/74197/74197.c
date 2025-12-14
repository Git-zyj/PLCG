/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((~1), 3936910649));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((((((15498038821554197932 >> (var_14 - 150))) >> ((((var_11 >> (arr_1 [i_0] [i_0]))) - 36795))))) ? (arr_1 [i_0] [i_0]) : -var_1));
        var_19 ^= ((-(arr_0 [i_0])));
        var_20 = ((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = (var_7 ? var_6 : (arr_10 [i_0] [i_1] [i_2] [i_3]));
                        var_21 = (max(var_13, ((((0 ? 6498983217507527577 : var_8)) + (((var_16 ? var_9 : 358056653)))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_22 = (arr_3 [i_1] [i_4]);
                        var_23 = ((min((((arr_5 [i_1] [i_1]) % -8237)), ((min((arr_10 [i_0] [i_1] [i_1] [i_4]), (arr_1 [i_0] [i_1 - 2])))))) + (min(((var_4 | (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), 0)));
                        var_24 ^= var_4;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_5] [3] [17] [17] [i_0] = (max((((-(arr_10 [6] [i_0] [i_0] [4])))), (((381579631 ? (((((arr_9 [i_0] [19] [i_2] [i_1] [i_2] [i_2]) && var_6)))) : (14 / 560918742))))));
                        var_25 = (((arr_7 [i_5] [i_2] [i_1 - 2] [i_0]) + (((arr_7 [i_0] [i_1 - 2] [i_2] [i_5]) / (arr_7 [i_0] [i_1] [i_2] [i_2])))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_26 = (!((min((~var_3), (arr_5 [i_0] [i_0])))));
                        var_27 = ((-(max((arr_12 [i_0] [i_1] [i_2] [i_2]), 1995975141739748016))));
                        var_28 = (!0);
                        arr_20 [i_6] [i_6] = (min(((-(arr_4 [i_0] [i_1] [i_2]))), var_5));
                    }
                    arr_21 [i_2] [i_0] [i_0] = (((((1 | (~1)))) ? (((arr_15 [1] [i_1] [i_0] [i_0] [i_0]) ? ((var_12 ? var_2 : var_13)) : (((var_12 ? (arr_18 [i_1]) : (arr_16 [i_0])))))) : ((((!(((var_11 ? (arr_0 [i_0]) : var_4)))))))));
                }
            }
        }
    }
    var_29 = 189;
    #pragma endscop
}
