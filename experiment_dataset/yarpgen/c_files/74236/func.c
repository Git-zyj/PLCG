/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74236
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
    var_18 = ((/* implicit */short) ((0ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)176)), ((-2147483647 - 1))))) : (min((var_1), (((/* implicit */unsigned int) var_7)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [18] [(short)1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) -92765232)), (4294967276U)));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)107)) << (((3238544978U) - (3238544978U)))))))))) != (((((/* implicit */_Bool) 23ULL)) ? (357077444717663637ULL) : (18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((1056422318U) * (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) * (var_10)))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((var_12) ? (var_15) : (var_15))) : (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
}
