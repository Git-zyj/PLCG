/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = -var_7;
        var_14 = (!15454);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = ((-(arr_4 [i_1])));
        var_16 = (-15451 - var_6);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_2] [i_2] [i_3] = (((((-16621 || (((arr_11 [i_2] [i_3]) < var_11))))) * (min(((var_3 ? (arr_7 [i_2] [i_2]) : (arr_8 [i_2]))), (((!(arr_10 [i_2] [i_3]))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = ((~(((arr_17 [i_3 + 1] [i_3]) - (arr_17 [i_3 + 1] [i_3])))));
                            var_18 = 224;
                            var_19 ^= (((((arr_16 [i_3 + 2] [i_3 + 2] [i_5 + 3] [i_5 + 2]) ? var_4 : (arr_7 [i_3 + 1] [i_5 + 2]))) > (((1724459844 >> (2001144410 - 2001144410))))));
                        }
                    }
                }
            }
            arr_26 [i_3] [i_3] [i_2] = ((((((1466684200 <= (arr_15 [i_2]))) ? (((16620 ? var_5 : var_3))) : -1801006243482371280)) / (((8839232719526071417 ? (arr_13 [i_2]) : -var_2)))));
        }
        var_20 = (min(var_20, var_2));
        var_21 = (min(var_21, (((-(((var_12 && var_7) / (arr_18 [i_2] [i_2]))))))));
    }
    var_22 = var_1;
    var_23 *= ((((var_4 && (var_0 == var_4))) ? (max(((15468 ? var_6 : 1466684212)), var_3)) : ((~(var_0 ^ var_8)))));
    #pragma endscop
}
