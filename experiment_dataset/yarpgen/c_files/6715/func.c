/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6715
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
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (var_7) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))) ? ((-(min((var_2), (((/* implicit */unsigned long long int) var_10)))))) : (var_7)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] = (!(((/* implicit */_Bool) (unsigned char)208)));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_7)))) ? ((+(((/* implicit */int) var_5)))) : (min((var_4), (var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_9)))) ? (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)10)), ((short)20943)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-10)) ? (10122425368020151307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_5);
}
