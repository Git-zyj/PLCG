/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [12] [i_0] = (((((var_0 ? -5187170977027801044 : var_6))) ? (var_8 || 32767) : ((max(var_6, var_2)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [9] [i_0] [2] = (max(32767, 24));
                            var_19 = (max(var_19, ((((((1 ^ (var_17 || 32764)))) ? var_2 : (((~-4720852040357306) + 191)))))));
                            arr_15 [i_0] [1] = 7790643212331975597;
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((-(min(((var_1 ? var_18 : 1099511623680)), var_11))));
                            arr_17 [i_0] [i_3] [i_0] = (max(((42 ? 1 : -395484699)), (var_10 | 180)));
                        }
                    }
                }
            }
            var_20 *= (4021881048579992292 < 14424863025129559324);
        }
    }
    var_21 = 11953;
    var_22 = ((((((min(var_5, var_11))) ? (min(-7793851443137046465, 180)) : (((var_15 ? 205 : -18427)))))) <= (max(647564360877434498, 89)));
    #pragma endscop
}
