/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74368
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
    var_20 *= ((/* implicit */unsigned int) var_4);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((min((((/* implicit */unsigned long long int) var_13)), (var_17))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((var_12) - (14907953687236974446ULL)))))))) : (((/* implicit */unsigned long long int) max((((unsigned int) var_9)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_18)) : (var_1))))))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (short)32750)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) : (arr_0 [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_11)), (var_3)));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1]))))) ? (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)9])) : (((/* implicit */int) arr_3 [(unsigned char)12])))) % (((/* implicit */int) max((var_8), ((signed char)117)))))) : (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_15) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_18);
}
