/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93145
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
    var_16 -= ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 4294967295U)), (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [(_Bool)1])) / (arr_4 [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17617448953636281293ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2147483646))))))));
                var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0] [(_Bool)1])), (arr_1 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((max((var_8), ((~(((/* implicit */int) (_Bool)1)))))), (max((2147483647), (-2147483645)))));
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)234))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (0U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)57)))))));
    var_21 = ((/* implicit */long long int) max((11292095792041646531ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (signed char)127)) ? (var_9) : (((/* implicit */int) (unsigned char)251)))))))));
}
