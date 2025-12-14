/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74605
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (var_9) : (var_4)))))) ? ((-((~(var_13))))) : ((+(((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_21 = ((/* implicit */unsigned char) ((unsigned int) 4961848191611985638LL));
    var_22 = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) 18446744073709551604ULL)) && (((/* implicit */_Bool) var_15))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */short) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((((/* implicit */int) ((signed char) var_9))) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), (var_19)))))))));
                var_24 &= ((/* implicit */signed char) min((((unsigned long long int) arr_4 [i_1] [8U])), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8146))) + (arr_1 [i_0]))))));
            }
        } 
    } 
}
