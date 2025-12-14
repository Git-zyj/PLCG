/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73578
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)148)) ^ (((/* implicit */int) (signed char)-16))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_0)))) * (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) 292252668U)) : (4398046511103ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_10)))) ? (2251799813685244LL) : (((((/* implicit */_Bool) 18446739675663040513ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))) : (2090234534410961253LL)))))))))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */long long int) ((18446739675663040523ULL) / (35465847065542656ULL)));
    var_21 = ((/* implicit */unsigned char) var_2);
}
