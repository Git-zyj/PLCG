/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75723
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_14)))))) : (min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) var_12)), (var_16)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) var_3)), (var_5)))))));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((arr_2 [i_0]), (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) >> (((((/* implicit */int) arr_4 [15] [i_1 - 2] [15])) - (24502))))))));
                arr_7 [0] [0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_2 [i_1 - 2]))))));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 2])) / (((/* implicit */int) arr_4 [10LL] [10LL] [i_1 + 1]))))), (var_8)));
                arr_8 [i_0] [(unsigned char)12] = ((/* implicit */unsigned char) min((max((max((var_5), (((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)18] [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_0 [i_0] [i_1 - 1])), (arr_3 [i_1] [i_1 - 1] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_14);
}
