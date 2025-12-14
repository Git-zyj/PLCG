/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (min(214, 6579488888256802661));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (((((10171 << ((-(arr_0 [i_0] [i_0])))))) >= var_16));
        var_22 = ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (~var_7) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_23 ^= (min((arr_0 [i_0] [i_0]), (((max(1, (arr_6 [i_0])))))));
                    var_24 = var_8;
                }
            }
        }
        var_25 |= ((-10171 == ((1696830339596000622 * (arr_4 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = (6579488888256802683 < 652900819);
        var_26 -= ((!((((arr_8 [i_3]) ? (arr_8 [2]) : (-32767 - 1))))));
        var_27 = (min(var_27, 18350640993511334839));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_28 ^= ((((-10171 <= (min(6579488888256802661, 14336)))) ? ((((0 > (arr_5 [i_4 - 1] [i_4] [i_4] [i_4]))))) : (min(540167721, 11867255185452748954))));
        var_29 -= (min(var_6, var_0));
    }
    #pragma endscop
}
