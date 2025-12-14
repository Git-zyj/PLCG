/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -55;
    var_13 = ((((((((var_4 ? -1 : var_0))) ? ((var_10 ? -106372280 : -1)) : 255))) ? 1 : (((((-743588936 ? var_11 : 1)) < (!-1))))));
    var_14 = ((64 ? (705217445 & 743588935) : 56));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0 - 3] [i_0] = (((4385100614853308923 ? 1 : 21292)));
        var_15 = ((-(2147483647 / 1)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(743588936, ((min((arr_0 [i_0] [i_0 - 2]), (arr_0 [i_0] [i_0 + 1]))))));
                    var_17 ^= ((((((arr_7 [i_2] [2] [i_2]) ? 3352476398 : (((0 << (((-32767 - 1) + 32770)))))))) ? (arr_0 [i_2] [i_1 + 2]) : (min(18467348, 41413))));
                    var_18 &= (176 - 63080);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_10 [i_3] [i_3] &= (((30 % (min(151, (arr_6 [i_3] [i_3] [i_3]))))));
        arr_11 [i_3] |= var_7;
        var_19 -= (arr_0 [i_3] [i_3]);
        var_20 |= ((255 ? ((((max(2571453874196781987, 3))) ? ((96 ? 0 : 1)) : ((min(42264, 24123))))) : (min(2147483647, var_9))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            var_21 = 0;
            var_22 *= ((((64571 || -8455) ? (min(1869608011021749008, 180354447)) : var_6)));
            var_23 = 44600;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_20 [i_4] [i_4] = 25;
            var_24 = (arr_7 [i_4] [i_4] [i_6]);
        }
        var_25 += ((((-2147483647 ? 0 : 6107542961641764226)) - (min(267232164, (arr_12 [i_4])))));
    }
    #pragma endscop
}
