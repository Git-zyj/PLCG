/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66460
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
    var_16 = ((/* implicit */int) max((((min((((/* implicit */long long int) var_0)), (5296669631743971621LL))) + ((-(var_11))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_1)))))))));
    var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((var_15), ((_Bool)1)))) : ((-(var_6))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((min((min((var_1), (var_4))), (arr_0 [i_0] [i_1 + 2]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_5) | (arr_4 [i_0] [i_1]))))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) min((2147483647), (-1507353989))))) != (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)16384)), ((+((-(3238283450U)))))));
    var_20 = ((/* implicit */unsigned short) max((-4923776252141882435LL), (((/* implicit */long long int) var_9))));
}
