/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88806
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
    var_12 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(3711299137696875535ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) (signed char)96)) ? (4294967266U) : (2571547805U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((((int) 3711299137696875535ULL)), (((((/* implicit */int) (unsigned char)81)) / (((/* implicit */int) (unsigned char)175))))));
                arr_5 [i_1] = ((/* implicit */int) (~(max((min((var_2), (4294967266U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned char)81)) - (67))))))))));
                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) 28U)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(var_2))))));
}
