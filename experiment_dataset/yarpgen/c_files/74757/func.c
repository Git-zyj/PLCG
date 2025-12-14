/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74757
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) var_8);
        var_11 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)63))));
        var_12 = arr_1 [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)63)), (1365596846))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        arr_5 [4U] [i_1] |= ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)63))))))) > (((/* implicit */long long int) max((max((((/* implicit */int) (unsigned short)65535)), (1358347780))), (((((/* implicit */int) var_6)) ^ (-1908778662)))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_4 [16LL]))))), ((+(((/* implicit */int) var_9))))))) ? (((unsigned int) max((1953438396U), (((/* implicit */unsigned int) (signed char)-89))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((var_8), (((/* implicit */long long int) arr_3 [i_1])))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)183))))), (((((/* implicit */int) var_5)) >> (((3677865486U) - (3677865475U)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_8)))) ? (((/* implicit */unsigned int) ((arr_4 [i_1]) % (((/* implicit */int) var_1))))) : (((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_1]))))))))));
    }
    var_17 -= ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */signed char) ((int) (unsigned char)73));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) var_6)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((max((((/* implicit */long long int) (_Bool)1)), (var_8))) % (((var_6) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((var_6) && (((/* implicit */_Bool) 3407170542U)))))))))))));
}
