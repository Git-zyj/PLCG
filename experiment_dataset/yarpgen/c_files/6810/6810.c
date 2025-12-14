/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (((((11 ? (((min(254, 246)))) : var_6))) ? 5 : var_6));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 -= (((var_1 + var_5) <= (arr_0 [i_0])));
                    var_14 = (max(var_14, -62));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [15] [13] [i_2] [i_0] [i_4] = (((var_6 / (max(1087016698, var_8)))));
                                var_15 = (min(var_15, (((((max(21734, (arr_10 [i_0 + 1])))) ? (min(var_1, 2346439238)) : (((-(arr_10 [i_0 + 1])))))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = var_4;
                }
            }
        }
        arr_18 [i_0] [i_0] = arr_4 [i_0] [i_0 + 1];
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_16 -= ((min((arr_14 [i_5]), 65510)));
            arr_26 [i_5] = ((-1210754709 + ((((max(253, (arr_20 [i_5]))))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_17 = (((((!(4 | 65535)))) >= (((!(arr_0 [i_5]))))));
                            var_18 = 9260;
                            arr_37 [i_5] [i_5] [i_5] [i_5] [i_10] [i_7] [4] = (((arr_7 [i_5] [i_7] [10] [i_5]) > (arr_5 [i_5] [i_9] [i_10])));
                            arr_38 [i_5] [i_7] [i_8] [i_8] [i_5] = ((!((((arr_8 [i_5] [i_7] [i_9]) ? var_8 : (((!(arr_33 [i_10] [i_9] [i_5] [i_5] [i_5])))))))));
                        }
                    }
                }
            }
            arr_39 [i_5] [i_7] = (max((((1210754708 * (arr_0 [i_5])))), -1));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    arr_45 [i_5] = ((((max((arr_4 [i_5] [i_5]), (arr_4 [i_5] [i_11])))) ? ((((!(arr_4 [i_5] [i_11]))))) : (max((arr_4 [i_5] [13]), (arr_4 [i_5] [i_5])))));
                    arr_46 [i_5] [i_5] = -3201440789042418975;
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_19 = (min(var_19, -1210754706));

        for (int i_14 = 2; i_14 < 20;i_14 += 1)
        {
            var_20 ^= ((-(31 && -1)));
            arr_53 [i_13] = max(((min(-1210754684, (arr_50 [i_13])))), (max((arr_51 [i_13] [i_13]), -248)));
        }
    }
    #pragma endscop
}
