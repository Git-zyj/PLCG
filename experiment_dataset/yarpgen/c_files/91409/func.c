/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91409
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */short) (~((-(((/* implicit */int) ((signed char) arr_6 [(short)1] [i_1] [(short)1])))))));
                    arr_10 [i_0] = ((/* implicit */short) ((arr_5 [i_0] [i_0] [i_2]) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))) & (var_11)))) ? (4128128288U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(4294967279U))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-11427)))) * (((((/* implicit */int) (unsigned char)78)) / (67108863)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */int) var_14)))) == (((/* implicit */int) var_0))))) : ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [(signed char)22])) <= (((((/* implicit */int) arr_11 [i_3])) << (((4294967292U) - (4294967281U)))))))) : (min((((/* implicit */int) max(((short)-25991), (var_7)))), (((((/* implicit */int) arr_11 [i_3])) | (((/* implicit */int) arr_11 [i_3]))))))));
        var_20 = ((/* implicit */short) ((((((/* implicit */int) arr_12 [23U])) > (((/* implicit */int) arr_11 [i_3])))) ? (var_1) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) <= (var_5)))), (((arr_12 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (7803992907510549126LL))))))));
        arr_13 [22ULL] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11707)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (4611686018427387840ULL)));
    }
}
