/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68180
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (~(6764069619551367882ULL)))) ? (((/* implicit */long long int) (-(arr_4 [i_0])))) : (((((/* implicit */long long int) arr_6 [i_0])) % (-1LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13LL)) ? (17LL) : (-1LL)))) ? (((((/* implicit */_Bool) 18LL)) ? (18LL) : (-16LL))) : ((~(-26LL)))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) (+(arr_4 [i_0])))) ^ (((((/* implicit */_Bool) ((unsigned short) -1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */long long int) var_13)), (-16LL))))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) max((-1LL), (0LL)));
            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 20LL)) ? (-21LL) : (-4LL)));
        }
        var_25 = ((/* implicit */signed char) var_12);
        var_26 -= ((/* implicit */unsigned int) max((-16LL), (((((/* implicit */_Bool) var_19)) ? ((-(29LL))) : (((/* implicit */long long int) ((/* implicit */int) ((-2LL) > (-18LL)))))))));
    }
    var_27 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 1LL)) ? (((long long int) -29LL)) : (37LL))));
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((((((/* implicit */long long int) var_19)) - (max((((/* implicit */long long int) var_13)), (-4LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), ((~(var_19)))))))))));
}
