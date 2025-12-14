/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((189 >> (170 - 165)))) ? 0 : (~var_2)))) ? (((var_8 == var_6) | (min(7650564927183152920, 18)))) : (((!var_6) ? 1372761223 : (18 * var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_21 &= ((!var_2) & (min(((var_8 ? 32767 : var_11)), (2 + var_10))));
                arr_8 [i_0] [i_1 - 1] [i_1] = (arr_3 [i_0] [i_1]);
                var_22 *= var_10;
            }
        }
    }
    var_23 = (min(var_23, (~45231)));
    #pragma endscop
}
