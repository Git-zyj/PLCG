/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57765
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -392865615)) ? (1817999096) : (((/* implicit */int) (signed char)-56))))) ? (((((/* implicit */_Bool) (signed char)-72)) ? (14433435885286170266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16805832150038016246ULL)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)-54)))))));
                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned long long int) max((((-1743126326) | (((/* implicit */int) (signed char)-61)))), (min((var_13), (((/* implicit */int) (signed char)31))))))) : (17821543482139418857ULL)));
                var_20 ^= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((signed char) (_Bool)0))), (min((67553994410557440ULL), (((/* implicit */unsigned long long int) (signed char)68)))))), (((/* implicit */unsigned long long int) min((-1743126326), (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6))))))));
}
