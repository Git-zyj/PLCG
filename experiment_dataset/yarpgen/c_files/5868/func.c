/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5868
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) (signed char)125);
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (17213228596070264941ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_21 = (signed char)-119;
        arr_5 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49743)) || (((/* implicit */_Bool) (signed char)127)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) & (134217727U)))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned long long int) ((short) arr_3 [(short)17]))))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-99)) == (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_24 ^= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) arr_0 [i_2])))) ? (((/* implicit */long long int) ((1750293218) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (134))) - (6)))))) : (-4353899882243587435LL))) >> (((((/* implicit */int) ((unsigned short) arr_3 [i_2]))) - (37)))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
    }
}
