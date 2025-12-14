/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = 226;
                arr_4 [i_0] [i_0] [i_0] = ((281474976710655 ? (!0) : ((-1 * ((max(0, -670611429842470450)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_12 = (7 & 1573391610);
        var_13 = ((((1812392340 ? 226 : 8)) - -2482574955));
        var_14 = (max(var_14, ((((((max(0, 226)))) != 15819520617372006118)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] [7] = 1;
        arr_10 [i_3] [i_3] = ((3 ? 1 : ((min(1874564213, 0)))));
        arr_11 [i_3] [i_3] = ((1322749037 ? (((9113763647926258025 < 3562809725) + -var_10)) : -492626006));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((((((var_1 ? var_6 : -670611429842470450)) * 1))) ? (((-4150980037 - (var_3 / -66027276)))) : ((-(max(1349338238, 3)))))))));
        var_16 = -2482574952;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = (!1);
        arr_18 [15] [i_5] = (!(var_2 == 17508160126169500403));
        var_17 ^= (((1674984270 ? 2482574956 : 1359574334)));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_18 = ((1359574338 < ((0 ? (((3651410393 ? 1 : 3562809725))) : (((-1407086558252596224 + 9223372036854775807) >> (524287 - 524265)))))));

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_28 [15] [3] [i_7] [i_8] [i_9] [i_9] = (((min(1, 17299611209822512064)) ? ((~(39 / -8600665552993056650))) : 10));
                        arr_29 [i_9] [i_7] [i_8] [i_9] [i_7] = ((-(~39)));
                        var_19 = (max(var_19, ((((2266070262 ^ 2266070262) ? 10 : (((-2147483647 - 1) ^ -1)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
