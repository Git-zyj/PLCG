/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80325
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] [i_1] = var_6;
            var_16 ^= ((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1]))))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_3 [i_0])));
        var_17 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_18 += ((/* implicit */unsigned int) 8787503087616ULL);
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (max((((/* implicit */unsigned long long int) var_0)), (var_8)))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (var_7)))) ? (((/* implicit */int) (!(var_10)))) : (((/* implicit */int) ((short) (unsigned char)47)))))) ? (max(((+(((/* implicit */int) var_3)))), (1357586997))) : (((/* implicit */int) ((max((var_14), (-2739444717362378986LL))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14)))))));
}
