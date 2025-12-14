/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] = -1;
                    var_17 += 3597918011982693651;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_3] [i_3 + 2] = ((13698882391307218454 ? (var_5 << var_15) : ((1 ? (!var_5) : var_11))));
                    var_18 = max((((((var_14 ? var_14 : 4294967285))) ? -92 : var_10)), ((-8872741466217530772 ? (5595024361554232707 < 0) : (~32))));
                    var_19 = (--2614938355216469981);
                }
            }
        }
    }
    #pragma endscop
}
