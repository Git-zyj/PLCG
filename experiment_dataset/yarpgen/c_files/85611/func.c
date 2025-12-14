/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85611
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0] [i_0])))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) (!(var_10))))))));
                var_20 = ((/* implicit */int) min((var_17), (((/* implicit */unsigned int) 179427980))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (var_9)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) (short)29229)) != (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) min((var_16), (((/* implicit */unsigned short) arr_0 [i_0] [i_1])))))));
                var_21 += ((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (short)27073)) >= (((/* implicit */int) (short)-32003)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= ((~(((/* implicit */int) (unsigned short)28243))))))))))));
    var_23 += ((/* implicit */unsigned short) min((var_13), ((!(((/* implicit */_Bool) 18204414466573147382ULL))))));
}
