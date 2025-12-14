/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((((var_2 ? var_3 : var_9)) >= (((((((arr_4 [i_1]) ? var_3 : 0)) != ((((var_1 != (arr_3 [i_0] [i_1 + 3])))))))))));
                var_14 = (--0);
            }
        }
    }
    var_15 = (max(var_15, var_11));
    var_16 = (-32767 - 1);
    #pragma endscop
}
