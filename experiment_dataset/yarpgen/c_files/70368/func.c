/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70368
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
    var_18 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
        var_20 ^= (unsigned char)63;
        var_21 *= ((/* implicit */unsigned short) max((2363517734U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) < (1048560))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_4 [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (1023290786U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [7LL] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_1)))))))));
        arr_5 [(unsigned short)2] = ((((((/* implicit */_Bool) (+(1931449562U)))) ? (2363517726U) : (arr_3 [i_1] [i_1]))) * (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_2 [(unsigned short)5]))))), ((-(((/* implicit */int) var_10))))))));
        arr_6 [11LL] = ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) var_6))), (max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))));
    }
}
