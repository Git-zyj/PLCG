/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((8988657638309055316 << (((((arr_3 [i_0]) + 6826948743476532282)) - 28)))) ^ -var_2));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_11 [i_0] = (var_10 > 3063254920130572156);
                    var_19 -= (~(arr_0 [i_1 - 1] [i_1 + 1]));
                }
            }
        }
        var_20 = (-8988657638309055300 != var_14);
        var_21 = (!var_5);
        var_22 = (arr_3 [i_0]);
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_23 = (arr_6 [i_4] [i_4 - 2] [i_4 - 2]);
                        arr_22 [i_3] = (!12134295869577283180);
                    }
                }
            }
        }
        var_24 = ((-(max(var_4, 101))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_33 [i_3] [1] [2] [i_7 - 1] [i_8] [i_7 - 1] = ((((-(arr_21 [i_8] [i_7 - 1] [11] [i_7] [i_7])))) ? (max((arr_21 [0] [i_7 + 1] [i_7] [i_7] [i_7 + 1]), var_8)) : (min(var_14, (arr_21 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [11]))));
                        arr_34 [i_3] [9] [i_8] [0] = (((((((!(arr_32 [i_3] [i_7 - 1] [i_3] [i_7 - 1] [i_3] [i_3]))) > ((var_17 & (arr_1 [i_8]))))))));
                        var_25 = (min(var_16, var_4));
                        arr_35 [i_3] [i_8] [i_8] [i_3] = ((~(min(((~(arr_1 [i_3]))), (((!(arr_9 [i_7] [i_9]))))))));
                    }
                }
            }
        }
    }
    var_26 &= ((var_9 ? (~var_10) : (max(((var_9 ? var_4 : var_15)), ((max(-107, var_18)))))));
    var_27 = (min(var_0, var_14));
    #pragma endscop
}
