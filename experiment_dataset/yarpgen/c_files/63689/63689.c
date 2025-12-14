/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (35184372088320 + 6510253640903810378);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((+(min((((35184372088320 ? (arr_0 [i_0 + 2]) : 2854815529))), (max((arr_0 [i_2]), -7622137002707649203))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (min((((-(((!(arr_4 [i_1]))))))), (max((arr_1 [i_0 + 2] [i_1]), 1327234255))));
                    arr_9 [i_0] [i_1] = -7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                {
                    var_14 = ((~(((((var_4 ? var_1 : var_9))) ? (arr_11 [i_4] [i_3]) : ((15 ? -35184372088306 : (arr_10 [i_0 + 3] [i_3])))))));
                    arr_14 [i_0] [i_3] = ((-((var_5 ? (((var_2 && (arr_13 [i_0] [i_4 + 1] [i_0])))) : ((var_11 ? var_9 : var_11))))));
                    var_15 = ((((((arr_10 [i_0] [i_0]) * (!79)))) ? ((((max(73, 7646))) ? (arr_4 [i_0 + 1]) : 1327234255)) : -var_8));
                    arr_15 [i_4] [i_3] = (!(((var_1 ? (max((arr_7 [i_0] [i_3] [i_4]), (arr_1 [i_0] [i_3]))) : (((1 ? 9136112690000646026 : 5459716877835562883)))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_16 = (max(-5459716877835562884, (((var_10 ? var_1 : 9)))));
        var_17 = (min(var_17, ((max((((!(arr_18 [i_5 + 1])))), (((((18 ? 9 : (arr_16 [i_5])))) ? (arr_17 [i_5] [i_5]) : var_8)))))));
        arr_19 [i_5 + 1] |= 35184372088320;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5 - 1] [i_6] = (min(((((((var_3 ? (arr_16 [i_5]) : var_11))) ? (min(1065353216, var_8)) : (~var_0)))), (((((16 + (arr_22 [i_5] [i_6])))) ? ((((arr_22 [i_5] [i_6]) ? var_9 : 74))) : (arr_24 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_8])))));
                        var_18 = (max(var_18, (((1 ? 65532 : 1)))));
                        arr_28 [i_8] [i_6] [i_5] = (((-5459716877835562865 - 26) >= ((min(-var_2, ((max(var_1, var_11))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
