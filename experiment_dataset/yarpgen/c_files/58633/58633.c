/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 += (((47798 ? 2097136 : -1733625227)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 ^= ((~(47798 ^ var_2)));
                        arr_12 [i_0] = (max((844270515 + var_0), (((max(var_7, var_8)) << (!var_4)))));
                        var_14 = (max(var_14, var_6));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_15 = (min(var_15, 58043));
                        var_16 = 0;
                        var_17 = 75;
                    }
                }
            }
        }
        var_18 = ((var_5 ? 249 : var_10));

        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_19 = var_9;
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 13;i_10 += 1)
                {
                    {
                        arr_34 [i_4] [i_4] [7] [i_4] [i_9] [i_10 - 4] = -17721;
                        var_20 -= -4;
                    }
                }
            }
            var_21 = (((var_8 + 2147483647) >> (29083 - 29068)));
            var_22 = (var_7 & var_3);
        }
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_23 = (min(var_23, ((((((((17738 ? -8479 : 0)) * var_9))) ? ((2147483647 ? 65535 : var_7)) : (((var_1 ? 0 : (-2147483647 - 1)))))))));
            arr_40 [i_12] = ((3916288800 << (17737 - 17733)));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            arr_45 [8] [i_13] |= (min((47792 ^ -902606900), ((143 ? (((min(var_6, var_1)))) : (var_7 & 18586)))));
            arr_46 [i_11] [i_13] [i_13] = (max((((65535 ? 637513658 : -922160585))), (((94 && (~17737))))));
            arr_47 [i_13] = ((!((min(var_7, ((max(109, var_5))))))));
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_24 += -var_11;
            var_25 = (min(var_25, var_7));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_26 -= var_6;
            arr_54 [i_11] [i_15] = (-12214514033552612604 % 65535);
            arr_55 [10] |= ((var_4 ? (-127 - 1) : var_2));
        }
        arr_56 [i_11] = (min(3657453629, 3657453619));
        var_27 -= ((((var_7 / (((var_8 ? 70 : 65535))))) > ((min(255, 1047552)))));
        var_28 = (min(637513658, var_9));
        arr_57 [i_11] [i_11] = var_2;
    }
    for (int i_16 = 1; i_16 < 20;i_16 += 1)
    {

        /* vectorizable */
        for (int i_17 = 2; i_17 < 20;i_17 += 1)
        {
            var_29 += ((var_2 ? var_1 : -2011509227));
            arr_65 [i_17] = (((((6180031048897602776 ? var_8 : 15))) ? var_10 : var_5));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_30 = (min(var_30, var_8));
            arr_70 [i_16] [i_16] [i_18] = -var_0;
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 20;i_20 += 1)
            {
                {
                    var_31 = (min(var_31, ((max(-1, 17738)))));
                    var_32 = (max(var_32, (((((8730915130291091631 ? var_11 : var_1))) || 5055925070180128714))));
                    var_33 = ((190 == ((((!(~-2147483647)))))));
                }
            }
        }
    }
    var_34 = (((((((8070450532247928832 ? var_10 : var_7))) ? (((-32767 - 1) ? var_9 : -105)) : var_8)) >> (((!(!255))))));
    #pragma endscop
}
