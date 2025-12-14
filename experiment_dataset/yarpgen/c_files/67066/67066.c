/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((~(!-65536))))));
                                arr_14 [7] [6] [i_1] [1] [i_2] [i_4] [i_4] = (1552941556 ? -1552941561 : ((1552941556 ? -1552941580 : -300881665)));
                                var_15 = ((((((!(arr_3 [i_0])))) >> (((((((arr_5 [i_0] [i_2]) + 2147483647)) << (((arr_11 [i_0] [i_0] [4]) - 14529118411441521001)))) - 640328539)))) * -83);
                            }
                        }
                    }
                }
                var_16 = ((((((arr_3 [i_0]) ? (arr_6 [i_0] [i_0] [i_1] [i_1]) : 107))) ? ((((((arr_2 [i_0]) < -300881665))) % (((arr_8 [0] [5] [i_0]) ? 300881669 : var_1)))) : -2147483647));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_28 [i_8 + 1] [i_8] [i_5] [i_8] = (((((((arr_17 [i_5]) < (arr_15 [i_7]))) ? (~-1552941548) : ((var_5 ? (arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : var_12)))) <= (((18436 == (2147483647 - var_4))))));
                                arr_29 [i_5] [i_5] [8] [i_5] [i_5 - 1] [i_5] [i_5] = ((((((((arr_16 [i_5] [i_5]) | (arr_19 [i_5]))) & ((var_1 ? var_0 : (arr_26 [i_5] [i_5] [i_5 - 1] [i_5] [i_5])))))) ? (((-((1 ? 108 : (arr_22 [i_5] [i_8])))))) : ((-300881670 ? 1552941561 : ((1 ? 1088130614657166983 : 300881665))))));
                                arr_30 [i_5] [i_5] = ((~(300881643 & 199)));
                            }
                        }
                    }
                    arr_31 [i_5] [i_6 + 1] [i_7] [i_7] = (((((arr_27 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]) >= (arr_27 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5])))) == ((17358613459052384633 ? var_11 : 0)));
                    arr_32 [i_5] [15] [i_5] = ((~(var_13 <= var_4)));
                }
            }
        }
    }
    #pragma endscop
}
