/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75936
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
    var_18 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((1048310652U) ^ (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_3 [i_0] [i_0])))) | (arr_4 [i_0] [i_0])))))))));
                arr_5 [(unsigned char)14] = ((/* implicit */short) 1084484734);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)60367)), (3072LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) arr_1 [(short)21]))))) : (var_15)));
                arr_6 [i_1] &= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 12099136469946418262ULL)) ? (arr_1 [i_1]) : (474280959427129807ULL))));
                var_21 = ((/* implicit */short) var_2);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((3351928199U) >> (((1044547335) - (1044547322)))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) > (8346413383560567912ULL)))))), (((((/* implicit */_Bool) ((var_9) ? (var_12) : (((/* implicit */unsigned long long int) 943039096U))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_14))))))));
}
