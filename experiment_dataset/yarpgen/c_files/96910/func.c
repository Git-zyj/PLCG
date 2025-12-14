/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96910
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
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) (unsigned char)150);
                arr_8 [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */int) (unsigned char)107)) / (((/* implicit */int) (signed char)90)))), (min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) (unsigned short)39051)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (unsigned char)150))))))));
                arr_9 [i_0] [i_1] = ((/* implicit */short) min((min((((((/* implicit */unsigned long long int) var_1)) * (var_16))), (((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1974))))))), (min((min((((/* implicit */unsigned long long int) var_18)), (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (var_5))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((min((max((var_9), (((/* implicit */unsigned long long int) 3150573236U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_18)), (var_14))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)150)), (var_7))))) : (min((((/* implicit */unsigned long long int) (short)-6302)), (var_16)))))) ? (var_4) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((unsigned short)12476), (((/* implicit */unsigned short) (short)1967))))), (min((3007653776U), (((/* implicit */unsigned int) var_15)))))))));
}
