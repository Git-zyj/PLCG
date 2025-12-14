/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [8] = (min((min(-23975, (23 / 23))), ((min(511, -92)))));
        var_17 *= (min(((3100 ? (-511 == -23) : ((min(511, 62435))))), 3100));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_18 -= ((3113 ? 511 : -511));
            arr_6 [i_0] [i_0] = (17038366896878995327 - 511);
            var_19 = -23;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_11 [i_0] = ((!((min(0, 529)))));
                var_20 = (min(var_20, (((~(max(97, ((min(23, (-127 - 1)))))))))));
                var_21 |= 501;
                var_22 = (min(var_22, ((max(((min(2, 2))), ((148 >> (4986 - 4981))))))));
                arr_12 [i_3] [i_0] = 251;
            }
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_23 = (min(var_23, (~-483)));
                            var_24 = -25;
                        }
                    }
                }
                arr_23 [i_4 - 1] [i_4] [i_0] = 3;
                var_25 = 31599;
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_26 = -501;
                arr_26 [i_0] [i_2] [i_0] [i_0] |= ((!(((-(-32767 - 1))))));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_27 = (min(var_27, ((min(((max((((!(-32767 - 1)))), -511))), ((-(((-32767 - 1) ? 31 : 0)))))))));
                var_28 = (max(var_28, 57742));
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_31 [i_0] [i_9] [i_9] = ((479 ? 9988418510941817678 : 52));
                var_29 ^= (~14417355860066006413);
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_10] |= 55;

            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                var_30 = (max(var_30, (482 || -85)));
                var_31 ^= (-25 != -57);
                var_32 += 55;
                var_33 = (min(var_33, ((((!25404) && (!127))))));
            }
        }
        arr_39 [i_0] [i_0] = (min((((((25404 ? 14417355860066006413 : 25404))) ? (~-92) : 35)), (!18446744073709551615)));
        var_34 ^= (max(((max(170, -92))), (min((92 & 511), (!11175455446784296912)))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = (!7271288626925254712);
        var_35 = (max(var_35, (-1 == -25259)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_36 = ((-((-8403 ? -475 : 4))));
        var_37 = (max(var_37, (--0)));
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        arr_48 [i_14] = (88 == 482);
        var_38 = (~4095);
    }
    #pragma endscop
}
