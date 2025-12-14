/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (((((min(45494, 13513344548570901048)) * (((max((arr_2 [i_0]), 47355)))))) - 10540468110513435324));
                var_18 ^= ((((min((((arr_3 [0]) ? 103 : var_12)), ((10540468110513435315 ? 32454 : -1794200888))))) ? ((((((11517666679887076059 ? var_9 : (arr_3 [i_0])))) ? (7274 && 1025604180) : (arr_4 [i_1 + 1])))) : ((((min(1925466081592473122, 1565))) ? (arr_1 [i_1]) : (min(var_9, 9716258008277710506))))));
            }
        }
    }
    var_19 = (min(var_19, var_2));
    #pragma endscop
}
