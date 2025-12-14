/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96383
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) min((var_6), (((/* implicit */signed char) var_18))))))) >= (((((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_0])), ((signed char)0)))) - (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) 240977464)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58426))) : (var_4))) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))), (((var_18) ? (((/* implicit */unsigned long long int) var_2)) : (var_16)))));
                        var_22 = ((/* implicit */signed char) arr_6 [i_0]);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_14) ^ (var_19))) >= (((((/* implicit */_Bool) var_14)) ? (var_7) : (var_0)))))) >> (((/* implicit */int) var_8))));
}
