/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 1;
    var_21 |= (!((!(-9223372036854775807 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] = (0 / 1);
                    var_22 ^= 45282;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_23 &= var_15;
                        arr_11 [i_0] [16] [i_0] [i_0] = 6331097502676122018;
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = 46980;

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_16 [i_3] [i_0] [i_0 - 2] = (650687387 >= (((var_10 ? var_11 : -2))));
                            arr_17 [i_0] [i_1] [i_4] = ((15950253715276925897 & ((var_2 ? var_17 : 53647))));
                            arr_18 [i_4 + 1] [i_0] [i_1] = ((4360072687680669921 ? ((var_13 ? 16538929837090782555 : var_1)) : -6331097502676122013));
                            var_24 -= (((arr_10 [i_4] [18] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1]) + ((-(arr_5 [12] [12])))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] [i_0] = var_2;
                            arr_22 [i_0] [i_0] [i_1] [14] [i_0] [i_3] [i_5] = var_16;
                            var_25 = (min(var_25, (((12523 | 11652487686059227528) ? 1 : (((arr_0 [i_1]) ? (arr_0 [i_2]) : var_15))))));
                            var_26 += var_3;
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_27 = 53647;
                            arr_27 [i_0 - 2] [i_0] = (((((var_12 ? var_3 : var_2))) ? (~var_13) : 194));
                        }
                        var_28 = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_33 [i_0 - 2] [6] [i_2] [6] [i_8] |= var_6;
                                var_29 *= (-((var_13 ? 10464826535535519060 : 64894)));
                                arr_34 [15] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_0] = var_3;
                                arr_35 [i_1] [i_7 - 1] [i_0] = var_8;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_30 = ((180 ? (((arr_20 [i_9] [i_1] [i_1] [i_0 + 1]) ? (arr_9 [i_1] [i_1] [i_1]) : 2496490358432625718)) : (1073741823 == 1682617876)));
                    var_31 = 65535;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_32 = (-127 - 1);
                                arr_43 [i_0] [i_1] [i_9] [i_10 + 1] [i_11] = ((11366 ? (!0) : -7174614316757469214));
                                arr_44 [i_11] [i_11 - 1] [12] [i_9] [i_1] [12] [i_0 - 2] &= (var_1 % -7174614316757469214);
                                var_33 = (((((var_17 ? 1 : var_5))) ? (var_15 + 1) : var_19));
                            }
                        }
                    }
                    var_34 = -var_7;
                }
                var_35 = ((~(arr_19 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
