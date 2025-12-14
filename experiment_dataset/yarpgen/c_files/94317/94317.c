/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(137, 70368744177663));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = (min(-1075, ((0 ? (((4294967295 << (128 - 120)))) : (max(70368744177663, 16))))));
        var_16 = min((arr_0 [i_0 - 1]), (~70368744177632));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_17 &= (min((arr_7 [i_0] [i_0] [i_0] [1]), 1));
                        var_18 *= (-27246 >= 13366793510710422771);
                    }
                    var_19 = (min(var_19, (!3521951562)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_26 [i_4] [i_5] [6] [6] [9] [i_8] [1] = (arr_22 [i_4] [1] [i_8]);
                                var_20 = (arr_25 [i_4] [i_8 + 4] [11] [i_4] [i_8 + 4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_21 = ((773015734 ? 27246 : ((((arr_20 [i_4] [i_4] [i_4] [i_4]) >= 2251799813685247)))));
                                arr_35 [10] [i_5] [i_5] [i_5] [0] = 8128;
                                arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [6] = 4971;
                                var_22 = 3521951556;
                                arr_37 [i_4] [i_4] [i_5] [i_6] [i_4] [i_9 - 3] [i_4] = (arr_7 [i_4] [11] [11] [12]);
                            }
                        }
                    }
                    var_23 -= (((arr_4 [i_4] [i_4] [i_4]) / 30654));
                    var_24 = (arr_16 [i_4] [6]);
                }
            }
        }
        var_25 ^= (arr_22 [i_4] [i_4] [i_4]);
        var_26 = (((89 <= -24516) <= 8145));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_27 -= (!342024784141555964);

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_43 [1] [i_12] |= (max(39705006, (((188 * 773015752) * 773015734))));
            var_28 = -126;
        }
    }
    var_29 = 1;
    var_30 += (((((((max(2147483647, -6663763979670040210))) ? (var_8 || var_1) : var_8))) ? (((((214 ? var_11 : 1)) != ((2147483647 ? 2147483647 : 0))))) : ((var_0 ? (65535 || 13523) : -70368744177646))));
    #pragma endscop
}
