/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94707
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * ((~(var_5)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) != (var_0)))) * (((((/* implicit */int) arr_5 [i_0] [(_Bool)1])) + (((/* implicit */int) (unsigned char)7))))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) + (arr_4 [i_0] [i_1]))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */_Bool) 2297506784890761358ULL)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2]))))))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) - (867933892))) / ((-(((/* implicit */int) var_3)))))))));
            var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (short)-21499)) - (((/* implicit */int) (_Bool)1)))))))));
            arr_10 [i_0] = ((/* implicit */unsigned long long int) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57085)))));
        }
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) * (((var_0) / (((/* implicit */unsigned long long int) var_12)))))) >> ((((~((+(((/* implicit */int) var_17)))))) + (1198))))))));
}
