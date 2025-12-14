/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(((min(255, 5469088437522140876))), (min(18446744073709551606, var_12)))) % var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((!(25 < 7)));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [1] [i_0] [i_3] [i_0] &= (max(13, 65235));
                                arr_14 [i_2] [i_1 - 1] [i_2] [i_3] [11] = (24 & 2278644462366024746);
                                var_21 += 165;
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                var_22 = 18446744073709551594;
                                var_23 = (1476097482 != 20);
                            }
                            arr_18 [i_0] [i_2] [i_2] [i_2] = (min((((var_4 ? -1602239710 : 1121204213))), (((max(var_11, 52)) & 4503591037435904))));
                            var_24 *= (min((max(1, var_5)), (((((max(266338304, 1))) && ((max(1864961881, 2342980095))))))));
                            var_25 = (min(((((var_6 ? 2430005409 : 1)) >= (var_0 == -10958))), ((((1031475480 >> (2181843386368 - 2181843386341))) != (32767 == 79)))));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] &= max((var_7 >= 1864961881), (max(var_4, var_7)));
            }
        }
    }
    var_26 = (((((536870911 | -4339583916124169268) ? (((-8064465137280611295 ? var_5 : var_0))) : (max(var_7, var_15)))) >= (((((var_5 ? 178 : var_9))) ? (((max(19892, 0)))) : ((var_6 ? -5715741508753702930 : var_4))))));
    var_27 &= (((var_6 + 9223372036854775807) >> (((max((var_9 & 2181843386362), var_18)) - 126))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] = ((32767 ? (var_15 >> 7) : (max(((max(2072608364, 2147483647))), ((11 ? 32768 : 3153379462377429562))))));
                var_28 *= 96;
            }
        }
    }
    #pragma endscop
}
