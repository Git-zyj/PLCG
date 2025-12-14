/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83043
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
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [10] &= min((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_14)) | (var_10))) != (((/* implicit */unsigned long long int) min((var_16), (var_16))))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) 1138231237U))))) ? (((((/* implicit */_Bool) 4965071031516653126ULL)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (short)-3527)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */int) (unsigned short)42450))))) ? (((((/* implicit */_Bool) 4984487598057597837ULL)) ? (var_5) : (((/* implicit */int) (signed char)-65)))) : (((/* implicit */int) min(((signed char)-65), ((signed char)-65))))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) 4066925274U)) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)23085)) : (((/* implicit */int) (unsigned char)255))))))));
    }
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) (unsigned short)42459)), (2147483647))) : (var_5)));
    var_19 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-25))));
}
