/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [12] = (arr_6 [0] [i_1]);
                    var_16 = ((((((arr_1 [i_0]) / 40951))) && ((min((arr_2 [i_0]), (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_17 &= (((((var_5 ? ((1 ? 6937580751139461626 : 32136)) : (-1039934832 || 6467276700175617020)))) ? var_11 : (max((~1039934840), var_3))));
    #pragma endscop
}
