/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9379
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
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11526)) && (((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)93), (((/* implicit */unsigned char) (_Bool)1))))) | (((/* implicit */int) (unsigned short)15056)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) arr_5 [(short)17]);
                var_17 = ((/* implicit */unsigned short) max(((short)22838), (((/* implicit */short) min((((/* implicit */unsigned char) arr_0 [i_0])), (var_15))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */int) (unsigned short)33597)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_1)))))))));
                arr_8 [i_0] [i_1] [6U] = ((/* implicit */long long int) (~((+(((/* implicit */int) (short)1612))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)79), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */int) (unsigned char)93)) >> (((-5430057645901085370LL) + (5430057645901085399LL))))) : (((/* implicit */int) (short)11526))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (_Bool)0);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)11507)), (var_11))))))));
}
