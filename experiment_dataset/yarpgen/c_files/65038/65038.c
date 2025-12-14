/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 ^= ((~(arr_4 [i_0] [i_1] [i_1])));
                    var_16 = ((~(arr_1 [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            {
                arr_10 [i_3] = (arr_7 [i_3]);

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_17 = (max(var_17, ((min(((-1920703324 && ((min((arr_13 [i_5] [i_4 - 4] [i_3]), (arr_13 [23] [23] [23])))))), 0)))));
                        var_18 = (min((max(0, ((-(arr_16 [i_3] [i_4] [i_4] [1] [i_6] [i_6]))))), (((!(((-(arr_6 [i_3])))))))));
                    }
                    var_19 ^= var_13;
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_20 = 30;
                                var_21 = (arr_14 [i_3] [i_3] [i_3] [1] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            {
                arr_30 [i_10] = (!(arr_20 [i_10] [i_11] [i_10]));
                arr_31 [i_10] = (arr_24 [22]);
                var_22 -= (arr_12 [i_10]);
            }
        }
    }
    var_23 = ((!(~var_9)));
    #pragma endscop
}
