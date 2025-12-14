/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9308
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_8)))) : (((/* implicit */int) min(((unsigned short)2166), (((/* implicit */unsigned short) (unsigned char)17)))))))))))));
    var_16 = ((/* implicit */long long int) var_1);
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_3))))) <= (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (min((4243210850990298540ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_18 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_4)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13)))))))), (min((((long long int) (unsigned short)27952)), (((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53325))) : (var_11))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])));
                var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_12)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
            }
        } 
    } 
}
