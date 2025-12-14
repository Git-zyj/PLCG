/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93391
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
    var_12 = ((/* implicit */unsigned char) (signed char)122);
    var_13 *= ((((/* implicit */int) var_8)) >= (max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_8)))));
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = var_4;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-2902499588202317639LL)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1]))) : (0ULL)));
            var_15 = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
            arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-119)) ? (-3927586147159549917LL) : (((/* implicit */long long int) 0U))))))) ? (((arr_4 [i_1]) - (arr_4 [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
        }
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-49)) + (2147483647))) << (((arr_4 [i_0]) - (1453308911217754898LL)))))) && (((/* implicit */_Bool) var_6)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
    {
        var_17 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_2 + 1]))));
        arr_11 [i_2 - 2] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)31))));
    }
}
