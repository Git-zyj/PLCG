/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85616
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [(short)14] [i_1] [i_0] [(short)14] = arr_4 [(signed char)9] [i_1] [i_1];
                    var_18 ^= ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (var_0)))) - (((long long int) arr_5 [(signed char)2] [(_Bool)1])));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483628)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (short)24164))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (524287LL)))))))) ? (arr_5 [i_0] [i_0]) : (((((/* implicit */_Bool) (signed char)89)) ? (((((/* implicit */_Bool) -1615847532907306014LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) 4166323548U))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)24164)) * (((/* implicit */int) (_Bool)0))));
    var_20 = ((/* implicit */signed char) var_12);
}
