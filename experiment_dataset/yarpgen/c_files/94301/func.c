/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94301
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
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_8)) + (6040)))))), (min((var_6), (((/* implicit */unsigned long long int) var_12)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)6094))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) min((16429724161412098352ULL), (((/* implicit */unsigned long long int) (signed char)-117)))));
                    var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (-4678650063280795843LL))))))) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_0])));
                }
            } 
        } 
    } 
}
