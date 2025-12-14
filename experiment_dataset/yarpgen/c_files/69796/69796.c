/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_10 ^ var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (((((var_8 ? (arr_2 [i_1]) : (arr_0 [i_0])))) ? 4852382033079048776 : var_2));
                var_22 |= (arr_3 [i_0] [1]);
                var_23 -= 16769024;
            }
        }
    }
    var_24 = ((max((!var_13), var_6)));
    #pragma endscop
}
