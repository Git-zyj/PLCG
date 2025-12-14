/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((37736 ? (-127 - 1) : (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [i_1] = ((!(arr_1 [i_1])));
            var_16 ^= (((arr_2 [i_0] [i_1]) != 10));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 = (max(var_17, (~37736)));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_16 [i_2] [3] [i_3] [i_0] = (((arr_6 [i_3 + 1] [i_3 + 1]) ^ ((((arr_10 [i_0]) > var_1)))));
                            var_18 = ((37726 ? 3894 : -112));
                            arr_17 [7] [0] [i_2] [i_3] [i_2] [i_5] [0] = (((200 > 130) ? (arr_13 [i_0] [i_3 + 1] [2] [i_4] [i_5]) : 37729));
                        }
                        arr_18 [4] [i_2] [i_2] [i_4] [i_3] = 2304282278;
                        arr_19 [i_0] [i_2] [i_3] [i_4] [8] [0] = ((210 ? 2147483647 : -92));
                    }
                }
            }
            var_19 -= (((arr_1 [i_0]) * 1));
            var_20 -= ((-20 + 2147483647) >> ((((var_3 << (59 - 45))) - 52772853)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_21 += 17;
                            var_22 *= (((((var_6 ? 37753 : (arr_21 [i_6] [i_7] [i_8])))) & (27799 - 12565766575505143702)));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_23 *= var_11;
                            var_24 = ((134217727 && 37729) ? (((arr_23 [i_0]) % 63584)) : (arr_29 [5] [i_2] [10] [i_7] [5] [1] [i_9]));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_2] [i_6] [i_2] [i_10] = ((-(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1])));
                            var_25 = (max(var_25, (((10 ? 27804 : 58440)))));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, ((((arr_31 [i_0] [i_0] [i_0] [i_0]) != -2503356088125063251)))));
                            var_27 = (17546511438308696030 ^ var_3);
                            arr_37 [i_0] [i_0] [i_2] = (arr_28 [i_0] [i_2] [i_0]);
                        }
                        var_28 -= ((~(arr_36 [i_0] [i_2] [i_6] [i_6] [i_0])));
                    }
                }
            }
            var_29 = (max(var_29, (-54 * 127)));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (((((arr_15 [i_12] [i_12] [i_12] [0] [i_12] [4]) && var_8))))));
        var_31 = (((var_6 < var_13) ? -40541 : ((900232635400855585 ? 0 : var_0))));
    }
    var_32 = ((((((max(var_8, var_11)) & ((~(-127 - 1)))))) | 2027280476113208305));
    var_33 = ((60 ? 2254458732170209934 : 65529));
    var_34 = var_13;
    #pragma endscop
}
