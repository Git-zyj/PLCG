/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77129
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2932631488U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 3]))) : (arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_2)), (0U)))))) : ((((+(2097151ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */long long int) 4294967273U)) : (arr_4 [i_0] [i_0] [i_1 - 3])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (4294967288U)))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) -7643217581544208563LL))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) % (arr_3 [i_2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (max((arr_3 [i_2] [i_1 - 4] [i_0]), (((/* implicit */unsigned long long int) 4294967290U))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4 + 1] [i_3] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_17 [(_Bool)1] [i_4] [(unsigned short)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 21U)) : (var_17)))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (unsigned short)2048)))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */signed char) ((arr_15 [i_0] [i_1] [5LL] [i_1 - 3] [i_2]) ^ (((var_9) & (arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 3] [(_Bool)1])))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */short) var_2)), (var_7)))) - (24803))))))));
    var_22 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) 4294967290U)) && (((/* implicit */_Bool) (unsigned short)22770)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4294967287U)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (1438942694U))))), (min((min((((/* implicit */unsigned int) var_7)), (4294967287U))), (489740449U)))));
    var_23 = 9223372036854775807LL;
    var_24 = var_11;
}
