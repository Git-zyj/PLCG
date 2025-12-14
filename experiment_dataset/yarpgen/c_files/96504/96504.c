/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_4);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0 - 2] [0] [i_0] = (min((((arr_0 [i_0] [i_1]) ? 14895550139442490427 : 71)), -19385));
                    var_13 = ((-(!983821006)));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_14 = min(((1073725440 ? var_7 : -1)), (arr_5 [i_0 - 1] [i_1] [15] [i_0]));
                    var_15 &= min((((arr_3 [i_0 - 2] [i_0] [i_3]) * (arr_2 [i_0 - 2] [i_0 + 1]))), (((((arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_0]) ? 8388604 : 18446744073709551615)))));
                    var_16 = ((((((arr_8 [i_0 - 2] [i_1] [i_3]) ? (arr_4 [i_3] [i_1] [i_3] [i_1]) : (arr_4 [i_3] [i_3] [i_1] [i_0])))) ? (((((arr_8 [9] [9] [9]) && (arr_9 [i_1] [i_0 - 2]))) ? ((((-9223372036854775807 - 1) != -96))) : -113)) : ((((~var_3) && (((4294967295 ? 9003523639169383417 : (-9223372036854775807 - 1)))))))));
                }
                var_17 = (max(var_17, (((((2112412061 ? -96 : -12084)))))));
                arr_11 [i_0] [i_0] [i_0] = ((((-96 ? 1 : 2112412061)) != ((((arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1]) ^ (arr_4 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]))))));
            }
        }
    }
    var_18 = ((-20978 ? 1 : (~17944052214743782749)));
    var_19 &= ((-(((!var_7) ? var_11 : var_10))));
    #pragma endscop
}
