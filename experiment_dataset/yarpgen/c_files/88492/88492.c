/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -11980;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_0] [i_1] = 8388607;
                var_18 = (arr_3 [i_0 - 2] [i_0 - 1] [0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_19 = ((18446744073701163008 ? 18446744073701163008 : ((9321604299141835212 ? (arr_0 [7]) : 18446744073701163009))));
                    arr_10 [0] = 4192193004208556446;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_20 ^= ((~((((18446744073701163009 <= -79) != (18446744073701163011 * var_5))))));
                    var_21 = ((((((8388601 ? 3246006457127872685 : 15865300706743126637)))) ? ((-((1382241570250036022 ? 0 : 8388607)))) : ((((var_1 ? 1 : 31))))));

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_22 &= (~(((arr_2 [i_0 - 2]) * 9223372036854775807)));
                        var_23 = (~(((arr_2 [i_0 - 1]) ? 11484044748907181375 : 2259771621076961386)));
                        var_24 ^= (-((68 ? (((arr_13 [i_0]) + var_7)) : (50 ^ var_1))));
                        arr_18 [i_4] [i_4] = ((-((~(max((arr_1 [i_0]), 6962699324802370238))))));
                    }
                    var_25 = (((((-(arr_17 [i_0] [i_1] [i_1] [i_0 - 1])))) <= (((-2320903916018380414 ? (arr_15 [i_3] [i_3] [i_3] [i_3]) : 18446744073709551614)))));
                    var_26 &= (((1 > (~0))));
                }
            }
        }
    }
    var_27 &= (((((11484044748907181378 ? var_6 : var_14))) < (((((var_7 ? 9059539292039357976 : var_1))) ? (-27102 * 15411527557188655587) : var_5))));
    #pragma endscop
}
