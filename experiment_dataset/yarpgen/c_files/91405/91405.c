/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((max(((251 ? 0 : var_0)), ((min(1, (arr_5 [i_0 - 1] [i_0 + 1] [i_0])))))) & ((max((~250), (((arr_3 [7] [i_1] [i_0]) ? var_8 : (arr_3 [i_2] [i_1] [i_0]))))))));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_15 = (max(251, 22));
                        var_16 = ((((((((42525 ? var_4 : (arr_6 [i_0] [i_0] [i_0] [1])))) ? ((42501 >> (var_8 + 7248))) : ((max((arr_8 [i_0] [11] [i_2] [i_0]), (arr_4 [i_0]))))))) || ((((~var_2) ? ((21252 ? var_5 : var_11)) : 0)))));
                    }
                    for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_17 = (arr_12 [i_1] [i_0]);
                        var_18 = (max(var_18, ((min((min(((max(var_9, 42501))), (arr_2 [i_1] [i_1 - 3] [i_2]))), (arr_4 [i_1]))))));
                        var_19 = 227;
                    }
                    var_20 = (min(234, 18308124892543700881));
                    var_21 = ((((max(235, (arr_9 [i_0 - 1] [i_1 - 2] [6] [i_0] [6] [i_0 - 2])))) ? (arr_10 [i_0 - 1] [i_0 - 3]) : (arr_9 [i_0] [i_1 - 3] [i_2] [i_0] [10] [i_0 - 3])));
                    var_22 = (min(var_22, ((max((arr_3 [i_0 - 2] [i_1 - 1] [3]), ((-(min((arr_3 [5] [5] [1]), 138619181165850728)))))))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_23 = ((~((23035 + (arr_13 [i_5 - 1])))));
        var_24 = (((((arr_13 [i_5 - 1]) ? (arr_13 [i_5 - 1]) : (arr_13 [i_5 - 1])))) ? 18446744073709551615 : (arr_13 [i_5 - 1]));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_25 = (max(var_25, ((((-((38 ? (arr_14 [i_7] [13]) : 11325109798101607969))))))));
                    var_26 = var_12;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 8;i_9 += 1)
        {
            {
                var_27 = (max(var_27, (((((((arr_17 [i_8 - 3] [14] [i_8]) ? (arr_1 [i_8 + 1]) : (arr_10 [i_8] [8])))) ? ((min(4294967295, 42526))) : ((((((~(arr_10 [i_8] [1])))) ? (arr_8 [0] [i_8 - 3] [i_8 + 1] [0]) : (((arr_17 [8] [14] [14]) ? 251 : 246))))))))));
                var_28 = (min(var_28, (~23011)));
                var_29 = ((11325109798101607969 <= (((min(86, var_11))))));
                var_30 = (max((((arr_2 [i_8 - 4] [i_9 - 2] [i_8]) && 13047240423642071717)), (max((arr_24 [i_9 + 2] [i_9]), (arr_24 [i_8 - 1] [i_9])))));
            }
        }
    }
    #pragma endscop
}
