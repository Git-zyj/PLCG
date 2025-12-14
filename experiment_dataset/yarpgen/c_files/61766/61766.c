/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((min((((arr_2 [i_1 - 1] [i_1] [i_1 + 2]) < (arr_2 [i_0] [i_0] [i_1]))), ((!(arr_2 [i_0] [i_0] [i_0]))))))));
                var_18 = (min(var_18, ((min(((max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 + 1] [i_1])))), ((~(arr_1 [i_1 + 2] [i_1 + 1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((((var_9 ^ (arr_7 [i_0] [i_0] [i_0] [i_0])))) || (arr_4 [i_1 + 2] [i_1 + 1] [i_2 + 1]))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((((1917349554 ? 29852 : 195)) - ((17719 ? 62509 : 337))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_22 [i_5] [i_6 - 4] = ((-((((arr_12 [i_5]) < (arr_12 [i_5]))))));
                            arr_23 [i_5] [i_6] [i_6] = ((~(arr_0 [i_5])));
                            var_20 = (min(var_20, (((!((min((arr_15 [i_5 - 1] [i_5 - 1] [i_7]), (arr_2 [i_5 - 1] [i_6 + 2] [i_6 + 3])))))))));
                            var_21 += var_8;
                            var_22 = (max(var_22, (((-((-1917349575 ? 41 : 141)))))));
                        }
                    }
                }
                arr_24 [i_5] [i_5] = arr_5 [i_5] [i_5 - 1] [i_5];
            }
        }
    }

    for (int i_9 = 4; i_9 < 20;i_9 += 1)
    {
        arr_28 [i_9] = (arr_26 [i_9 - 4]);
        arr_29 [i_9 - 1] = (min((arr_27 [i_9]), (((-(arr_25 [i_9]))))));
    }
    #pragma endscop
}
