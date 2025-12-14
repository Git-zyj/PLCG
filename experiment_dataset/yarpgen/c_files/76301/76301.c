/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((max(var_8, var_5))), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((arr_1 [i_0] [i_0]) == 181)) ? (((arr_1 [i_0] [13]) / (arr_0 [i_0]))) : (arr_3 [15]))))));
                var_16 += (max(((max(((((arr_4 [i_0] [13] [1]) >= var_2))), (max(-602935187267473053, 181))))), (((((arr_0 [i_0]) == 18446744073709551615)) ? (!75) : (max(288230376134934528, 19557))))));
                var_17 = ((((-(((arr_5 [i_0] [i_0]) ? 45979 : -1013858702)))) + (((var_10 ? var_4 : (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_18 = (min(var_1, (((((var_9 >> (var_10 - 1458846538)))) ? ((52 ? 45978 : 18446744071562067968)) : 0))));
    #pragma endscop
}
