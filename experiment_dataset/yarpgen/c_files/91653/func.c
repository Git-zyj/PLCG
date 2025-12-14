/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91653
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 1419959331)) * (var_16))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [(unsigned char)6] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (arr_1 [i_0] [i_0])));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((int) min((((218741938U) << (((((/* implicit */int) (short)-10721)) + (10751))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1]))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (short)3679);
        arr_8 [i_1] [9LL] &= ((/* implicit */unsigned long long int) var_15);
    }
    var_20 = ((var_3) < ((-(((-6878385607768648833LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60290))))))));
}
