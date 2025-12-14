/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (max((((((arr_3 [i_0] [i_1] [i_2]) ? var_9 : 33521664)))), ((33521655 ? 33488896 : (arr_1 [i_0])))));
                    arr_9 [i_0] [i_0] [i_2] = (((max(((0 ? 65533 : var_1)), 11140))) ? ((-(min((arr_7 [i_0] [i_1] [i_2] [i_1]), (arr_3 [i_0] [i_1 - 1] [i_2]))))) : ((((arr_2 [i_1 + 2]) ? (var_3 <= 0) : (((arr_0 [i_0]) ? 1130446340 : (arr_4 [i_0] [i_0] [i_0])))))));
                    var_16 = 11122;
                    var_17 = (min(((~(arr_5 [i_2] [i_1] [0] [i_0]))), (((arr_4 [i_2] [13] [i_1 + 3]) ? (arr_4 [i_2] [i_2] [i_1 + 3]) : var_1))));
                    var_18 &= (arr_6 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
        var_19 = (min(var_19, (((-128 * (max((arr_4 [i_0] [i_0] [i_0]), (((arr_3 [i_0] [i_0] [i_0]) ? 38168 : 2661821903220482585)))))))));
        var_20 += -9;
        arr_10 [i_0] [i_0] = -8999192106236534814;
        arr_11 [i_0] = -576775383;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_21 = (min(var_21, (((((((arr_6 [i_3] [13] [4] [13]) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : (arr_6 [1] [i_3] [i_3] [i_3])))) ? ((((((max(0, 38168))) < (((arr_5 [i_3] [i_3] [i_3] [i_3]) - 18446744073709551594)))))) : (((var_7 ^ 1786936912) ? (max((arr_13 [i_3]), 42)) : (((22 ? var_13 : (arr_0 [i_3])))))))))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_22 = (arr_13 [i_3]);
            arr_17 [i_3] [i_4] = ((-(arr_6 [i_3] [i_3] [i_4] [i_4])));
            arr_18 [i_3] [i_4] = (arr_12 [i_3]);
            arr_19 [i_3] = ((((((max(20884, (arr_3 [i_3] [i_4] [i_4])))) ? var_2 : (arr_6 [i_4] [i_4] [i_3] [i_3])))) ? (arr_4 [i_3] [i_4] [i_4]) : (arr_5 [i_3] [i_4] [i_3] [i_4]));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_23 = (max(var_23, (((((0 < ((max((arr_3 [i_3] [i_3] [i_3]), (arr_12 [i_3])))))) ? ((((arr_15 [i_3] [i_3]) && (((var_9 ? (arr_0 [i_3]) : (arr_12 [i_3]))))))) : ((((arr_3 [i_3] [i_5] [i_5]) >= -0))))))));
            arr_23 [i_3] [i_3] = var_10;
        }
        var_24 = ((57524 ? ((30628 ? (var_8 < var_6) : (((arr_20 [i_3] [i_3]) ? 65514 : (arr_4 [i_3] [i_3] [i_3]))))) : ((65533 ? (arr_1 [i_3]) : 2078434314))));
    }
    var_25 = var_13;
    var_26 = (min(var_5, var_9));
    var_27 = 60174;
    #pragma endscop
}
