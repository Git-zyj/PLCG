/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66814
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
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 = ((/* implicit */_Bool) -61740857189924173LL);
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) var_6);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) : ((-((-(10461467004231412768ULL)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 61740857189924194LL)) ? (4861525215213594350LL) : (6402034326590325447LL)));
        var_18 = ((((/* implicit */_Bool) (~(-30561234)))) ? (max((((((-61740857189924173LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)255)) - (246))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) (signed char)-103))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) -6402034326590325426LL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (-6402034326590325437LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))));
    }
}
