/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((0 + (var_7 <= 202)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(155, ((3 * (((-2147483647 - 1) ? 32504 : 202))))));
                var_17 = (-11188 || 0);
                arr_8 [i_1] = (((max(212, 9352984879970990022)) & (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                arr_9 [i_0] = (0 > 9352984879970990022);

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_18 = (~45044);
                    var_19 = (arr_6 [i_1 + 3] [i_1 + 3] [i_0]);
                    arr_12 [i_0] [i_0] = ((((((arr_11 [i_1] [i_1 + 2] [i_1] [i_1 + 1]) * (arr_7 [i_1] [i_1 + 2] [i_1 + 2])))) ? ((20462 ? var_12 : 2146959360)) : ((20462 ? 253 : -995690235))));
                    var_20 = (min((arr_0 [i_2 - 2]), var_11));
                }
            }
        }
    }
    #pragma endscop
}
