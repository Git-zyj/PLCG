/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] = var_15;
                        var_17 = (((((-(min(224590112269948459, (arr_2 [i_0])))))) ? (((~(~var_5)))) : (arr_8 [i_0] [i_1] [i_3])));
                        var_18 -= ((~(max(225, (arr_0 [i_2])))));
                    }
                    var_19 = max((!1), ((!(arr_10 [i_0] [i_0] [i_1 - 1] [i_1 - 1]))));
                }
            }
        }
    }
    var_20 = (!var_7);
    var_21 &= 0;
    #pragma endscop
}
