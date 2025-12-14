/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96107
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) (signed char)54);
        var_12 = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-23554)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)0))))))) <= (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0]))))))));
        var_14 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))) : (max((4294443008ULL), (((/* implicit */unsigned long long int) var_5)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = (signed char)96;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_8 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97)))))) * (((/* implicit */int) var_2))));
            var_17 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        }
    }
    var_18 = ((/* implicit */unsigned long long int) var_2);
    var_19 = ((/* implicit */signed char) var_7);
    var_20 = ((/* implicit */short) max((var_0), (((/* implicit */unsigned long long int) ((((unsigned long long int) var_10)) < (((/* implicit */unsigned long long int) (+(var_9)))))))));
}
