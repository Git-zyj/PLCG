/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59777
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) + (83)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : ((~(((((/* implicit */_Bool) -648649794)) ? (6120654926196767811ULL) : (6120654926196767812ULL)))))));
                arr_8 [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3048118303U)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_9))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)76)) <= (((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */unsigned long long int) var_8)), ((+(var_1))))) : (6120654926196767812ULL)))));
            }
        } 
    } 
    var_11 |= ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(12326089147512783800ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 33554424)))) : (var_1))) : ((+(var_1))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((-33554424) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (var_1))) : (((((((/* implicit */_Bool) 12326089147512783800ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))))))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_9)))))))));
}
