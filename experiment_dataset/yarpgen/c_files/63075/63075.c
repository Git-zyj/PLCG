/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((((var_13 ? var_1 : var_7))) ? (((1 ? var_14 : var_7))) : ((var_13 ? var_0 : var_0))))) ? ((~((var_12 ? 11844648880632864207 : var_5)))) : (((~6602095193076687401) ? ((var_8 ? var_9 : var_4)) : (~432158453875012056)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_0] = (~1);
                var_17 = (min((max(((4112419884545348945 ? (arr_3 [i_0]) : 4112419884545348945)), (((var_5 ? (arr_4 [i_0]) : var_5))))), (((-((var_9 ? -1324046598 : var_13)))))));
            }
        }
    }
    #pragma endscop
}
