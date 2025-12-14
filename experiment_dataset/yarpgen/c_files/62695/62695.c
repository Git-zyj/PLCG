/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 785898399;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_19 = (min((((((var_12 ? 785898388 : -785898389))) ? (arr_0 [i_0 + 1]) : ((var_3 + (arr_0 [i_0]))))), -3240476005448058410));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] = var_11;
                        var_20 = var_1;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = var_12;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_21 *= (((arr_5 [10] [10] [10]) & 127));
        arr_15 [i_4] [i_4] = var_15;
        var_22 *= (((((max(var_17, -785898394)))) ? var_10 : 3715787854978506447));
        var_23 = ((2745244198 ? (min(10157257042200638116, 23717)) : (arr_0 [i_4])));
    }
    var_24 += ((((min(3747595704, var_17))) ? var_6 : var_9));
    #pragma endscop
}
