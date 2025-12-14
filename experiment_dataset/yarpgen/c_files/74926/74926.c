/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_5));
    var_18 = (min(((((!var_2) && (((7 ? var_5 : var_2)))))), ((var_0 ? (!1) : (!28)))));
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [3] [3] [1] = ((!((min((((var_11 ? var_2 : var_2))), (min((arr_4 [8]), 5372988385841695807)))))));
                arr_7 [i_1] = (((~var_14) ? (min(917504, 5000)) : 110));
                var_20 = ((0 & ((((max(1301770108991037538, var_15))) ? ((-1187593825910706167 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_1]))) : (!var_12)))));
                var_21 |= ((((arr_0 [i_1] [i_0]) ? (arr_2 [i_0]) : -8366043348836500867)));
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
