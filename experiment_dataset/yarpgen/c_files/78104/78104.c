/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = -4333990423214530129;
                arr_5 [i_1] [i_1] = (((((min(16702533677017587250, -121)))) ? (((min(16702533677017587250, 5384930548606714360)) | (~12679443019405235402))) : 127));
                arr_6 [i_0] [i_1] [i_1] = (min(5, (((((84 + (arr_1 [i_0] [10])))) ^ (((arr_3 [i_0] [i_1] [i_1]) * (arr_3 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_10 = var_8;
    #pragma endscop
}
