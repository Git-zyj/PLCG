/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90841
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
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1612320751U)) ? (var_16) : (var_10))), (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) 308910634)))))))) ? (max((max((var_16), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (var_4)))))) : (max((7570623230625220625ULL), (10876120843084330996ULL)))));
                arr_5 [20U] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_0 [(_Bool)1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))), (((((/* implicit */_Bool) arr_2 [0] [i_1 - 1])) ? (arr_2 [(short)12] [i_1 - 1]) : (((/* implicit */unsigned long long int) 542495002U))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), ((~(10876120843084330991ULL)))));
}
