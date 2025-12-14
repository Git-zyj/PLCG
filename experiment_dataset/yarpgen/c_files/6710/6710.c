/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_12;
                var_15 = ((((-2011274061 ? 2147483647 : (!8388607))) >= 1531508305));
                var_16 = 909640494;
                var_17 = (arr_1 [14]);
            }
        }
    }
    var_18 = ((((min((909640494 || var_5), (max(536870911, var_1))))) && (~var_7)));
    var_19 = ((((~(max(var_11, var_10))))) ? (!var_5) : (!536870911));
    var_20 |= 8388599;
    var_21 = (((-(12 && var_4))) * (min((var_8 && var_11), (min(-909640495, var_9)))));
    #pragma endscop
}
