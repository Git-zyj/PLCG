/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95610
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
    var_17 = ((/* implicit */unsigned short) (((+(1327310783U))) <= (((/* implicit */unsigned int) (~(max((971915057), (((/* implicit */int) (short)24040)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))) ^ (var_2)));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6))))) / ((+(var_0))))), (var_0))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) / (((unsigned int) (signed char)32))));
            }
        } 
    } 
    var_21 = ((((/* implicit */int) (unsigned char)174)) / (((/* implicit */int) (short)-24044)));
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)96))))))))));
}
