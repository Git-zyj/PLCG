/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 += (7137153552833775582 | 23989);
                arr_5 [i_0] |= min((min(11164492448719452469, 3632744571473407027)), ((((-2981350612895868189 - 7282251624990099146) ? (arr_4 [i_0] [i_0] [i_0]) : (~var_12)))));
            }
        }
    }
    var_21 = (max(var_21, -var_13));
    #pragma endscop
}
