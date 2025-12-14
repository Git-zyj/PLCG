/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_19, ((((min(var_5, 22617)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = 1477203454;
                arr_5 [i_0] [13] [1] = ((11510 + (((max(5706, 11492))))));
                var_22 = 341453241713279570;
            }
        }
    }
    var_23 = -11511;
    #pragma endscop
}
