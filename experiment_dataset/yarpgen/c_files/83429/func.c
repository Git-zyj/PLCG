/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83429
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
    var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36675))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)63)) >> (((2634401248U) - (2634401232U)))))), (3720716713U)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) ^ (arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) var_16))))))));
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)193))))) ? ((+(740168845U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))) == (689063405U))))));
    }
    for (unsigned int i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        arr_6 [(unsigned char)14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3554798451U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (3554798451U))), (max((740168844U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 689063405U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))), (2214696290U)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) 740168844U)) ? (arr_4 [i_1]) : (arr_4 [i_1])))), (min((-3716142429336726282LL), (((/* implicit */long long int) (_Bool)1))))))));
        var_22 = ((/* implicit */int) ((short) ((arr_4 [i_1 + 1]) >= (740168845U))));
    }
    var_23 *= ((/* implicit */int) (!(min(((!(((/* implicit */_Bool) (unsigned short)65535)))), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 740168845U))))))));
}
