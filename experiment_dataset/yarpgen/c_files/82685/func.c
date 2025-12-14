/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82685
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) >> (((5200196884863589589ULL) - (5200196884863589558ULL))))) : (((arr_0 [i_0]) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (short)-24394)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)23940))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-9404))))))));
        arr_3 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)9404))))));
        var_17 *= ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_0 [i_0 - 3]))));
    }
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            {
                arr_11 [i_1] [i_2] = ((/* implicit */_Bool) (((-(max((1264397177614626420LL), (var_6))))) + (((/* implicit */long long int) ((/* implicit */int) (short)2048)))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (min((1264397177614626420LL), (((/* implicit */long long int) (signed char)-11)))) : (((1264397177614626411LL) % (((/* implicit */long long int) arr_4 [i_2])))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [(signed char)11])) : (((/* implicit */int) var_15)))) >> (((/* implicit */int) arr_0 [i_2])))))));
                arr_12 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) arr_0 [i_1]))))) ? (((((((/* implicit */int) var_2)) != (((/* implicit */int) var_13)))) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_1)))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_0 [i_2]))))), (((((((/* implicit */int) var_10)) + (2147483647))) << (((var_9) - (556043385U))))))))));
                arr_13 [i_1] [i_1] [i_1] = (~(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_2])))));
                arr_14 [i_1] [(signed char)6] = ((max((((8779316069349111470ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (var_3))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)8])) ? (((((/* implicit */int) arr_9 [i_1] [i_2] [i_1])) + (((/* implicit */int) var_14)))) : (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)-9387))))))));
            }
        } 
    } 
}
