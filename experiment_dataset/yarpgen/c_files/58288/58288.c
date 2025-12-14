/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;
    var_12 &= (!var_0);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((-((min(11643130333430872220, var_9)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [16] [i_0] = (var_1 >> (232 + 54));
                        arr_13 [i_3] [i_1] [i_2 + 1] [i_0] = var_10;
                    }
                }
            }
            var_14 += (~var_6);
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_15 = (min(var_15, (((((((var_0 >> (1679668418 - 1679668391))))) ? (((~-1) - 18446744073709551594)) : ((((!13142979758018027275) * 280953358))))))));
                var_16 = ((+(((arr_15 [i_4] [i_4]) ? var_7 : var_8))));

                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    var_17 = (min(var_3, ((-((117 ? (arr_9 [i_4 + 3] [i_5] [i_5] [i_5]) : var_1))))));
                    var_18 ^= (arr_4 [6]);
                    var_19 = (min((arr_19 [i_4 - 3] [i_4] [i_4 - 2]), ((~((3989590506 ? 8411817680019599374 : var_8))))));
                    var_20 = (((((~var_10) ? (arr_6 [i_4 - 2] [i_4]) : ((var_9 ? var_2 : 18021)))) / var_1));
                }
            }
        }
    }
    #pragma endscop
}
