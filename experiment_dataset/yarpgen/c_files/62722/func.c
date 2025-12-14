/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62722
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((min((((/* implicit */unsigned int) arr_2 [19ULL])), (arr_0 [i_0]))) | ((-(4050277570U))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((5675443334218370867ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))))))))))));
                var_11 = ((/* implicit */int) min((4050277570U), (((/* implicit */unsigned int) arr_2 [i_0]))));
            }
        } 
    } 
    var_12 &= ((/* implicit */short) min((var_8), (((/* implicit */int) (short)192))));
    var_13 = ((/* implicit */_Bool) ((var_8) | (var_8)));
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_8)) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)201))) ^ (2968392132U)))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4503599627370495LL)) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_4)))) ? (min((((/* implicit */unsigned long long int) 4050277570U)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1)))))))));
}
