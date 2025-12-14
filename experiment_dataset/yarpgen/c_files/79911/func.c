/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79911
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
    var_16 = var_2;
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_11))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_12))));
                        arr_9 [i_0] [(short)8] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(short)3] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2]))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
        arr_10 [i_0] [18ULL] = ((/* implicit */unsigned long long int) (short)3072);
        arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3073)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
        arr_16 [(short)15] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)3088)), ((+(((/* implicit */int) (short)3068))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (short)3065))));
    }
    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)-2048), (var_2))))));
}
