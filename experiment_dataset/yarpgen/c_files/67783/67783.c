/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_14 = 65520;
        var_15 = ((!(arr_1 [i_0 + 1])));
        var_16 -= ((+(((arr_1 [i_0 - 1]) | (arr_1 [i_0 + 1])))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_17 = (((~var_10) > ((var_4 << (var_4 - 3142827168)))));

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_18 ^= ((!(arr_2 [i_3 + 1] [8] [i_3 + 1])));
                    arr_11 [i_0] [i_1] [i_1 + 3] [i_1] [i_1] [i_1] = ((~((((arr_0 [i_0]) > var_1)))));
                    var_19 = (max(var_19, var_5));
                    var_20 = var_5;
                }
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    var_21 = var_9;
                    arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1] = -var_13;
                    var_22 = ((((((arr_1 [i_0]) >> 27))) ? var_8 : (((arr_5 [i_0] [i_2] [i_4 - 2]) ? (arr_0 [i_2]) : 9223372036854775806))));
                    arr_16 [i_0] [i_4 - 1] [i_4 - 2] = ((var_8 < (arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_0 + 1])));
                }
                var_23 = ((((((arr_9 [i_1] [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 2] [i_0]) - 1))) ? ((6 ? (arr_12 [i_0]) : var_3)) : (arr_6 [i_0] [i_1] [i_1 + 4] [i_1 + 3])));
            }
            arr_17 [0] |= ((((((arr_9 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [6]) >> (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [0]) - 64011))))) > ((62991 ? 1308735552862056122 : 27736))));
            arr_18 [i_0] [i_0] [i_0] = (arr_7 [i_1]);
        }
        arr_19 [i_0] [i_0] = ((-(((!(arr_7 [i_0 + 2]))))));
    }
    var_24 = (min(var_24, (((var_6 ? -var_3 : (var_7 / var_0))))));
    var_25 = var_7;
    var_26 += (((min((20 >> 6), (!15306121310566907227))) ^ 2068732491));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_27 = (arr_0 [i_5 - 1]);
        arr_22 [i_5] = arr_6 [8] [i_5 + 1] [i_5] [i_5];
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_25 [6] |= ((((arr_12 [0]) ? 27 : (arr_12 [6]))));
        arr_26 [4] |= ((!(((2068732500 ? 4890 : (arr_21 [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_28 = (((((arr_27 [i_7]) | var_11)) % var_12));
        var_29 &= ((~(((arr_28 [0] [i_7]) ? var_12 : 4294967295))));
    }
    #pragma endscop
}
