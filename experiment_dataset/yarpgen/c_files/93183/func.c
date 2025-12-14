/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93183
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) var_5))), (var_10)));
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)135))))) == (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1])) ? (var_9) : (arr_4 [i_1] [i_0 + 1])))));
                var_18 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */unsigned long long int) 3327447806U)) : (0ULL)))));
                arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0 - 1])))) : (((/* implicit */int) ((signed char) (_Bool)0))));
                arr_8 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (3327447806U)));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (unsigned short)52906))))) / (max((var_12), (var_14)))))) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (unsigned char)128))))) ? (1319032558U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11))))));
}
