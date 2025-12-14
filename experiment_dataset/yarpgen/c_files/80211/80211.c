/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_13 = (arr_4 [i_0] [i_0]);
                    var_14 = (((((46352 - (arr_6 [i_0] [i_1] [i_2])))) ? (((((arr_6 [i_0] [i_0] [17]) >= (arr_6 [i_2] [i_1] [13]))))) : (min(var_12, (arr_6 [i_0] [i_1] [i_2])))));
                }
                arr_11 [i_1] [i_1] |= (max((~18182469542748651814), ((((~154) / ((var_4 ? 3152172718 : -4609)))))));
            }
        }
    }
    var_15 = (var_7 || 158);
    #pragma endscop
}
