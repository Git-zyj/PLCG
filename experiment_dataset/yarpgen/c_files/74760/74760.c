/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~111);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [24] = ((((18446744073709551615 ? (arr_0 [i_0] [i_1]) : ((~(arr_2 [i_1]))))) ^ (arr_1 [i_0] [i_1])));
                var_16 = ((((min((arr_3 [i_0]), 65535)) < (!48))) ? (min(-1073217536, ((14954428254854607098 ? 182 : 8873631192776961444)))) : 24700);
            }
        }
    }
    #pragma endscop
}
