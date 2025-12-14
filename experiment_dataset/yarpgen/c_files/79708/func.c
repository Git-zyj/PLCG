/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79708
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
    var_17 = ((/* implicit */_Bool) min((((var_9) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))), (((/* implicit */unsigned int) var_10))));
    var_18 = (+(((/* implicit */int) (unsigned short)38717)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((min(((+(((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_0 [i_1])))))) + (((arr_0 [i_0]) ? (var_4) : (((/* implicit */int) arr_0 [i_1])))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_16))) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_4 [i_1] [i_1] [i_1])))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_5 [i_1]))))));
                var_19 -= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) min((((/* implicit */signed char) var_11)), (arr_2 [i_0] [(_Bool)1]))))))), ((((_Bool)1) ? (var_3) : (arr_1 [i_0])))));
            }
        } 
    } 
}
