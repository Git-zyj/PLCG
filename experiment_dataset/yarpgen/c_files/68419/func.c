/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68419
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((((((/* implicit */int) (short)-20484)) - (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_1 [(short)12])))))) - (1)))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_2 [i_0 - 1]))))) : (arr_1 [i_0 - 1]))), (((/* implicit */long long int) min((((/* implicit */int) max((var_14), (((/* implicit */short) (_Bool)0))))), (((((/* implicit */int) (_Bool)1)) >> (((6306109117688986165LL) - (6306109117688986161LL)))))))))))));
        var_17 -= ((/* implicit */unsigned long long int) var_0);
        var_18 = ((/* implicit */unsigned char) min((arr_0 [i_0]), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (9689349596973419877ULL)))));
                        arr_11 [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (unsigned short)12773)))) - (((/* implicit */int) ((_Bool) var_7)))));
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 1] = ((/* implicit */unsigned short) min((((arr_1 [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (var_4)));
}
