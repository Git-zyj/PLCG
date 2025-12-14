/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92669
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (unsigned char)210))));
    var_15 = (signed char)-12;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) < (((/* implicit */int) (short)-30157))));
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((short) 2748707361281466300ULL)), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */int) (unsigned char)210)) << (((((/* implicit */int) var_12)) + (91))))) : (((((/* implicit */_Bool) (unsigned short)51276)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65528))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (_Bool)1))));
        var_18 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((min((((((/* implicit */_Bool) 706833892)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_2 [i_0])))), ((-(((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((unsigned long long int) (unsigned short)65513);
        arr_8 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_11))));
        var_20 ^= ((/* implicit */short) (-(arr_1 [i_1] [i_1])));
        var_21 -= ((/* implicit */int) ((arr_5 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_1 [i_1] [i_1])));
        arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)5990)))) : (((var_9) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_1])))));
    }
}
