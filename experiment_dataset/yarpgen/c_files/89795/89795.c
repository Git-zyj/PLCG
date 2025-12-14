/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_0] |= max(((7849896298487678272 >> (3023958799978593891 - 3023958799978593886))), 7849896298487678300);
                    arr_12 [i_0 - 1] [i_0 - 1] [6] [i_0 - 1] = ((((12 ? 15855823075034559246 : 282779828924485366)) | (9095768545924650624 ^ 16166599022258069834)));
                    var_17 = (min(var_17, ((max((249 != 257160918275540862), (((((-32767 - 1) + 2147483647)) >> (257160918275540857 - 257160918275540844))))))));
                }
            }
        }
    }
    var_18 *= var_1;
    #pragma endscop
}
