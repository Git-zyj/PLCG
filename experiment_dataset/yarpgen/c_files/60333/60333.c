/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = var_8;
                    var_13 = (arr_1 [i_1] [i_1]);
                    var_14 = (min(var_14, (max((min(var_0, (((1023 && (arr_5 [1] [1] [1])))))), ((((max(-80, 107))) ? ((1 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))) : 0))))));
                    var_15 += ((!((min((arr_5 [4] [4] [4]), (!var_8))))));
                }
            }
        }
    }
    var_16 = ((264594902 ? 234578441 : 9433860786924930743));
    #pragma endscop
}
