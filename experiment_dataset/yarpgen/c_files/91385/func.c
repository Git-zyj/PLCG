/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91385
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
        var_18 = arr_1 [i_0] [i_0];
        var_19 = ((/* implicit */int) min((((long long int) var_2)), (((/* implicit */long long int) ((short) (-(arr_2 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_6 [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 202463697U)), (-1LL))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        var_20 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_1])))) ? ((-(arr_4 [i_1] [i_1]))) : (((/* implicit */long long int) min((var_2), (((/* implicit */int) var_10)))))))) + (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
        var_21 = ((/* implicit */unsigned short) arr_5 [i_1] [(unsigned short)9]);
    }
    var_22 &= ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) - (((((((/* implicit */int) var_9)) > (var_2))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) > (((/* implicit */int) var_5)))))))));
    var_23 = ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 680875996))));
}
