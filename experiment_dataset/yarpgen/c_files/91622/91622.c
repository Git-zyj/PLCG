/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 ? (((((7166091026856216417 ? var_6 : var_16)) > var_0))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = 11280653046853335175;
                var_19 = ((~(max(((max(1, (arr_1 [i_1])))), var_0))));
                var_20 = (max(((1 ? 7166091026856216417 : 1)), ((~(arr_3 [i_1] [i_1] [i_0])))));
                var_21 = 2332272323570374300;
            }
        }
    }
    #pragma endscop
}
