/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((!var_8) % (1 % var_10))) % (((((1 ? var_4 : var_9))) ? var_0 : ((1 ? 1 : var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 += (min(((((-1 ? (arr_4 [i_0]) : 1)))), (max(-var_7, var_7))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = var_6;
                    var_16 = ((((max(var_10, (1 >= 6646622010153707491)))) ? var_3 : ((var_10 ? ((1 ? 268435455 : var_1)) : 1))));
                    var_17 = (((((((var_8 ? (arr_3 [0] [0]) : var_13)) % ((451956693714060263 % (arr_4 [i_0])))))) ? var_13 : ((min(1, -984572793)))));
                }
            }
        }
    }
    #pragma endscop
}
