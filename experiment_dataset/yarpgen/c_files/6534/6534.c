/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_2 * var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = var_1;
                var_12 = (max(var_12, ((((((((((arr_3 [i_0] [i_1]) % (arr_5 [i_0] [i_1])))) ? (min((arr_0 [i_0] [i_1]), (arr_3 [i_0] [i_1]))) : 65535))) ? ((((min(1, (arr_3 [i_0] [i_1])))) ? (~1) : -8270402612032684986)) : (((~(((((arr_4 [i_0] [i_1]) + 2147483647)) >> (((arr_4 [i_0] [i_1]) + 138))))))))))));
                var_13 = (min((arr_4 [i_0] [i_1]), (min(((min((arr_0 [i_0] [i_1]), var_9))), (((arr_1 [i_0] [i_1]) ? 1773139910 : var_6))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 15;i_6 += 1)
                            {
                                var_14 = (((arr_13 [i_3 - 1] [i_4 + 1] [i_3]) <= (arr_13 [i_3 - 1] [i_4 + 1] [i_3])));
                                var_15 = ((((((arr_17 [i_2] [i_3] [i_4] [i_3] [i_6]) ^ 65183))) && (arr_15 [i_3] [i_3 - 1] [i_4 + 4] [i_6 - 2])));
                            }
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                var_16 -= (min(((((min(45279, var_9))) ? (min((arr_10 [i_7] [i_3 - 1]), (arr_16 [i_3 - 1] [i_3 - 1] [i_5] [i_7]))) : var_2)), ((~(min(-457767211007454506, var_7))))));
                                var_17 = arr_13 [i_3] [i_5] [i_3];
                                var_18 = var_7;
                                var_19 = ((max(667193390, ((255 ? (arr_10 [i_3] [i_4]) : (arr_16 [i_3] [i_4] [i_5] [i_7]))))));
                            }
                            for (int i_8 = 1; i_8 < 15;i_8 += 1)
                            {
                                var_20 = (min(var_4, (max((~var_5), (arr_11 [i_8 - 1])))));
                                var_21 -= arr_20 [4];
                            }
                            var_22 = ((((-48 ? (arr_18 [i_2] [i_3] [i_3] [i_4] [i_5]) : (arr_26 [i_4 + 1] [i_4] [i_4] [i_4 + 1]))) >= (max((max((arr_28 [i_3] [i_3]), var_1)), (((83 << (3627773905 - 3627773904))))))));
                        }
                    }
                }
                var_23 = (max(var_0, (arr_18 [i_2] [i_3] [i_3] [i_3] [i_3])));

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    var_24 -= (arr_18 [i_2] [i_3 - 1] [i_3 - 1] [i_3] [i_3]);
                    var_25 = (max(((!((((arr_20 [i_3]) % (arr_21 [i_2] [i_2] [i_3] [i_3 - 1] [i_9])))))), ((((((arr_28 [i_3] [i_3]) >= (arr_30 [i_2] [i_3] [i_3 - 1] [i_9])))) < (!667193390)))));
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((min((max((max((arr_34 [i_2] [i_12]), 2147483647)), ((2147483647 ? 1210625125 : 0)))), -1805952461)))));
                                var_27 &= (min((min(27871, 5877500766847470481)), ((max((arr_27 [i_3 - 1] [i_3] [i_3 - 1] [i_12 - 1]), ((-(arr_39 [i_2] [i_3 - 1] [i_10] [i_11] [i_12]))))))));
                            }
                        }
                    }
                    var_28 = (max(var_28, (arr_16 [i_3] [i_3 - 1] [i_10] [i_10])));
                }
            }
        }
    }
    var_29 = (~var_4);
    #pragma endscop
}
