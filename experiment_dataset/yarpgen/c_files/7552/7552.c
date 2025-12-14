/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((max((!73), -93))) ? (((117 ^ 72) ? -73 : (~69))) : (((!(((-74 ? 73 : 550709038))))))));
                arr_5 [i_0] = ((!(((~((max(var_9, -56))))))));
                arr_6 [i_0] = (max((--4796250), ((max((max(-550709038, -14277542)), 40)))));
                var_19 -= (((!5757868) >> (((!(!var_2))))));
            }
        }
    }
    var_20 = 3848290697216;
    #pragma endscop
}
