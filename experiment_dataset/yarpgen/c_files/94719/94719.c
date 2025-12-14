/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 ^= (max((-127 - 1), -37));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (max((min((~var_2), (arr_1 [i_0 + 2]))), ((((min((arr_2 [i_0]), var_13))) * (~var_3)))));
                            arr_13 [i_3] [i_0] [i_0] [i_0] = (min((((arr_6 [i_0]) ? (arr_12 [i_0 - 2]) : var_6)), (~var_9)));
                            arr_14 [0] [0] [i_0] [i_3] = (max(((~((3236136853536456845 ? (arr_9 [i_0 - 1] [i_1] [i_2] [i_1]) : -37)))), (!var_8)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_22 [i_0] = ((!(((((!(arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]))) ? ((1 ? (arr_3 [i_0]) : -36)) : 1)))));
                                var_16 = 21;
                                var_17 -= (min((~var_6), ((min((1 & 33298), (-127 - 1))))));
                            }
                            arr_23 [i_0] [i_1] [i_0] [i_1] [i_1] = ((((max(var_4, (arr_21 [i_0])))) ? (((arr_21 [i_0]) ? var_9 : (arr_21 [i_0]))) : (arr_21 [i_0])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_18 = ((!((!(~var_12)))));
                arr_28 [i_7] [i_8] [i_8] = (arr_6 [10]);
                var_19 &= ((var_8 ? ((var_12 ? (arr_16 [i_8] [i_8]) : (arr_16 [i_8] [i_7 + 1]))) : var_12));
                arr_29 [i_7] [i_8] [i_8] = (max((min((arr_1 [i_7 + 1]), var_3)), ((max((arr_12 [i_7 - 1]), var_10)))));
                var_20 = ((~(arr_24 [i_7 - 1] [i_8])));
            }
        }
    }
    var_21 ^= var_3;
    var_22 = (min(var_22, (var_10 != 37)));
    #pragma endscop
}
