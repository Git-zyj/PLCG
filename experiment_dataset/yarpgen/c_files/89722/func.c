/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89722
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
    var_18 = ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */unsigned char) (signed char)27);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (((((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) | (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_0 [i_0] [(signed char)24]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 288230376084602880ULL))) || (((/* implicit */_Bool) var_12)))))));
                    arr_9 [i_0] [i_1 - 2] [13ULL] = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)3] [(_Bool)1]))) % (var_0))), (var_0)))) : (var_11)));
                    arr_10 [(short)19] [i_1] [24U] = ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1] [i_2]))))) ? (arr_1 [23ULL]) : (((/* implicit */int) (unsigned char)7)));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2])), (arr_6 [i_1 + 2] [(_Bool)1] [i_1 - 2] [i_1]))), (((/* implicit */unsigned long long int) var_14))));
                }
            } 
        } 
    } 
}
