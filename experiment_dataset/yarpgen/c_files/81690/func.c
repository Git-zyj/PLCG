/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81690
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
    var_15 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((short) (short)-15208))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((int) (unsigned short)15409))))));
    var_16 = ((((/* implicit */int) var_8)) % (var_6));
    var_17 = var_12;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [0LL] = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((384U) & (((/* implicit */unsigned int) arr_3 [i_1 + 2] [i_1 - 1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_8), (var_8))))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_10))));
                                var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [10U])) ? (((((/* implicit */_Bool) ((3238892165U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [14U])))))) ? (((/* implicit */int) arr_14 [i_0] [1LL] [i_2] [(unsigned char)6] [14LL])) : (arr_0 [(unsigned char)6]))) : (((/* implicit */int) arr_4 [(unsigned short)0]))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_13 [i_1] [i_1 - 1] [i_3 + 1] [i_4] [4LL] [14]) : (arr_13 [i_0] [i_1 + 1] [i_3 + 2] [16] [2] [0ULL])))) ? (((((/* implicit */_Bool) max((arr_12 [i_4] [i_3] [7] [i_2] [(short)7] [(unsigned char)0]), ((-2147483647 - 1))))) ? (arr_8 [2U] [i_1 - 2] [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)5] [16LL] [i_2] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((((/* implicit */_Bool) ((short) max((1029411855224467153LL), (var_4))))) ? ((+(((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (((/* implicit */int) ((((int) (signed char)11)) == (((((/* implicit */int) var_2)) - (var_14)))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (4294967295U)))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-24951)), (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((var_7) - (1956197205U)))))) : (8143720684093584099LL))))))));
            }
        } 
    } 
}
