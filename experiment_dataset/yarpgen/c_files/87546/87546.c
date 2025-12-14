/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -10850;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_3 [16] &= 13;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = var_2;
                    var_18 = 2090074348;
                }
            }
        }
        arr_8 [i_0 + 1] = (-(arr_2 [8]));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_3] [i_0] = ((min(((1 ? 683510581310123380 : 99)), 1)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_4] [i_3 - 1] [i_0] = ((((((((var_10 ? var_12 : var_14))) ? (1 || 1) : var_11))) & (min(0, 810593850))));
                                var_19 = (var_6 / -1965301513);
                                arr_22 [i_0] [i_0] = ((((((arr_1 [i_0 - 4]) || (arr_1 [i_0 - 3])))) >> (((((arr_1 [i_0 - 4]) + (arr_1 [i_0 - 4]))) - 6677856135374626037))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (arr_4 [i_0] [3] [3])));
                }
            }
        }
        arr_23 [i_0] = (((((-2366162022097431963 - -7) ? 255 : (min(19862, 35184103653376)))) >= -20051));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_31 [i_9] [i_8] [i_9] = (arr_25 [i_8] [i_7]);
                    var_21 += (((arr_27 [i_7] [i_8] [i_9]) & (arr_27 [i_7] [i_8] [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
