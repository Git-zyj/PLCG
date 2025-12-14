/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65560
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
    var_18 = ((/* implicit */short) min((4063232U), (((/* implicit */unsigned int) (signed char)-102))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1])))) >> (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_4))) << ((((~(((/* implicit */int) var_7)))) + (117))))) - (1238489897526886391ULL)))));
                var_20 = max(((+(((((/* implicit */_Bool) (unsigned char)8)) ? (5846086580673738733LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27302))))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 5846086580673738754LL))) / (((/* implicit */int) (signed char)80))))));
                var_21 *= ((/* implicit */_Bool) arr_0 [i_1 + 1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-5846086580673738729LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) <= (10479635263319011349ULL)))) : (((/* implicit */int) var_8))));
}
