/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (((((~((222 ? 16960 : (arr_7 [i_0] [i_0] [i_0])))))) ? var_16 : (((((var_2 ? (arr_4 [i_2] [i_2] [i_2]) : -102))) ? ((192 - (arr_9 [i_2] [i_2] [i_2] [i_2]))) : (((16960 / (arr_1 [i_0]))))))));
                            arr_10 [i_0] [i_0] = (max((((arr_2 [i_0 + 3]) ? (886315530 == var_7) : ((var_2 ? (arr_0 [i_0] [i_0]) : 246)))), ((((arr_6 [i_0 + 2] [i_0]) <= (arr_7 [i_0 + 4] [i_0 + 1] [i_0 + 2]))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 20;i_4 += 1)
                            {
                                var_19 = var_4;
                                var_20 = (min(var_20, (((var_0 + ((29105 ? 40 : (arr_11 [i_2] [i_1] [i_1] [i_1] [i_1]))))))));
                                var_21 ^= (arr_11 [i_2] [i_4 + 1] [i_2] [i_2] [i_2]);
                                var_22 = ((!(arr_4 [i_0] [i_4 - 1] [i_0 + 4])));
                            }
                            var_23 ^= (10 ^ 1802580826);
                            var_24 = (max((min(2727041228487545535, var_4)), ((((arr_0 [i_0] [i_0 + 4]) ? (arr_0 [i_0] [i_0 - 1]) : 16958)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_25 &= max((((arr_5 [i_0 - 1] [i_5] [i_5] [i_6 + 1]) - (arr_20 [i_6] [i_6] [i_6 + 1] [i_1]))), ((((var_9 >> 1) <= (arr_20 [i_1] [i_7] [i_6 + 1] [i_1])))));
                                arr_21 [i_7] [i_0] [i_0] [i_0] = ((!(((((max(1, 2526726298))) ^ var_2)))));
                            }
                        }
                    }
                }
                var_26 = (max(var_26, ((max((((!(var_3 > -12)))), (max((((124 << (30747 - 30744)))), -1103160375652145355)))))));
                arr_22 [i_1] [i_1] [i_1] |= var_17;

                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    var_27 = (min(var_27, ((max(var_12, (((-12 != (arr_19 [i_0 + 3] [i_8] [i_8 + 1] [i_8] [i_8 - 3] [i_1])))))))));
                    var_28 *= (max((10 ^ var_6), ((max((max(2333261194, (arr_16 [i_0 + 3] [i_1] [i_8 + 1] [i_8 + 2] [i_0]))), (var_0 * 17178))))));
                }
            }
        }
    }
    var_29 = (153 < 279876102351110736);
    #pragma endscop
}
