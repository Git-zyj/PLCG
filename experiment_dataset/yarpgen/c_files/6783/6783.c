/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_0] [i_1] [i_2] = (arr_0 [i_0]);
                    var_19 = ((((max(var_6, 43424)))));
                    arr_7 [i_0] [i_0] = (((arr_3 [i_0]) >> (((((max(var_13, (arr_1 [5] [5])))) < ((0 ? 4294967286 : var_13)))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_20 = (max(var_20, ((max((max(0, var_14)), (max((max(var_8, 5423312924545722681)), 8)))))));
        var_21 += ((max((max(4294967295, (arr_8 [10] [10])), 11))));
        arr_10 [i_3] [i_3] &= ((0 / ((((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [8]))))));
        var_22 += (~47862);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (((~(max(var_16, var_3)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_23 = 192;
                    var_24 -= (var_18 / 942188509);
                    arr_22 [i_4] [1] [15] [i_4] = var_4;
                }
            }
        }
        var_25 -= 17;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] [i_7] = ((65344 >> (172 - 164)));
        var_26 &= (max(((((((arr_18 [i_7] [i_7]) / 3392900075))) ? 1 : (arr_24 [i_7]))), -var_15));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            arr_29 [i_7] = (!15848444698072001188);
            var_27 ^= arr_26 [i_7] [i_8 + 1];
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_32 [i_9] [i_9] [i_9] = ((!(((6895923369281783214 ? var_10 : 65344)))));
            var_28 = (max(var_28, (arr_11 [i_7] [i_9])));
        }
    }
    #pragma endscop
}
