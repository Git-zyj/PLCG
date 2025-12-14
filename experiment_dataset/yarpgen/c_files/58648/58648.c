/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((max(((106 ? var_6 : var_2)), var_10))) ? ((((((var_10 ? 37852 : 39319))) ? var_1 : 1048575))) : var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((26061 ? var_16 : -3117923313569900552)));
                var_22 = max(-2057321484, (arr_0 [i_0]));
            }
        }
    }
    #pragma endscop
}
