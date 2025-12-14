/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = var_1;
                    var_19 |= (max((min(var_18, (arr_0 [i_0 + 1]))), (((!(((7 ? (arr_3 [i_1] [1]) : var_7))))))));
                    var_20 = (max(var_7, ((max((min(var_14, (arr_0 [i_0 - 2]))), var_17)))));
                }
            }
        }
    }
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_15 [i_4] &= ((11516107857193840062 ? (((+((((arr_4 [12] [8] [8] [13]) != (arr_5 [i_3] [i_4] [7]))))))) : (min(((var_10 ? var_7 : var_15)), var_6))));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_20 [i_3] [i_6] [i_5] [i_5] = var_5;
                        arr_21 [i_3] [i_6] [i_6] = (((((min((arr_4 [i_6 + 1] [i_6] [i_6 - 1] [i_6]), (arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]))))) ^ ((((min(7, -22969))) ? (max(var_7, (arr_2 [i_3] [i_3] [i_3]))) : (min(405877785, (arr_16 [7] [1] [i_6])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_22 = (max(var_22, (arr_19 [i_7 - 1] [i_5] [i_7 - 1] [i_7 - 1] [i_7 - 1] [4])));
                        arr_26 [i_3] [i_4] [10] [i_7] = (arr_22 [i_7 + 1] [i_7 - 1]);
                    }
                    var_23 = 21392;
                    var_24 = (min((((arr_14 [i_3] [i_4] [i_5]) ? (arr_14 [i_3] [i_4] [i_5]) : var_1)), (((arr_19 [i_3] [i_5] [4] [i_5] [i_5] [i_3]) ? (arr_14 [i_4] [i_4] [i_5]) : var_11))));
                }
                arr_27 [7] = (((arr_13 [i_4]) ? (min(var_18, (arr_13 [i_3]))) : ((var_3 | (arr_13 [i_3])))));
            }
        }
    }
    #pragma endscop
}
