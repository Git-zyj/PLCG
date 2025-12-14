/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 - 2] [i_0 - 2] = ((~((+(min((arr_4 [i_0] [i_0]), (arr_3 [i_1 + 3] [i_0 - 2])))))));
            arr_6 [i_0] [1] [i_1] = ((((((arr_1 [i_0 + 2] [i_1]) ? (arr_1 [i_0] [10]) : (arr_0 [i_1 - 3] [i_1 - 2])))) ? ((((!(arr_1 [i_0 - 1] [i_1]))))) : (arr_1 [i_0] [i_0 + 2])));
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (arr_0 [i_0] [i_2 + 1])));
            arr_9 [i_2] [i_2] = ((((((arr_3 [i_0 + 2] [i_0 + 2]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 2])))) < (max((max((arr_2 [i_0] [i_2]), (arr_0 [i_2 + 3] [i_2]))), (((arr_8 [i_2]) ? (arr_0 [6] [i_2 + 1]) : (arr_3 [i_0] [i_2])))))));
            var_16 = (max(var_16, ((min(-14840, 30)))));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_17 [i_0 - 3] [i_3] [i_0 - 3] [i_4] = min((arr_2 [i_3] [i_3]), ((~(((arr_11 [i_3]) | (arr_7 [i_0]))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_17 = (((((arr_16 [i_0 + 2] [i_3 + 1]) >= (arr_16 [i_0 + 2] [i_3 + 1]))) ? (~75) : ((((arr_0 [i_0 - 2] [i_3 + 1]) != (arr_16 [i_0 + 2] [i_3 + 2]))))));
                        arr_20 [i_0] [i_0] [i_4] [i_5] [i_5] &= ((((~(arr_4 [i_4 - 1] [9])))) ? (((arr_3 [i_3 - 1] [i_4 + 2]) ? (arr_4 [i_4 + 3] [i_4 + 3]) : (arr_4 [i_4 + 1] [10]))) : (((!(arr_4 [i_4 + 2] [i_4 + 2])))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_24 [i_0 + 1] [i_0 + 1] [i_3] [i_4] [9] &= (((arr_8 [i_4]) >= ((max((arr_11 [i_0 + 2]), (arr_11 [i_0 - 2]))))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_18 = (min(var_18, (((((!(arr_11 [i_0 - 2]))) ? (((arr_11 [i_0 - 1]) ? (arr_11 [i_0 - 2]) : (arr_11 [i_0 - 3]))) : (((arr_11 [i_0 - 2]) ? (arr_11 [i_0 + 1]) : (arr_11 [i_0 + 1]))))))));
                            arr_28 [i_3] [i_4] [i_6] |= ((((((arr_2 [i_4 - 1] [i_3 + 2]) + (arr_2 [i_4 + 2] [i_3 + 1])))) ? (max((arr_2 [i_4 + 4] [i_3 + 1]), (arr_2 [i_4 + 3] [i_3 + 1]))) : ((-(arr_2 [i_4 - 1] [i_3 + 1])))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_19 = (arr_19 [i_8]);
                            arr_31 [i_0] [i_3] [i_4 + 3] [i_6] [i_4 + 3] [i_8] [i_6] = (arr_10 [i_0] [i_0]);
                        }
                        var_20 = ((((((arr_19 [i_6]) ? (arr_19 [i_4 + 3]) : (arr_19 [i_3])))) ? (arr_19 [i_0 - 2]) : (((arr_19 [i_6]) ? 1 : 2433203098448937060))));
                    }
                    arr_32 [0] [i_3] [i_0 + 1] = (min((((((7954 ? -1985 : 1536302148))) ? (arr_7 [i_4 + 2]) : (arr_12 [i_0 + 2] [i_3 + 1] [i_4 - 1]))), ((((arr_3 [i_0 - 1] [i_3 - 1]) ? (arr_3 [i_0 - 2] [i_0 - 3]) : (arr_3 [i_3] [i_4 + 3]))))));
                    arr_33 [i_4] [i_3 + 2] [i_0 - 2] = (((((arr_14 [i_3 - 2]) < (arr_25 [i_0 + 1] [6] [i_3 - 1] [i_3] [i_4] [i_0 + 1]))) || ((min((arr_25 [i_3] [i_3 + 1] [i_3 - 2] [i_4] [i_3] [i_4]), (arr_25 [i_0] [3] [i_3 + 1] [i_4] [i_0] [i_4]))))));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_21 &= arr_35 [4];
        var_22 = ((((!((min((arr_34 [4] [i_9]), (arr_34 [i_9] [i_9])))))) ? (arr_35 [i_9]) : (arr_34 [i_9 - 2] [i_9 + 1])));
        var_23 = (min(var_23, (((((min((min((arr_34 [i_9] [i_9]), (arr_34 [i_9] [i_9]))), (((arr_35 [10]) ? (arr_35 [12]) : (arr_35 [0])))))) ? (((arr_35 [18]) ? (arr_35 [12]) : (arr_35 [18]))) : (arr_35 [8]))))));
    }

    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_24 &= ((~((-1 ? 59242 : 0))));
        arr_38 [i_10] = ((((min((arr_35 [14]), ((((arr_34 [3] [i_10]) ? (arr_37 [i_10]) : (arr_37 [i_10]))))))) ? (arr_37 [16]) : (((!(arr_35 [4]))))));
    }
    #pragma endscop
}
