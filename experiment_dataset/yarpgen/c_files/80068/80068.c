/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 = 1;
            var_11 = ((~(((arr_2 [i_0]) ? 52645 : (arr_2 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_12 = (min(var_12, (((((min((arr_7 [i_0] [i_2]), 61182))) && ((45466 && (arr_8 [i_2] [i_2]))))))));
            var_13 = (max(var_13, ((((((((arr_7 [i_2] [i_2]) ? var_4 : 1))) ? (((arr_6 [i_2]) / 624194920)) : (~var_3))) == ((~(((arr_3 [i_0] [i_2]) ? 1 : 1))))))));
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_14 = (max(var_14, (max((max(var_6, (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1]))), 12900))));
            var_15 += var_4;
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 |= var_3;
                        var_17 = (arr_11 [i_0] [i_0]);
                        var_18 = (max(var_18, (((1 ? 3352827587 : ((((((0 ? 0 : 61525))) ? 65535 : ((min(61496, (arr_0 [i_0] [i_0]))))))))))));
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = (((min((arr_10 [i_0]), (arr_10 [i_0]))) || ((max(var_3, (arr_10 [i_0]))))));
        var_19 = (i_0 % 2 == 0) ? (((1528351892 << (((arr_7 [i_0] [i_0]) - 1102076827))))) : (((1528351892 << (((((((arr_7 [i_0] [i_0]) - 1102076827)) + 860175390)) - 2)))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_20 += ((~(~173645658)));
        var_21 |= (((!(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [0]))) ? var_3 : var_2);
    }
    var_22 |= ((1528351899 ? 0 : 2097151));

    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_23 += -2734017312027142431;
        var_24 = (max(var_24, 1));
        var_25 = 4011;
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] = ((((min(26554, 8))) ? ((var_0 ? 1 : (arr_23 [i_8]))) : var_1));
        var_26 = (arr_22 [i_8] [i_8]);
        var_27 = (min(var_27, (min(-1, -1528351899))));
    }
    var_28 = ((var_5 ? 2769182058 : ((1 ? (~var_0) : var_1))));
    #pragma endscop
}
