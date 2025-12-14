/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85350
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
    var_16 = ((/* implicit */long long int) ((max((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31744)) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) (signed char)89))))))) + (var_11)));
    var_17 = ((/* implicit */short) ((max((((unsigned long long int) (signed char)-89)), (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12)))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 2896719928956608631LL)) ? (((/* implicit */long long int) arr_3 [i_0])) : (-2896719928956608612LL)));
                var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)17762))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */int) (short)26159)), ((+(((/* implicit */int) (unsigned char)54))))))), (((((/* implicit */long long int) arr_0 [i_0])) % (((2896719928956608638LL) | (((/* implicit */long long int) var_7))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -2279772688574650467LL))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))))));
}
