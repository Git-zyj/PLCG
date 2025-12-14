/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~111);
    var_21 &= (max(((min(((111 ? var_2 : var_2)), ((min(243, 100)))))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 -= 63;
                arr_6 [18] = (max((((((154 ? var_3 : var_16))) ? (((111 ? var_12 : 130))) : (max((arr_3 [i_1]), 17890127014682663173)))), var_17));
            }
        }
    }
    var_23 = 18501;

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_24 = ((((min((arr_8 [i_2 + 1]), 183286902))) ? (((arr_8 [i_2 + 1]) ? (arr_8 [i_2 + 1]) : (arr_8 [i_2 - 1]))) : (((arr_8 [i_2 + 1]) >> (((arr_8 [i_2 - 1]) - 2602185365))))));
        var_25 *= (arr_7 [16]);
    }
    #pragma endscop
}
