/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72685
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned char)255))))), (var_8)));
    var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255))) ? (((/* implicit */unsigned long long int) var_11)) : (var_2)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)255)))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_2))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (((unsigned long long int) (signed char)127))))));
        var_17 = ((/* implicit */unsigned int) max((arr_2 [i_1] [17U]), (((/* implicit */short) (unsigned char)255))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_9 [17ULL] [3U] |= ((((/* implicit */_Bool) (-(((unsigned long long int) (unsigned char)1))))) ? (min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))) : (var_9));
        var_18 = ((/* implicit */unsigned char) min((var_18), (min(((unsigned char)1), (((/* implicit */unsigned char) (signed char)-127))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
