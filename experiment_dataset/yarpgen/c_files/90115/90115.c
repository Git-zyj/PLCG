/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (6283692689078087349 && 11020);
                    var_10 ^= (max((~54516), (54516 + 32768)));
                }
            }
        }
        var_11 = (min(var_11, (((!(54534 + -6839477465452905855))))));
        arr_9 [i_0] = (((!1066521937) - ((32767 ? 54503 : 32777))));
    }
    var_12 = ((-((((max(var_8, 32793))) ? 279587174 : (32767 < var_4)))));
    #pragma endscop
}
