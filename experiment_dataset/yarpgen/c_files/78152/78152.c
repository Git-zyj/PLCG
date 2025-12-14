/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 ^= ((!(((23 ? -27722 : 18058646552535406035)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_3] [i_2] [i_1 + 1] [i_1] = 4767352356526083899;
                                arr_12 [i_1] [i_1 - 2] = (arr_6 [i_4] [i_3] [i_2]);
                            }
                        }
                    }
                    arr_13 [i_1] [i_1 - 3] [i_1 - 1] = 481036337152;
                    arr_14 [i_0] [i_1 - 1] [i_1] = (arr_0 [i_1 - 2]);
                    arr_15 [i_1] [i_1 - 2] [i_1 + 2] [i_2] = -105;
                }
            }
        }
    }
    var_15 = var_7;
    var_16 *= ((((!((min(123532763, 388097521174145580))))) ? (var_1 - var_3) : (var_5 < var_1)));
    var_17 = 2179052761031709119;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_18 = (arr_26 [i_5] [i_5]);
                            arr_27 [i_5] [i_6 + 1] [i_7] [i_8] = (((var_1 ^ 1139509437) ? (arr_4 [i_5] [i_7]) : (((((~(arr_7 [i_5] [i_8] [i_5] [i_8]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_34 [i_9] [i_6 - 2] [i_9] [i_10] [i_5] [i_10] = 18446743592673214471;
                            var_19 = (min(var_19, (arr_23 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 + 1])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_42 [i_5] [i_6 + 1] [i_11] [i_13] = 78;
                                arr_43 [i_5] = (min((((~((~(arr_41 [i_5] [i_6 - 2] [i_13] [i_11] [i_13] [i_6 - 2] [i_5])))))), 4957015597944308345));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
