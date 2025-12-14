/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0] = (max((((-1576531551735550811 ? 1 : 10))), (max(-1, -574758609))));
                arr_9 [i_0] [5] [i_1] = (~13678);
                arr_10 [i_0] [i_0] = 30563;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 = 1792;
        var_14 = ((970994980 ? 30539 : 18446744073709551615));
        var_15 -= ((-1 ? -13659 : 0));
        var_16 = 0;
    }
    var_17 = (max(var_9, ((((((max(13654, 0)))) > var_9)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_18 = ((!((min(2187268032722089862, (144115188075855871 || 3660850984))))));
                    var_19 = (min((0 % 1073741824), (max((min(1048575, 965948348)), ((17131744548985278220 ? 12567815652285315681 : -5))))));
                    arr_24 [i_3] [i_4] [7] = (min((17 % 1), ((min(48, 31)))));
                    var_20 = (min((max(((min(0, 1))), 524288)), ((((min(33554431, -7384686328362338302))) ? 0 : 0))));
                }
            }
        }
    }
    #pragma endscop
}
