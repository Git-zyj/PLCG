/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_2 * var_3) == var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((var_0 || var_14) % ((min(4931, 954)))));
                arr_6 [i_0] = (max(-1349, ((max(1, (max(238, -16969)))))));
                arr_7 [i_0] [i_1] [i_1] = (((((((var_8 ? var_14 : var_1))) ? 1329703246 : 0)) & 234));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (((min(-486, 215))));
                            arr_15 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = (215 / 18227);
                            var_18 = (((-13993 | 1) / ((1 ? var_13 : var_9))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                var_19 ^= ((((var_6 ? 30897 : 238)) % 217));
                                var_20 = (min(var_20, 7230));
                                var_21 = 1;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_1] = ((-18250 + ((1 ? -1 : 191))));
                                arr_23 [i_0] [i_1] [i_2] [i_0] [i_2] = ((((18198 ? var_3 : -1809242209)) - ((var_4 ? 1 : -1122749957))));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_22 = (max(var_22, ((((((186 ? (31 / -1680975597) : ((42279 ? var_10 : 8))))) ? ((min(65058, 1))) : (23368 / 150219941))))));
                                arr_27 [i_6] [i_3] [i_3] [i_2] [i_2] [i_0] [i_0] = ((((max(-7223, 1))) ? -13993 : ((max((200 > -7223), (min(var_13, 240)))))));
                            }
                        }
                    }
                }
                arr_28 [i_0] = ((max((min(0, 53879)), 1)));
            }
        }
    }
    #pragma endscop
}
