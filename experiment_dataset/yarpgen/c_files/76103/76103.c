/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((!23) - ((((!(arr_4 [i_0]))) ? (!0) : -9))));
                arr_8 [i_0] = (max(-23, 657870630));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [i_4] [i_2] = arr_10 [i_3] [20];
                    var_14 = ((-var_9 / ((-((max(var_7, -6)))))));
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_15 = var_12;
            var_16 = (max(var_9, (arr_11 [i_5 + 3])));
        }
        var_17 = ((max(((var_12 - (arr_19 [i_5])), 1))));
        var_18 = (max(var_18, (((((min((arr_13 [i_5 + 3]), (min((arr_14 [i_5] [i_5] [i_5] [i_5 + 2]), var_7))))) ? 4495974693628769759 : (arr_9 [i_5 - 2]))))));
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            arr_25 [i_7 + 1] [i_8] [i_7] = ((-(min(var_6, var_5))));
            arr_26 [i_7] = (((((-(-46 / -24)))) ? var_7 : (arr_23 [i_7] [i_8] [i_7])));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_19 = var_5;
                    var_20 = ((~((((92 ? (arr_14 [i_7] [i_9] [4] [4]) : var_1)) | (arr_24 [1])))));
                    arr_32 [i_7] [i_7 - 1] [7] [22] = ((((((arr_27 [i_7] [1]) <= var_0))) != (((var_1 == (max(43041, var_11)))))));
                    var_21 = (((((var_3 || -40) ? (~var_9) : ((var_8 ? var_10 : (arr_24 [i_9]))))) < ((min(var_12, (arr_12 [i_7 - 1]))))));
                    var_22 |= ((-((25 ? (arr_9 [i_7 - 1]) : var_3))));
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 10;i_11 += 1)
    {
        var_23 = (max(var_23, ((max((~var_4), (arr_29 [i_11] [i_11 + 3]))))));
        arr_36 [3] [i_11] = (min((min(var_10, (!var_7))), (((!(!var_13))))));

        for (int i_12 = 2; i_12 < 9;i_12 += 1)
        {
            arr_39 [i_12] [i_12] [i_11 + 1] &= var_4;
            arr_40 [i_11 - 2] [i_11 - 2] [i_11] = (min((max(((-66 ? var_2 : var_0)), (max(var_5, var_1)))), ((max(var_10, -4)))));
        }
        var_24 = (max(var_7, var_0));
    }
    var_25 = (((((6131612994345241707 > var_2) >= (!var_11))) ? 5371745212824091010 : ((((min(var_13, 23))) ? (~var_9) : -var_7))));
    var_26 = var_6;
    #pragma endscop
}
