/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93746
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_18);
                var_21 = ((/* implicit */unsigned int) (~(min((min((var_12), (((/* implicit */unsigned long long int) (signed char)-53)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-48)) + (2147483647))) << (((arr_0 [i_0] [i_1]) - (317046647326312374LL))))))))));
                var_22 &= ((/* implicit */int) (signed char)-53);
                arr_7 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8972014882652160LL)), (17170246402235093097ULL)))) ? (min((arr_1 [i_0]), (((/* implicit */long long int) arr_6 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-53)), (arr_3 [i_1])))))))), (var_12)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (var_16)));
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (270215977642229760LL))))));
}
