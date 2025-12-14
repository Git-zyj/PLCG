/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (arr_6 [i_1 - 1]);
            var_10 = (((((min(var_8, var_0)))) ? ((((!(arr_5 [i_0]))))) : (min(((max(5979, (arr_4 [i_0])))), (min(var_7, var_0))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_3] [10] [i_3] [i_3] [3] [i_3] = (min((min(((((arr_5 [i_3]) || var_1))), (min(var_2, (arr_2 [i_1 - 1] [i_1 - 1]))))), (((arr_9 [i_1 - 1] [i_1] [i_1] [i_1 + 1]) ? 11789 : (arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
                        var_11 = (min(var_11, (arr_8 [i_0] [6] [i_2])));
                        var_12 = (((2147483647 < -11790) / (min(((var_1 ^ (arr_3 [i_0]))), ((var_8 ? (arr_5 [i_0]) : var_8))))));
                        arr_15 [i_3] [i_1 + 1] [i_2] [i_3] [i_0] [0] = (min((((arr_8 [i_0] [i_1] [i_2]) ? (arr_8 [i_0] [i_1 + 1] [i_1 + 1]) : var_5)), ((min(2123712708, -1)))));
                    }
                }
            }
            arr_16 [i_1] [i_1] = (min(((23986 ? (arr_10 [i_0] [i_1 + 1]) : var_9)), (((((var_4 ? -5979 : var_1))) - (min(var_7, -5255))))));
            var_13 = (min(var_13, ((((((((min(var_8, var_3))) ? (min(155, var_7)) : ((min(var_4, (arr_2 [i_1] [i_1]))))))) ? (((((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_1 + 1]))))) : ((((var_2 ? var_3 : var_1)) / (arr_3 [5]))))))));
        }
        arr_17 [i_0] [i_0] = (arr_4 [i_0]);
        var_14 = ((((!(-202219584 || 5998))) ? (((-9223372036854775807 - 1) / var_6)) : (!9223372036854775807)));
        arr_18 [i_0] &= (arr_9 [i_0] [i_0] [1] [i_0]);
    }
    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        var_15 = (max(var_15, ((((((186 << (-5992819035967174417 + 5992819035967174433)))) ^ var_7)))));
        var_16 = ((min(((min(186, (arr_20 [i_4 - 2])))), (min(var_0, var_9)))));
        arr_21 [i_4 - 4] [8] = ((((!(arr_19 [i_4 + 2] [i_4]))) ? (max((arr_20 [i_4 + 1]), (arr_20 [i_4 + 2]))) : (((min(var_5, (!var_8)))))));
        var_17 = (max(var_17, -var_9));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_18 *= var_1;
                        arr_32 [i_5] [i_6] [i_7] = (min((((var_6 / (arr_20 [i_8])))), (~var_3)));
                    }
                    var_19 ^= (((-2147483647 - 1) ? (((!(16256 && var_1)))) : 7));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((var_9 ? (arr_22 [i_5]) : (arr_24 [i_9])))))));
                                var_21 |= (((((min((arr_33 [i_5] [i_5]), (arr_20 [i_9]))))) | (((2895249675 & 1) ? ((var_5 ? (arr_20 [i_5]) : var_2)) : ((((arr_26 [i_5]) | var_9)))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_44 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] |= ((((!(arr_43 [i_5] [i_5] [i_11] [i_12] [i_13])))));
                        var_22 = max(((-(!var_5))), (((arr_25 [i_13] [i_12] [i_5]) + (arr_25 [i_5] [i_12] [i_13]))));
                        var_23 = (min(((12024 ? (min((arr_20 [i_5]), (arr_36 [i_5] [i_5] [i_12] [i_5] [i_5]))) : 216172782113783808)), ((((max(-5992819035967174417, 19340))) ? (min(11979394112385325451, 46)) : 1))));
                    }
                }
            }
        }
        var_24 |= ((((max(var_9, 320170417))) ? ((((max((arr_43 [i_5] [i_5] [13] [i_5] [i_5]), (arr_40 [i_5])))))) : ((-9223372036854775796 ? 11979394112385325450 : ((var_5 ? (arr_40 [i_5]) : (arr_35 [i_5] [i_5] [i_5] [6])))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 13;i_15 += 1)
            {
                {
                    var_25 &= min((-8472979800113611712 - 5252), (min((arr_29 [i_14] [i_15] [i_15 - 2] [i_15]), var_0)));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 13;i_17 += 1)
                        {
                            {
                                var_26 ^= var_6;
                                var_27 = ((-2147483647 ? 0 : 4096));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 13;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                {
                    var_28 |= (((var_3 && (arr_46 [i_5] [i_19]))));
                    arr_59 [i_5] [i_18] [i_5] = var_1;
                }
            }
        }
    }
    var_29 = (max(58696, (!-888819140)));
    #pragma endscop
}
