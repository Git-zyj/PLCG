/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 += ((((max((arr_0 [i_0] [i_0]), (arr_0 [i_1] [i_0])))) ? var_3 : (arr_0 [i_0] [i_1])));
                arr_4 [i_1] &= var_6;
                arr_5 [i_0] [i_0] [i_1] = (arr_0 [i_1] [i_0]);
            }
        }
    }
    var_19 = (min((((var_6 || (var_10 || var_7)))), var_13));
    var_20 -= ((((var_14 || var_16) || (((var_12 ? var_12 : var_8))))) || var_13);
    #pragma endscop
}
