/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 << ((((~((var_11 ? var_0 : 1)))) + 14007))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min(var_11, (65408 || 1640))))));
                var_18 += ((((((~((min(var_15, var_1))))) + 2147483647)) >> var_14));
            }
        }
    }
    var_19 = (var_4 == (((max(var_5, (3 < 16368))))));

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_20 = ((0 ? (((((31428157 ? var_14 : var_12))))) : 1099511595008));
        var_21 = (max(var_21, ((!(((+(max((arr_4 [i_2]), 16368)))))))));
        var_22 |= (~var_15);
        var_23 = (min(var_23, 4294950938));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (min(var_24, (((65534 ? 1 : 186)))));

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_25 = ((var_12 || (min((var_11 || var_11), (arr_15 [12] [12] [i_2] [12])))));
                            var_26 = (max(var_26, var_6));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
