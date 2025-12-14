/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((-(((var_2 - var_8) ? (((arr_2 [i_0] [i_0]) + var_11)) : (((max(-16977, -16976))))))));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_13 = ((((((var_8 ? var_12 : 97)) ? var_5 : (~451697410)))));
            arr_7 [15] |= (arr_6 [i_1 - 4] [i_1 - 1] [i_0]);
        }
        var_14 = ((~(((6037281955386723855 != ((max(var_11, 224))))))));
        var_15 ^= ((((max(5663548451612942619, (arr_6 [i_0] [20] [i_0])))) ? ((var_10 ? (arr_5 [i_0]) : var_0)) : ((var_9 >> ((((var_0 ? var_0 : 7410660397249285681)) - 18446744071668085621))))));
    }
    var_16 = ((((((max(3843269901, 4729366621461544632)) * -16977))) ? (~-121) : -17));
    var_17 = ((var_9 ? var_2 : -16966));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] = ((1271921187 % ((102 ? -1182138977 : 451697410))));
                    var_18 = (min((max((max(var_0, (arr_14 [i_2]))), (!var_5))), (!var_4)));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_19 [i_4] [i_4] = ((-((-69 ? 6468918312799118514 : -4309753792809168604))));
                        var_19 += 17408537000812508040;
                        var_20 ^= 4903867015599741517;
                        var_21 = (((((1182138958 ? -16977 : 4309753792809168622)) + (7410660397249285681 / 4998622096164518270))));
                    }
                    var_22 = (min(var_22, (((var_2 <= (((((arr_15 [i_2] [i_3] [i_4]) + 2147483647)) >> (-var_0 - 2041465962))))))));
                }
            }
        }
    }
    #pragma endscop
}
