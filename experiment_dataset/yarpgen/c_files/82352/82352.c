/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(((max((max(962304327, var_8)), ((min((arr_4 [13] [13] [i_0]), (arr_4 [3] [i_1] [i_1]))))))), (min(((max(var_10, var_0))), (max(1152424218, (arr_2 [3])))))));
                var_12 = (min(134, 112));
            }
        }
    }
    var_13 = (min((min((max(var_6, var_3)), (min(var_10, 177)))), (min((min(var_10, var_9)), (min(var_10, var_6))))));
    var_14 = (max(((max((max(var_10, var_9)), ((min(var_0, var_8)))))), (min((max(1, var_5)), ((min(1, var_10)))))));
    var_15 = (max((min((min(1, 2796020365)), (max(var_1, var_3)))), ((max((min(var_2, var_7)), (min(var_3, var_2)))))));
    #pragma endscop
}
