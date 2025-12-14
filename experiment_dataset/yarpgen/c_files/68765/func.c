/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68765
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [3ULL] [i_2] = ((/* implicit */_Bool) var_9);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (arr_5 [13U]) : (arr_5 [i_1]))), (arr_3 [i_0])))), (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_2 [i_2 + 1]))))))));
                    var_20 *= ((/* implicit */signed char) ((var_5) >> (((var_5) - (17602189292780439536ULL)))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)2]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_11)) ? (var_2) : (var_3))))), (max((3728786352U), (((/* implicit */unsigned int) (unsigned char)255))))));
}
