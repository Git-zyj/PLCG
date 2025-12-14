/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_18 *= ((~((1 & ((min(var_7, var_6)))))));
                            var_19 = (min(var_19, (((var_13 ? ((((arr_7 [8] [8]) ^ (arr_2 [4] [i_1] [i_2])))) : var_7)))));
                            var_20 = ((((min((var_2 * 1633), ((min((arr_8 [i_0] [3] [i_2] [i_1 + 1] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))))) || -1657));
                        }
                    }
                }
                var_21 = (((((((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), -26))) ? (arr_10 [i_0] [i_0] [i_0] [i_1]) : ((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (arr_3 [i_0] [i_0] [i_0]) : ((((min(var_13, (arr_5 [0] [i_0] [i_0] [6])))) ? (arr_3 [0] [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
                arr_12 [i_0] [i_0] [i_0] = (((((~var_5) + ((((arr_3 [i_0] [i_0] [1]) ? 63912 : (arr_6 [i_0] [i_0] [i_0] [i_0])))))) * (((((arr_2 [i_0] [i_1] [4]) < (var_3 % var_3)))))));
            }
        }
    }
    var_22 = ((((((~3772783593518306725) ? (~-1) : (((var_6 ? var_14 : var_14)))))) ? (!var_7) : (var_1 | var_4)));
    #pragma endscop
}
