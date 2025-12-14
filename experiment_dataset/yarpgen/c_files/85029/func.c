/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85029
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) | (var_14))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1536))) ^ (0ULL)))))) << (((((0ULL) << (((var_0) + (8296088812168903652LL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) * (((/* implicit */int) var_12)))))))));
    var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1542))) != (var_7))))) ^ (((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_12))))))) == (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-119)) / (var_2))) / (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1))))))))));
    var_21 = ((((((/* implicit */long long int) ((/* implicit */int) ((var_4) < (var_6))))) % (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_0))))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_9))))) & (((((/* implicit */unsigned long long int) var_15)) ^ (0ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned short)64000))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1551))) | (arr_2 [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) - (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63999)) - (((/* implicit */int) var_1)))))))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2057411513644584339LL)) && (((/* implicit */_Bool) var_18)))))) == (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) && (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [10ULL])) >> (((var_17) + (2088848638778180518LL)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_1 [i_1]) + (1115911052923208222LL))))))))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)37657)) & (((/* implicit */int) arr_0 [i_0])))) < ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((arr_1 [i_1]) + (1115911052923208234LL))) - (12LL)))))))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) 8145255403900999723LL)))))) & (((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1537)))))))));
            }
        } 
    } 
}
