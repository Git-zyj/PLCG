/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = ((((arr_4 [i_0] [i_1 - 2] [i_0]) ? 24 : (arr_4 [i_0] [i_1] [i_1 + 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 -= 54287;
                            var_22 += ((((min(((max(var_0, (arr_1 [i_1])))), ((11265 << (-118 + 133)))))) | (arr_2 [i_0] [i_1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_23 += ((max(var_5, ((var_10 << (var_0 - 50836))))));
                            var_24 = (((+(min((arr_4 [i_1] [i_4] [i_4]), var_7)))) | (!var_0));
                            arr_16 [i_0] [17] [i_0] = (((((((((arr_9 [i_5] [1] [i_1 + 1] [i_0]) != var_4)))) != (arr_4 [i_0] [i_0] [9]))) ? (((arr_8 [i_1] [i_1]) ^ (var_4 | 2546504084))) : ((min(var_19, 11276)))));
                            var_25 |= (var_12 ? ((((arr_1 [i_4]) << ((((14789367924698976954 ? 3062693084549240165 : 1)) - 3062693084549240143))))) : (((var_13 ? var_10 : 61605))));
                            var_26 |= ((min(-18161, 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {

                            for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
                            {
                                var_27 -= ((8544283042269033029 ? ((max((arr_18 [i_1]), (var_2 == 11416)))) : ((((var_3 ? 5694119520788485043 : (arr_24 [i_7] [9])))))));
                                var_28 = (arr_18 [i_0]);
                            }
                            for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                            {
                                var_29 -= (((((~58249) | (7881299347898368 >> var_14))) + (((arr_20 [i_7 + 2] [i_7 + 2] [i_6 - 3] [i_1] [i_1 - 1]) ? (arr_26 [i_7 - 1] [i_7 + 2]) : (arr_10 [i_7 + 1] [i_7 + 1])))));
                                var_30 = (((arr_19 [i_0]) < var_15));
                                var_31 = (max(6237834632316230815, ((((((var_17 ? (arr_8 [17] [i_1]) : var_11))) ? ((((arr_3 [i_7]) && 65535))) : (arr_7 [i_6 - 2] [i_7 + 1] [i_7] [i_0]))))));
                            }
                            for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                            {
                                var_32 = ((((arr_18 [i_0]) ? 3930 : (min(var_19, var_6)))));
                                var_33 = (arr_15 [15] [i_1 - 2] [i_7 + 2] [i_10]);
                            }
                            for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                            {
                                arr_33 [i_0] [i_0] = ((((-33 + 2147483647) >> ((((arr_1 [i_0]) >= (arr_25 [i_0] [i_1 - 2] [i_6] [i_7] [i_0])))))));
                                var_34 ^= (min((~-1), (((max(var_13, 10894098363920043790)) * -var_5))));
                                var_35 -= (((((max((arr_12 [i_11]), (arr_12 [i_1]))))) + (arr_12 [i_1])));
                            }
                            var_36 = ((-(((((-11392 ? 61614 : -115))) + (min(var_1, var_8))))));
                        }
                    }
                }
            }
        }
    }
    var_37 -= var_1;
    #pragma endscop
}
