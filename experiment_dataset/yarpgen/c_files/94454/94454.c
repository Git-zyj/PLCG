/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((-(!-1056683580)));
                var_20 = (max(55, -1471913201));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (arr_9 [i_0] [i_1] [17] [6]);
                            var_22 = ((((max((max(2147483635, var_17)), ((max(1, -1471913211)))))) ? ((((!(arr_8 [i_0] [i_1] [1] [i_3]))) ? ((max(var_14, (arr_1 [1])))) : ((var_16 ? (arr_5 [i_0] [i_0] [i_0]) : 281474976694272)))) : (1471913226 + -1739224153)));
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_4;

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_14 [i_4] = (((((((((arr_8 [i_4] [i_4] [i_4] [i_4]) + (arr_6 [i_4] [i_4])))) ^ var_3))) ? (((arr_4 [i_4]) ? ((-1471913199 + (arr_2 [i_4]))) : var_18)) : (arr_2 [1])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [i_5] = (arr_15 [4]);
                        var_24 = (((~1739224152) ? var_17 : var_8));
                        arr_23 [i_4] [i_7] = var_8;
                    }
                }
            }
        }
    }
    var_25 = ((var_0 ? (max(var_11, ((9062155876644977973 ? 0 : var_17)))) : 43717));
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 8;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            {
                arr_28 [i_9] [i_9] [i_9] = var_5;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_34 [4] [4] [i_9] [i_9] [i_10] [i_11] = var_1;
                            var_26 &= 4294967288;
                            var_27 = (min(var_27, 2147483635));
                            var_28 = var_9;
                        }
                    }
                }
                arr_35 [i_9] [i_9] [i_9] = (max(((((arr_30 [i_8] [i_9]) ? ((var_7 ? (arr_20 [i_8 - 3] [i_9] [i_9]) : var_14)) : (arr_0 [i_8 + 1])))), (max(5161526987948745807, (32767 || var_5)))));
            }
        }
    }
    #pragma endscop
}
