/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 &= ((var_0 ? ((((max(var_2, (arr_1 [i_0])))) ? (max(15283, var_7)) : ((min(1571071935, 2012152026))))) : (arr_2 [i_0])));
        var_13 = (max(var_13, 1));
        arr_3 [i_0] [i_0] = ((!((!(((~(arr_0 [i_0]))))))));
        arr_4 [0] = 3;
        arr_5 [i_0] [i_0] = (max((arr_1 [i_0]), (((((((arr_2 [i_0]) / -6705))) ? 116 : (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((-(arr_7 [i_1])));
        arr_10 [i_1] [5] = 511;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_14 = (max(var_14, (((((var_1 + 2147483647) >> (-4 + 25))) ^ var_5))));
            arr_17 [i_2] = var_1;
        }
        var_15 = (min(var_15, (--5320)));
        var_16 *= 23;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_5] [i_7] [i_5] |= (((-1571071935 + 2147483647) >> (((~var_3) + 23732))));
                        arr_31 [i_6] [i_5] [i_6] [i_5] [i_4] [i_4] = ((-1 != (((((((arr_26 [19]) ? (arr_23 [i_4] [i_5]) : 1))) && 59900)))));
                        var_17 += (min((min(-666223111, var_8)), (((arr_18 [i_5] [i_5]) << (var_6 - 244)))));
                        var_18 &= 1;
                        var_19 = ((((((arr_23 [i_4] [i_5]) ? (arr_23 [i_5] [i_5]) : (arr_23 [i_7] [i_5])))) != 12927039425189316252));
                    }
                }
            }
        }
        arr_32 [i_4] [i_4] = (((arr_28 [i_4] [i_4]) ? (arr_19 [i_4]) : ((~(arr_24 [17] [i_4] [i_4])))));
    }
    var_20 = (((((((var_5 ? 157543998 : var_11))) ? -var_2 : ((-1571071928 ? 959264394 : (-2147483647 - 1)))))) | var_10);
    var_21 = ((var_8 ? var_10 : var_11));
    var_22 = (max(1, 1));
    var_23 *= ((((((-1136614032 >= var_11) ^ var_8))) ? 27038 : ((~(!var_0)))));
    #pragma endscop
}
