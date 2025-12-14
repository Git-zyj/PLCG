/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (min(var_11, (((+(((50559 && 255) ? ((var_4 ? 14975 : var_0)) : var_9)))))));
        var_12 = min(((50537 ? var_9 : (((arr_0 [7]) & var_9)))), 4294967285);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 += var_9;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = (var_0 == 2097151);
            var_15 *= (50559 >= 7759213334401011287);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_12 [i_2] [i_2] [i_2] [i_2] &= ((min((arr_11 [i_3] [i_2] [i_1]), 4294967285)));
                var_16 = (min(var_16, ((max((((arr_6 [i_2]) == (arr_6 [i_2]))), 1)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 *= (((!0) ? 1 : 10687530739308540355));
                            var_18 *= ((193 ^ ((2542841545 << (14999 - 14984)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 ^= (((((var_6 | (-8013 | var_3)))) ? ((64 ? -21 : 7)) : var_6));
                            var_20 ^= (((var_5 ? (arr_13 [i_7] [i_2] [i_6] [i_7]) : var_1)));
                        }
                    }
                }
            }
            var_21 ^= var_5;
            var_22 |= -120873076;
        }
        var_23 = (min(var_23, (~108)));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_24 = ((var_8 ? ((~(var_9 | var_0))) : (((!((max(var_4, 3))))))));
                    var_25 = ((-((21 ? (0 > 14) : (32754 || -120873103)))));
                    var_26 = ((arr_31 [i_8]) ? (((arr_31 [i_8]) ? (arr_31 [i_10]) : 118)) : (max((arr_31 [i_9]), var_8)));
                }
            }
        }
        var_27 = (((7759213334401011295 ? var_8 : var_6)));
    }
    var_28 = (min(var_2, var_5));
    var_29 += ((((((((10687530739308540317 ? var_4 : var_0))) ? 44610 : ((12 ? 74 : 55939))))) ? var_3 : (var_7 == 8)));
    #pragma endscop
}
