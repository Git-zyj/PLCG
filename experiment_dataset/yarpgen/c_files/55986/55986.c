/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(-var_3, var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_19 |= (arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (((((min((arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]), -79))) ? -9436 : (min(var_10, (arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_0] [i_1]))))));
                                arr_16 [i_2] [i_1] [i_2] [i_1] [i_0] |= (min(1, 9413));
                                arr_17 [i_4] |= var_14;
                                var_21 = (13814 % ((var_8 ^ (((arr_14 [i_0] [i_1] [i_0] [i_2 + 2] [i_2 + 2] [i_2 + 2]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_2] [i_3]))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = (min((((min(51727, var_17)))), (((var_15 ? var_6 : (arr_1 [i_0] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (arr_4 [i_1]);
                                arr_23 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] |= ((((min((arr_9 [i_0] [i_0] [i_0]), (arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (arr_21 [i_2 + 2] [i_2 + 1]) : 13813));
                            }
                        }
                    }
                    var_23 = (max(var_23, ((max(((((var_5 >= -91) >= ((max(var_4, var_3)))))), (-9223372036854775807 - 1))))));
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_33 [i_7] [i_1] [i_8 - 4] [i_9] [i_9] [i_9] = (min((max((min((-9223372036854775807 - 1), 9435)), (arr_8 [i_0] [i_0] [i_0] [i_0]))), (min(var_4, (((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : -9031683633382778124))))));
                                var_24 = (((-78 > ((min((arr_1 [i_7 + 1] [i_8 - 4]), var_4))))));
                                arr_34 [i_9] [i_9] [i_1] [i_1] [i_8] [i_9] [i_9] |= (((var_1 % -9031683633382778114) << (-2083732178839702851 + 2083732178839702866)));
                            }
                        }
                    }
                }
                var_25 = 9031683633382778131;
                var_26 |= ((min((min(16308, 11091916394416794801)), 51728)));

                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    var_27 |= (arr_6 [i_10]);
                    var_28 = (max(((min((!var_4), 1))), (((((var_1 >> (var_0 - 46891)))) % (((arr_21 [i_0] [i_0]) ? 9031683633382778123 : (arr_37 [i_10] [i_10] [i_10] [i_1])))))));
                    var_29 |= (((arr_2 [i_10] [i_1]) >> ((9436 * (((13807 == (arr_37 [i_10] [i_1] [i_1] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
