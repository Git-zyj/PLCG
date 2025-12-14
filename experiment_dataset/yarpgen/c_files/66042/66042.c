/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] |= max(-95, ((max((arr_4 [i_0]), var_6))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_2] = ((max((arr_4 [i_1]), ((-(arr_3 [i_0] [i_0] [i_1]))))));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_16 = (max(-2147483644, 14831189986686799572));
                        arr_13 [i_0] [17] [i_2] [i_3] &= ((((var_1 || (!160))) ? var_1 : (((((((arr_6 [i_0] [i_0] [i_0]) ? var_8 : var_1))) ? ((((var_2 && (arr_0 [i_1]))))) : (((arr_12 [4] [4] [i_2]) ? 4003110066061303082 : -11)))))));
                    }
                    var_17 = ((((((((1 - (arr_10 [i_0] [i_1] [i_1] [i_0])))) ? (((-32755 ? 92 : 95))) : (((arr_2 [i_0]) ? -169036416 : 11084575824479253991))))) ? 83 : (max(((63942 ? 16777216 : -4003110066061303083)), (((var_9 ? 65535 : var_15)))))));
                }
                var_18 -= ((+(((arr_4 [i_0]) ? 85 : (arr_4 [i_0])))));
            }
        }
    }
    var_19 += 5642408911700513782;
    var_20 *= ((5642408911700513791 ? ((var_1 ? var_6 : ((var_15 >> (-32763 + 32769))))) : var_12));
    var_21 = (((((~5017255315400629897) & (max(-124, var_1)))) < (((-(var_7 * var_4))))));

    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_22 = ((((((arr_15 [i_4]) ? (arr_14 [i_4 - 1]) : ((-169036416 | (arr_15 [i_4])))))) ? -124 : (max(((~(arr_16 [i_4]))), (arr_16 [i_4 - 1])))));
        var_23 = (((131 | (max(222450927861030454, (arr_16 [i_4]))))));
    }
    #pragma endscop
}
