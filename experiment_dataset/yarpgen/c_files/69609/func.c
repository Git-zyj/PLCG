/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69609
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1))))) ^ (((35184372088831ULL) | (var_2))))), (3613742716700158104ULL));
                var_16 = ((/* implicit */unsigned char) max((((13766389795492615617ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) & (3613742716700158107ULL))), (((/* implicit */unsigned long long int) (unsigned short)63200))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_4), (var_10))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-20006)) : (((/* implicit */int) var_9))))))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) var_14);
    var_18 = ((/* implicit */int) var_4);
    var_19 ^= ((/* implicit */_Bool) (short)20005);
}
