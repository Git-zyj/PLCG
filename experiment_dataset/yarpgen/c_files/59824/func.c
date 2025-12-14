/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59824
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((17365448653929670984ULL) == (((/* implicit */unsigned long long int) -8834218527200307820LL))))), (arr_1 [i_0] [i_1])));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((arr_1 [i_0] [i_1]) / (((/* implicit */long long int) -1890181731)))), (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_5 [i_1] [i_3 + 1]))));
                            arr_8 [i_1] = 70368744177663ULL;
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))) + ((+(17365448653929670984ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_13)))) ? (((((/* implicit */_Bool) 8606812677936462095LL)) ? (((/* implicit */unsigned int) 0)) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -17)))))))) : (min((((/* implicit */unsigned int) ((var_7) == (17365448653929670984ULL)))), (((((/* implicit */_Bool) 2606340010U)) ? (8388607U) : (var_10)))))));
}
