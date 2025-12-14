/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = 9151469017298301190;
                    arr_11 [i_0] [i_1] [0] [i_1] = ((((((((17513162363866291023 ? 234513311801918614 : (arr_5 [i_1])))) ? 1 : 65532))) ? (-32767 - 1) : ((min((arr_10 [i_2 - 3]), (arr_3 [i_0]))))));
                }
            }
        }
    }
    var_16 |= ((((max((~var_4), var_14))) ? 0 : 65511));
    #pragma endscop
}
