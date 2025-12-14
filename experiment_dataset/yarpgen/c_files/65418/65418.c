/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [1] [1] = (((1 / 34268) ? (14284903967411213262 * 57344) : (2563845438 >> 1)));

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_18 = (max(var_18, ((max((((var_13 != (0 || 13707268)))), (((var_9 ? var_10 : var_6))))))));
            var_19 = var_6;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_20 = (3460839459023141517 ^ 0);
            var_21 = (!var_11);
            var_22 = ((~((max(0, 1)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_3] [i_2] = (12836202931448993775 >= 18446744073709551615);
                        arr_13 [i_4] [i_4] [i_2] [i_2] [i_0] = (((((((0 ? -7722121234483724333 : -7907301992621275245)) > 1))) << (((max(-var_0, var_4)) - 4294967270))));
                        var_23 ^= ((((max(((min(var_11, var_0))), ((var_8 ? var_8 : var_8))))) ? (((0 ? 1 : 1))) : (((var_11 ? var_2 : var_12)))));
                        var_24 = (min(4294967295, (0 % 65535)));
                        arr_14 [i_0] [i_2] [i_3] = ((1 ? -6585824580400903421 : 48679));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_25 += ((((min(var_6, var_2))) & (max(494870529781465592, (min(1, 35747322042253312))))));
                            arr_24 [i_7 + 4] [i_2] [i_7 + 4] = (((((((var_5 << (var_9 - 12986078672831380148)))) ? (((8191 ? 32768 : 44455))) : var_9)) & (((var_10 / (~1379007403))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_26 = ((var_10 ? 0 : 0));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_27 = ((-5286549386431588343 ? 23236 : 4410204210339616666));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_40 [i_8] [i_11] [i_12] = (~6084618069900749600);
                            var_28 += ((max(((var_4 ? var_3 : var_4), var_9))));
                            arr_41 [i_12] [i_11] [i_10] [1] [i_9] [i_8] = ((var_6 != (0 << var_7)));
                            var_29 = (min(var_29, ((((var_9 / 3916870723) ? (max(var_9, var_2)) : ((((((14443 ? 20110 : 1))) / (min(var_8, var_10))))))))));
                        }
                    }
                }
            }
            var_30 = (((var_6 / var_6) ? (6847493917589522587 <= 1139065996) : var_7));
        }
        arr_42 [9] = ((((((((var_1 ? var_11 : var_16))) ? (min(var_2, var_1)) : (var_1 & var_5)))) ? ((var_3 ? (max(var_7, var_4)) : var_5)) : ((((1069661486 || 0) % 1)))));
    }
    var_31 = (max(var_31, var_15));
    #pragma endscop
}
