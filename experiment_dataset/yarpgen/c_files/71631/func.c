/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71631
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
    var_11 = ((/* implicit */signed char) var_5);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) ((unsigned int) 1128178960)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(var_10)))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((min((1128178960), (max((((/* implicit */int) (signed char)74)), (-1128178961))))), (((/* implicit */int) ((short) var_10))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)251)) / (((((/* implicit */_Bool) (unsigned char)229)) ? (max((42721291), (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((unsigned short) -1128178973)))))));
        arr_3 [(short)8] &= ((/* implicit */int) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned short) max((var_15), (((unsigned short) 1064352647U))));
        arr_4 [i_0] = ((/* implicit */signed char) ((long long int) (~(1128178960))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (signed char)3))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1]))) : (((unsigned long long int) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    }
}
