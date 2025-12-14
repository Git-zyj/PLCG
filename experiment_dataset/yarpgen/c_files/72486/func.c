/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72486
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((411525480U) > (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)174)) && (((/* implicit */_Bool) (short)14283)))))))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-25)))))))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_0 - 3])), (((unsigned short) var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_12);
        var_15 += arr_0 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) max(((short)-14284), (((/* implicit */short) (unsigned char)161)))))))) ? (((((/* implicit */int) (unsigned char)47)) ^ (((/* implicit */int) (unsigned short)58996)))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) (short)-17771))))));
    }
    var_16 = ((/* implicit */long long int) var_7);
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)31)), ((short)(-32767 - 1)))))));
    var_19 = ((/* implicit */unsigned char) var_10);
}
