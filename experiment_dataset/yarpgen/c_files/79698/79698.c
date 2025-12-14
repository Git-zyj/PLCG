/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max(var_14, (min(1741776021, -114)))), ((max((max(-96, 17)), var_9)))));
    var_16 = (min(var_16, (((-(((((var_11 ? 118 : var_11))) ? (var_12 + -117) : 65535)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((max(1878243317, 3203))))));
                arr_5 [i_0] [i_1] = ((!(((-(!var_2))))));
                arr_6 [i_0] [i_0] [14] = (max(255, (arr_0 [i_0 + 3])));
            }
        }
    }
    #pragma endscop
}
