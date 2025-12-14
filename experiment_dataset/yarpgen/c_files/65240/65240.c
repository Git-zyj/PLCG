/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = 3472202725;
        arr_3 [i_0] = (-53 == 1193061891);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [1] = (((arr_8 [9] [i_1] [i_0 - 1]) ? (((arr_4 [i_1] [i_1]) ? (arr_5 [i_0]) : (arr_5 [i_1]))) : 1));
                    arr_10 [i_0] [i_1] = ((((((arr_6 [i_2] [i_0] [i_0]) ? var_11 : 822764574))) ? (((arr_8 [i_0] [i_0] [i_0]) ? var_2 : var_0)) : (arr_7 [i_0 - 1])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3 - 1] [i_3] = (arr_6 [i_3] [i_3 - 1] [i_3]);
        arr_16 [i_3] [i_3] = (arr_14 [i_3 - 1]);
        arr_17 [i_3] = (arr_8 [i_3] [i_3] [i_3]);
        arr_18 [i_3] = ((+(max((arr_8 [i_3] [i_3 - 1] [i_3]), (((arr_0 [i_3 - 1] [11]) ? 26375 : 10773213587214653377))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        arr_30 [i_4] [i_5] [i_6 - 2] [i_6] [i_6] [i_6] = (arr_21 [i_4]);
                        arr_31 [i_6 + 3] [1] = (((((14781804485893283893 ? 822764574 : 27))) ? ((4138456690291148318 ? 26375 : (arr_27 [i_4] [i_4] [i_4] [i_4]))) : (arr_29 [i_5 - 1])));
                        arr_32 [i_7] [i_6 + 3] [i_5 - 1] [i_4] = (((1415144016287908712 ? 5383806675796320827 : (arr_28 [i_4] [i_5] [i_4] [i_5]))));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_36 [i_4] [i_8] [i_8] = ((((((arr_21 [i_4]) < 0))) * 18306));
            arr_37 [i_8] = ((-(arr_35 [i_8] [i_4])));
            arr_38 [i_4] = (((arr_21 [i_4]) / (arr_21 [i_4])));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_41 [i_9] [i_9] = ((~(arr_34 [i_4])));
            arr_42 [i_4] = (((((-28084 ? 2993840529 : 131436590))) / ((1624090053 ? var_14 : 576460752303423487))));
        }
        for (int i_10 = 3; i_10 < 18;i_10 += 1)
        {
            arr_45 [i_4] [i_4] [i_4] = (var_9 != var_3);
            arr_46 [i_4] [i_10 + 1] = var_16;
        }
    }
    #pragma endscop
}
