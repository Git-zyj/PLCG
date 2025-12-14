/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((((17480807504800517734 ? ((2147483647 ? 1444411650001145673 : var_2)) : ((((arr_2 [i_1]) ? (arr_3 [i_1] [i_0 + 2]) : (-2147483647 - 1))))))) ? (max((((arr_1 [i_0] [i_1]) ? 26 : (arr_2 [i_0]))), (min((arr_2 [i_1]), 18446744073709551615)))) : 576460614864470016));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = (min((arr_1 [i_4] [i_1]), -3849834764148462279));
                                var_13 *= (((((((min(3588359667, (-127 - 1)))) > -213970650930514879)))) * (min(var_5, (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]))));
                            }
                        }
                    }
                }
                var_14 = (max(18446744073709551615, (arr_11 [i_0 - 4] [5] [i_0 - 4] [i_1] [i_1] [i_1])));
                var_15 = (max((10982049836358360009 / 1959978867), (238 == 1122905363)));
            }
        }
    }
    var_16 = (((max(((3 << (var_9 + 5519233766667264121))), (var_9 || var_3)))) ? ((((((21639 ? -21640 : -213970650930514893)) + 9223372036854775807)) << (var_3 == 12893291113468696240))) : (!var_4));
    var_17 = ((!(((-(max(14435940519525911049, -213970650930514882)))))));
    #pragma endscop
}
