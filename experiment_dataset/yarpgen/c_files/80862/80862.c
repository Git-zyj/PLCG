/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((279100591 < (((((arr_0 [i_0]) != (var_8 > var_8))))))))));
                arr_5 [8] = ((!(!4015866704)));
                var_18 = ((!(arr_3 [i_0])));
                var_19 = 4015866725;
            }
        }
    }
    var_20 = var_15;
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
