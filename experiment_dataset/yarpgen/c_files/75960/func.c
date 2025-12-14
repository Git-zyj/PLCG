/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75960
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
    var_11 = ((/* implicit */signed char) ((unsigned int) var_6));
    var_12 = ((/* implicit */unsigned char) 2719674051U);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 1575293256U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (4461022276949591523ULL)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_0 [i_3] [i_1])), (var_8))), (((long long int) ((7870293212200472559ULL) >> (((((/* implicit */int) arr_11 [(short)8] [i_1] [12LL] [i_1] [i_1] [i_0])) - (33151))))))))) : (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_0 [i_3] [i_1])), (var_8))), (((long long int) ((7870293212200472559ULL) >> (((((((/* implicit */int) arr_11 [(short)8] [i_1] [12LL] [i_1] [i_1] [i_0])) - (33151))) + (28641)))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_1] [i_1]))) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) max(((short)7293), (((/* implicit */short) (signed char)0)))))));
                    }
                } 
            } 
        } 
        var_15 |= ((/* implicit */_Bool) ((int) ((unsigned long long int) arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (signed char)-63))));
        arr_15 [i_4] [i_4] = ((/* implicit */int) ((_Bool) var_7));
        var_17 = ((/* implicit */signed char) ((long long int) arr_13 [i_4]));
    }
    var_18 = ((/* implicit */int) var_8);
}
