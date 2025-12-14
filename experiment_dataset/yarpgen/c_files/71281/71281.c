/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(1755615337, var_11));
    var_20 = (((var_5 && var_6) > 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (-(((((var_7 ? var_9 : var_0))) ? var_6 : (-1755615332 <= 1))));
                arr_4 [i_0] = -var_14;
                arr_5 [i_0] = (((var_4 < var_16) ? 1188608198 : -572811016));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_14 [i_4] [i_3] [i_0] [18] [18] [i_0] = ((var_0 > (((127 != (~1))))));
                                arr_15 [0] [i_1] [i_2] [21] [2] = ((65408 ^ (((var_13 & var_13) | var_14))));
                                var_22 = (min(var_22, 3885607964266075840));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [0] [0] [i_5] = ((1 ? (var_1 | var_18) : ((7980 ? -50 : var_0))));
                                var_23 = ((var_7 / (7335830811137069308 + -925668423)));
                                var_24 = (min((var_13 > 1), ((var_4 && (((-531930062 ? 824633720832 : 824633720831)))))));
                                var_25 = 1188608199;
                            }
                            for (int i_6 = 1; i_6 < 22;i_6 += 1)
                            {
                                var_26 = ((var_18 && (127 - 1029531407)));
                                var_27 = ((((min(-1755615348, 824633720830))) ? 767637859 : ((var_9 ? var_16 : 17661))));
                            }
                            var_28 += -767637855;
                            var_29 ^= (min(-var_18, (min(var_7, -1140018863))));
                            var_30 = (min(var_30, (-var_4 - var_15)));
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_7] = -1;
                    arr_25 [3] [4] [i_0] [3] = var_9;
                    var_31 = ((((var_10 ? var_13 : var_6)) / (11154122083928732720 - var_17)));
                }
                for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_32 = var_10;
                    var_33 = -85;
                    arr_28 [i_0] [i_0] [i_8 - 2] = (((((var_3 ^ var_17) && 11154122083928732720)) && 32767));
                    var_34 |= ((-(((24 != (-100 > 1658479697))))));
                    arr_29 [i_8] = var_18;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_34 [i_9] [i_0] = var_3;
                    var_35 = (min(var_35, var_12));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_37 [i_0] [i_1] [1] [i_1] = (((~var_5) ^ (((-740581373 | var_4) ? (var_3 ^ var_7) : (var_14 ^ var_0)))));
                    var_36 = -9223052374471182;
                }
            }
        }
    }
    #pragma endscop
}
