/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = min(4603029390826548482, ((((arr_0 [i_0]) > (!var_9)))));
                var_14 = ((((-(arr_2 [i_0] [i_0]))) * var_5));
                arr_6 [0] [0] [i_0] = ((((max(-var_0, (arr_3 [i_0] [i_0])))) / 13843714682883003142));
                var_15 = ((((((((var_5 ? var_10 : var_12))) ? 65535 : ((13843714682883003142 ? var_7 : 7))))) ? (((-(arr_5 [i_0])))) : 3463122781281085893));
            }
        }
    }
    var_16 |= var_1;
    #pragma endscop
}
