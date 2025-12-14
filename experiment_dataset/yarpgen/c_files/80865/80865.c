/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min((min(var_0, 0)), var_6))) ? ((((((var_3 ? var_1 : var_9))) ? -var_9 : (var_6 / var_2)))) : ((var_7 ? ((65523 ? 1288792293 : 6917529027641081856)) : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((arr_1 [i_0] [4]) ? (var_9 ^ var_5) : (((0 != 3476011258) ? (max(-12, 7)) : 22472))));
                arr_6 [1] [i_1] = var_6;
                arr_7 [1] [i_1] [i_1] |= (((var_6 - var_1) ? (~var_3) : (~3749072229090584184)));
                arr_8 [i_0] = (((((arr_4 [i_1]) / (arr_4 [i_0]))) < (min((arr_4 [i_1]), (arr_4 [i_0])))));
            }
        }
    }
    #pragma endscop
}
