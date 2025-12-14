/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((((min((arr_1 [i_1] [i_0]), 109))) ? (arr_4 [i_1]) : 5))) ? 3146166378 : ((((8019905727908311678 != (arr_1 [i_0] [i_1])))))));
                arr_7 [i_1] = ((~(max((~3146166378), (arr_4 [i_1])))));
                arr_8 [i_0] [14] [i_1] = (arr_4 [i_1]);
                var_11 |= (((43418 ? (arr_5 [i_0] [i_0]) : (((min(var_7, var_9)))))));
                var_12 += (min((((var_7 * var_1) ? var_7 : var_4)), ((max(8, -51)))));
            }
        }
    }
    var_13 = (max(var_13, (((-((~(40685 & -51))))))));
    var_14 = (4231241117 % 1);
    var_15 = (((var_4 != 507630486) ? (((((10426838345801239938 ? -51 : 4294967295))))) : 10426838345801239959));
    #pragma endscop
}
