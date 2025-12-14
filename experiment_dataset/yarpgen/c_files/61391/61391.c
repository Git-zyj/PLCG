/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = var_7;

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_16 |= (((9242 <= var_13) >> (((32767 | var_9) - 32739))));
            var_17 = (((((-32755 ? 32765 : (arr_3 [i_0] [i_1 - 1])))) ^ var_3));

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                var_18 -= 32734;
                var_19 = (min(var_19, var_4));
                var_20 = -52;
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_21 ^= (~var_3);

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_22 ^= var_5;
                    var_23 = ((-var_8 ? (arr_5 [i_3] [i_1 + 1] [i_1 + 3]) : (var_6 | var_0)));
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_24 = (175 <= 32750);
                    var_25 *= (!207);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_26 = ((1 ? var_0 : var_0));
                    var_27 = var_0;
                    arr_18 [0] [0] = 127;
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_28 = ((((((var_13 ? (arr_19 [i_0] [4] [4] [i_7] [i_0]) : -4)) + 9223372036854775807)) >> (((~-24344) - 24324))));
                    var_29 = 23;
                    arr_21 [i_0] [i_1 + 2] [i_7] = (((var_1 ? 218 : 536870911)));
                    var_30 = var_7;
                }
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_31 = (1109535855 | var_4);
            var_32 = (min(var_32, (var_12 >= -24)));
            var_33 |= ((var_4 ? -1905719213 : (arr_2 [i_0])));
        }

        for (int i_9 = 4; i_9 < 15;i_9 += 1)
        {
            arr_28 [11] [i_9 - 1] [i_0] &= (-536870887 ^ 32767);
            var_34 |= ((var_5 ? 255 : var_4));
            var_35 = (max(var_35, var_12));
        }
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_36 &= ((((((arr_16 [i_10] [i_10] [1] [i_0]) ? -1904071025 : -122))) ? 4043 : var_4));
            var_37 = ((((var_1 ? var_2 : var_1)) % ((var_4 ? (arr_17 [i_10] [i_0]) : -35))));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_34 [i_0] [i_11] = ((25 ? (-24344 <= var_4) : var_4));
            arr_35 [i_11] [i_11] [i_11] = var_7;
            var_38 = (max(var_38, (((var_8 ? 14322983053797286333 : -1109535859)))));
            var_39 = var_13;
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_40 = var_1;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_41 &= -8599;
                        var_42 = (!var_5);
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_45 [i_15] = (arr_8 [i_15]);
            arr_46 [i_0] = var_12;
            var_43 |= 255;
        }
        for (int i_16 = 2; i_16 < 15;i_16 += 1)
        {
            arr_51 [i_0] &= (((var_9 <= 245) ? 148 : var_10));
            var_44 = ((!(((8 ? var_6 : var_3)))));
        }
    }
    var_45 = ((var_10 <= (((-27760 <= var_9) ^ 2059809432))));
    #pragma endscop
}
