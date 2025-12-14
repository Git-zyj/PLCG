/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 += ((var_2 ? (~7950809875209505147) : (((arr_3 [i_0] [i_1]) & (arr_3 [i_0] [i_1])))));
                    var_13 = (max(var_13, (((((((7902346425227609096 || (arr_1 [i_0] [17]))))) && ((!(arr_0 [i_1] [i_2]))))))));
                    var_14 = (max(var_14, ((((arr_6 [i_0] [i_1] [i_2]) >> (39 - 38))))));
                    arr_8 [i_1] [i_1] [i_0] = (~-968405522);
                }
            }
        }
    }
    var_15 |= 1;
    #pragma endscop
}
