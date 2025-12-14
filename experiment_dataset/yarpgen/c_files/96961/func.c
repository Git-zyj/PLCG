/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96961
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((var_2) ^ (var_2))) : (((((/* implicit */_Bool) var_12)) ? (5983630471528616739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19360)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)141)) <= (((/* implicit */int) var_6))))), (var_1))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((unsigned long long int) var_8)) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)158), ((unsigned char)141)))))));
                    var_17 += ((/* implicit */short) (((-((+(((/* implicit */int) (unsigned char)116)))))) ^ (((/* implicit */int) var_7))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14)))))))) ? (((((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_2] [i_1 - 1])) >> (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1 - 1])))) : (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
}
