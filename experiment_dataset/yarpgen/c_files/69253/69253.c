/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1815293559;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 -= 739868690;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_14 = -65535;
                arr_9 [i_0] [i_1] [i_2] = ((-26579 ? 26579 : -8687));
                var_15 *= 2524698489;
            }
            arr_10 [i_0] [i_1] = ((var_9 ? var_0 : -26580));

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_0] [i_3] [3] = (!var_11);
                arr_15 [i_3] [i_3] = ((110 ? (!17) : 1));
                var_16 = (~0);
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((min(((((max(26579, 1))))), 4294967295)))));
        arr_18 [8] [5] = (((((-523406498 ? var_10 : (~254)))) ? (!-4294967295) : ((241 ? (min(var_0, 14)) : 145))));
        arr_19 [3] = ((2147483647 ? (--5832756570245987695) : -1));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_6] |= var_11;

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_18 = -889796581;
                            var_19 = (min(var_19, (((var_6 ? var_4 : 716811479)))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_4] [i_6] [i_6] [i_7] [i_7] = (--889796593);
                            var_20 ^= ((var_11 ? (!var_7) : 0));
                            var_21 ^= (!-32752);
                        }
                        var_22 ^= var_1;
                        var_23 = (19 ? 1 : var_4);
                    }
                    var_24 = (((254 ^ -889796591) ? (max(-32746, 534823419)) : (~889796585)));
                    var_25 = 27897;
                }
            }
        }

        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_34 [i_4] [i_10] [i_4] = (max(((35 ? var_0 : 889796561)), ((min(-1637, -26568)))));
            var_26 -= ((((min(0, (max(var_1, 2721361800))))) ? 1 : (max(-889796549, 29))));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_27 = ((13 ? var_11 : 889796585));

        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            arr_40 [i_11] = ((((-2147483647 - 1) ? -18209 : var_6)));

            for (int i_13 = 4; i_13 < 8;i_13 += 1)
            {
                arr_43 [10] [i_12] [i_13] = 61483;
                arr_44 [10] [6] [i_13 + 3] &= ((~((1 ? 61477 : -1623409397))));
                var_28 = (min(var_28, (((28352 ? 214 : 4059)))));
                arr_45 [i_12] = (!1);
                var_29 = (((((17599982981263632406 ? 1 : var_10))) ? var_3 : 4074));
            }
            arr_46 [i_12] = (~1102915956);
            var_30 ^= var_8;
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {
            var_31 = (((((-1 ? 33 : 889796587))) ? -14 : -64));
            var_32 = (min(var_32, (((86 ? 181 : var_9)))));
            var_33 = 1557780254;
        }
    }
    var_34 = (min(var_34, ((min((0 || var_4), ((3544180549847259623 ? (min(1, 1842937208)) : ((var_0 ? 889796555 : var_3)))))))));
    #pragma endscop
}
