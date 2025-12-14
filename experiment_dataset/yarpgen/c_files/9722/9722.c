/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((((((!3) ? 6 : (arr_1 [i_0])))) ? ((var_10 ? -20 : 1023)) : (((((2375374120812103109 ? (-127 - 1) : -7379))) ? (arr_1 [i_2]) : ((12 ? 7378 : 14972974925609890082))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((!(((14 ? ((var_4 ? 6690039499767296920 : var_17)) : (arr_7 [i_0] [i_0]))))));
                    var_21 = ((((var_14 ? 957936922 : var_2))) ? ((((((arr_0 [i_1]) ? 18446744073709550609 : (arr_3 [3])))) ? ((~(arr_0 [i_1]))) : (~-72))) : (((~((~(arr_3 [i_0])))))));
                    var_22 = ((~(~-29157)));
                    var_23 = 18282643651017889710;
                }
            }
        }
    }
    var_24 += (((((14165 ? 6 : var_19))) ? 1 : 7936));
    var_25 = ((((((var_11 ? var_0 : var_17)))) ? (~var_13) : (((~var_18) ? (~var_13) : (~5061371747533879373)))));
    #pragma endscop
}
