/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_20 = (min(var_20, (((min(5437735453871385407, (~-7635693878773168)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = -21064;
                                var_21 = (min((var_14 == var_16), (21082 > -1236)));
                                var_22 ^= ((((min(var_11, var_19)) + 9223372036854775807)) >> (var_0 == -7599081411562951964));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_23 = (max(3230163060861015993, 7769));
                                var_24 = (-3305411815090319518 ? 821149954499284737 : 21044);
                                arr_20 [i_0] [i_0] [i_0] [i_3 + 2] [i_5] = (-8928222438643292396 ? (((-7748 > 6578175856437523426) ? (~32767) : (var_14 / 26))) : ((-21064 + ((5444432522268631529 ? var_17 : 21064)))));
                            }
                            var_25 = ((-((2336316620186018780 % (7599081411562951964 && var_13)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_26 = ((~(9007199254708224 > 21064)));
                            var_27 = ((((7599081411562951964 ? -1 : -9223372036854775799))) ? ((-((1 ? var_4 : var_16)))) : -9369);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        var_28 = (~7311545539587310291);
                        var_29 = (((((min(-756373397287550853, 144106391982833664)) != ((var_7 ? var_6 : var_0)))) ? ((-(~-144106391982833674))) : ((var_19 ? -756373397287550853 : -4749638440250366631))));
                    }
                    arr_34 [1] [i_9] [i_10] = ((~(!var_5)));
                    var_30 = 9223372036854775798;
                }
            }
        }
    }
    #pragma endscop
}
