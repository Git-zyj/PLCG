/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((9223372036854775807 ? 1879749639 : (870649780 == 67076096)))) <= (max(4, (arr_5 [i_0] [i_1] [i_1]))));
                arr_7 [i_1] [i_1] [i_1] = (((arr_4 [i_0] [i_0] [i_1]) + 2271019860));
            }
        }
    }
    var_13 = ((256596753 + -1872085970811575263) ? 3176816133102849839 : var_12);
    #pragma endscop
}
