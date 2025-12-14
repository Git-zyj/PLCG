/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56122
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
    var_12 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) < (-129733563)));
        var_14 += ((/* implicit */unsigned short) (-(22)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_4 [i_1]))));
        var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_2 [i_1]))))), ((~(0U)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -218550665))));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3)) / (218550674)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [i_1] [i_1]))))) : (max((((/* implicit */unsigned int) var_1)), (3704611337U)))))) ? (((/* implicit */int) ((short) ((int) (signed char)-1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65472))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14264))))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (short)8))) ? (((/* implicit */int) ((((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) < (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((((/* implicit */_Bool) min((310654981U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) != (4294967295U)))) : ((~(((/* implicit */int) (short)-14259))))))));
    }
    var_19 = ((/* implicit */unsigned char) var_0);
}
