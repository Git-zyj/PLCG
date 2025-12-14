/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((1048310652 ^ (((((-(arr_3 [i_0] [i_0]))) | (arr_4 [i_0] [i_0])))))))));
                arr_5 [14] = 1084484734;
                var_20 = ((((max(60367, 3072))) ? (((var_1 ? var_5 : (arr_1 [21])))) : var_15));
                arr_6 [i_1] &= (((12099136469946418262 ? (arr_1 [i_1]) : 474280959427129807)));
                var_21 = var_2;
            }
        }
    }
    var_22 = (max((((((3351928199 >> (1044547335 - 1044547322)))) ? var_8 : (-107 > 8346413383560567912))), (((((var_9 ? var_12 : 943039096))) ? var_8 : ((var_14 ? var_11 : var_14))))));
    #pragma endscop
}
