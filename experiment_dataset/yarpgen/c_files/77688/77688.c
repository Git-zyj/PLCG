/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [14] [i_2] [i_2] = (max(-32758, 2147352576));
                    var_12 = (max(var_12, ((((((1759914078 ? (arr_1 [14]) : var_11))) ? var_3 : ((((max(22, var_11))) ? -100 : 240)))))));
                    var_13 = (min(((var_11 ? ((var_10 ? 249 : (arr_5 [i_2] [i_1] [i_0] [i_0]))) : (min(-1759914107, -15323)))), (max(((-(arr_4 [i_0] [i_1] [i_2]))), (arr_3 [i_0] [i_1] [i_1])))));
                    var_14 = (((((arr_1 [i_2]) ? (arr_0 [i_1]) : -var_3))) | (((arr_0 [i_2]) ? var_1 : (arr_0 [i_0]))));
                }
            }
        }
    }
    var_15 = (min(var_15, (((((var_3 >> ((((var_5 ? 100 : var_5)) - 71))))) ? ((var_2 ? ((1040187392 ? -16 : 36227)) : var_2)) : 36214))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            {
                var_16 -= (((-18654 + 2147483647) >> (((((((1 & (arr_10 [i_4] [i_3])))) ? var_1 : var_6)) - 19407270))));
                var_17 = (!62151);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_18 = (29305 ? 126 : 4294967295);
                            var_19 -= (-18660 != var_9);
                        }
                    }
                }
                var_20 ^= (1 % 64);
            }
        }
    }
    var_21 = -99;
    var_22 = (max(var_22, 17873661021126656));
    #pragma endscop
}
