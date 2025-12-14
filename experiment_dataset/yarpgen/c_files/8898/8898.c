/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max(22, ((8646911284551352320 ? var_5 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((((-(arr_0 [i_0 + 2]))) | (((((-(arr_0 [i_0])))) ? 19713 : (1 * -512)))));
                var_14 += (((((((min((arr_1 [i_0]), 5))) ? (arr_0 [i_0 - 1]) : (((!(arr_3 [i_0]))))))) && ((-512 || ((!(arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = ((arr_3 [9]) << ((((((((arr_2 [i_2]) ? (arr_6 [4] [i_1]) : (arr_8 [4] [i_1] [i_1] [i_1] [4])))) ? (arr_0 [i_3 - 1]) : (((arr_0 [i_0]) ? 3445767255 : (arr_6 [i_1] [i_3]))))) - 77)));
                            var_16 &= (arr_2 [i_0]);
                            var_17 = (min(var_17, (((((((arr_7 [i_1]) ? 1 : (arr_7 [i_1])))) ? (((!(arr_4 [i_0] [5] [i_0 + 3])))) : (arr_7 [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_18 = 1;

                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_19 = (!11563448273059264935);

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_20 = (((((arr_19 [i_6] [1] [i_6]) / (arr_3 [i_4]))) < (((((((2305843009213431808 ? 501 : 1))) && 1790066882))))));
                        var_21 = ((((((arr_3 [i_7]) || (arr_18 [i_4] [i_5] [i_6]))) && (((arr_0 [i_4]) && 1)))));
                        var_22 *= ((~((6286973650901769776 ^ (arr_17 [i_4] [i_5] [i_6] [i_5] [i_4])))));
                    }
                    var_23 = (arr_2 [i_4]);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_24 = (~0);
                    var_25 = max((((!(arr_14 [i_5] [i_4] [6] [1])))), (max((arr_14 [i_4] [i_4] [i_8] [i_8]), 1)));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    var_26 = 849200041;
                    var_27 = ((((min((arr_17 [i_4] [i_4] [i_9] [i_9] [i_4]), (arr_22 [i_4] [i_4])))) ? (((arr_17 [12] [12] [i_4] [i_5] [i_5]) ? -10 : (arr_5 [i_4] [i_5]))) : (!10487)));
                    var_28 -= ((-(arr_22 [i_4] [i_5])));
                }
                var_29 = (min(((((~1480570398) ^ (arr_13 [i_4] [i_5] [i_5])))), (arr_14 [i_4] [i_4] [i_5] [i_4])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_30 = (max(var_30, (((~((((!(arr_10 [i_4] [i_5]))))))))));
                            var_31 = ((!((((-(arr_8 [i_10] [i_5] [i_11] [i_5] [i_5])))))));

                            for (int i_12 = 3; i_12 < 11;i_12 += 1)
                            {
                                arr_32 [i_12] [i_11] [i_10] [i_5] [i_12] = (((((((arr_22 [i_4] [i_4]) && (arr_9 [i_4] [i_5]))))) ? (!3445767274) : -262144));
                                var_32 = (max(var_32, 1));
                                var_33 -= ((arr_13 [i_11 + 2] [i_5] [i_10]) ? (((arr_23 [i_4] [i_12 + 1] [i_11 - 1]) ? 1 : (arr_23 [i_10] [i_12 + 3] [i_11 + 2]))) : (arr_8 [i_4] [i_5] [i_10] [i_10] [i_12 + 1]));
                            }
                            var_34 = (arr_1 [i_4]);
                        }
                    }
                }
                var_35 -= ((+((+(((arr_0 [13]) ? 3485231507 : 1))))));
            }
        }
    }
    #pragma endscop
}
