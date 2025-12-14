/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (min(var_3, (max(((var_10 ? 44376 : 16565)), ((-(-127 - 1)))))));
    var_15 ^= var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [13] |= (max(127, (arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_16 = (arr_12 [i_0] [i_0] [1] [i_2] [10] [i_0]);
                        var_17 ^= -var_10;
                        var_18 = ((((min(125, -127))) ? ((min((min(var_2, 109)), (min((arr_7 [i_1] [i_1 - 1] [i_1]), (arr_9 [3])))))) : (((((arr_5 [i_2]) >= (arr_5 [14]))) ? 562932773552128 : var_13))));
                        var_19 ^= (max(((-7456026819332912712 ? 1152921504606846976 : -108)), var_13));
                        var_20 = (((-1243145237 * 1574390404) ? 0 : 7456026819332912719));
                    }
                }
            }
        }
        var_21 = ((((max((((arr_9 [i_0]) >> (56332 - 56301))), (((~(arr_4 [i_0]))))))) ? (((((min(-88, 9207))) ? 1754571723 : ((((arr_9 [i_0]) ? var_8 : (arr_8 [i_0] [i_0] [i_0]))))))) : (arr_1 [i_0])));
        arr_13 [i_0] = (arr_8 [i_0] [i_0] [i_0]);
        var_22 = 54736;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (~1485501112);
        arr_17 [i_4] = ((!(((((((arr_14 [i_4]) ? (arr_15 [16] [16]) : (arr_15 [i_4] [i_4])))) ? ((((arr_14 [i_4]) ? var_9 : 56329))) : ((109 ? 7256050745730339758 : (arr_15 [i_4] [i_4]))))))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_6] = ((52 != (3619403352 | 1495919212)));
                        arr_29 [i_6] [i_8] = (((((-126 ? (arr_27 [i_5] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_18 [i_6 - 1])))) ? (((((arr_19 [0]) ? -122 : var_7)) + ((max((arr_26 [i_6] [1] [20] [i_6]), 82))))) : (arr_14 [i_6 - 1])));
                    }
                }
            }
        }
        var_23 = ((max(((arr_24 [i_5]), (arr_20 [i_5] [i_5])))));
    }
    #pragma endscop
}
