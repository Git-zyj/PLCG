/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68275
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 650787571U)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_0)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -5613703706454044325LL)) ? (136902082560LL) : (((/* implicit */long long int) var_2)))) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_6 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (5613703706454044325LL)))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1]) == (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)16412)) : (((/* implicit */int) var_1))))))))));
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned char)236))));
    var_19 |= ((/* implicit */int) min((((/* implicit */long long int) var_15)), (min((min((((/* implicit */long long int) -1677870741)), (136902082566LL))), (((/* implicit */long long int) var_9))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_10) ? (var_15) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) 262128U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) : (136902082555LL))) : (((/* implicit */long long int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))))) >= (min((((/* implicit */long long int) 284560305U)), (var_5)))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min((3644179724U), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((((2147352576U) & (3483228973U))) - (1335623680U))))))));
}
