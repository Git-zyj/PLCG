/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85520
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
    var_17 ^= var_3;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1972592006U)))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
        arr_3 [(unsigned short)18] |= ((/* implicit */int) (short)508);
        var_18 = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) var_14))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_19 += ((/* implicit */unsigned short) arr_6 [6] [(unsigned short)0] [i_0]);
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [(unsigned short)8])))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))), (var_12))))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18446))) & (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))))))));
        }
        for (short i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((long long int) var_13)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2 - 3])))))));
            var_22 = ((/* implicit */signed char) (_Bool)1);
            var_23 ^= ((/* implicit */unsigned short) (unsigned char)52);
        }
    }
    var_24 ^= ((/* implicit */unsigned char) (!((_Bool)1)));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned short) max((max((((/* implicit */short) (_Bool)1)), (var_3))), (((/* implicit */short) var_10))))))));
    var_26 = ((/* implicit */short) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) var_5))));
}
