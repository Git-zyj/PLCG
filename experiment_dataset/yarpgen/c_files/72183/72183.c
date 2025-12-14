/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (~-110);
        arr_3 [i_0] = ((var_4 ? (max(11347352202737879412, 56228)) : var_5));
        var_13 = (!56288);
        arr_4 [i_0] = (!139144552810240050);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (25 ? -42 : 57987);
        var_14 = ((((max(var_3, 56228)))) ^ 7666606204848707790);
    }
    var_15 += var_6;
    var_16 = (((~57987) ? (!56228) : var_5));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_17 = (((((-((408679144598966796 ? 10151 : 17730740313111981192))))) ? (arr_1 [i_2]) : ((min((!140), var_9)))));
                            var_18 ^= (-7666606204848707782 & 21);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_19 = ((-(arr_24 [i_2] [i_3])));
                                arr_30 [3] [i_3] [i_6] [9] [i_8] = (min((((arr_0 [i_3]) ? (((arr_21 [i_3] [i_3] [0]) ? 41 : 774730220)) : (~var_4))), var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
