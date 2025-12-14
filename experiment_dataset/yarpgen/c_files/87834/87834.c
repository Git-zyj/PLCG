/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 &= (((((100 >> (((arr_2 [i_1]) - 331805290))))) + ((var_4 ? var_7 : ((-981208512 % (arr_4 [8])))))));
                var_12 = (max(var_12, ((981208511 ? -981208521 : 8776415531191063251))));
            }
        }
    }
    var_13 = 9134;
    var_14 = (min((((949354703 || (((var_8 ? var_4 : -981208512)))))), var_8));
    #pragma endscop
}
