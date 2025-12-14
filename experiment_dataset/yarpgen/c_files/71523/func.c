/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71523
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((var_2), (var_11))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) : (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7)))), (((var_1) << (((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 16276720218182162296ULL))))) / (((/* implicit */int) max(((unsigned char)33), ((unsigned char)33)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)14] [i_1] = (_Bool)1;
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_14 [16U] [(unsigned char)14] [(_Bool)0] [i_3] = ((/* implicit */unsigned char) (~(min((arr_9 [i_0] [i_1 - 1] [i_3 + 1] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_0])))))))));
                            arr_15 [i_1] [i_2] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3 - 1])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_0]))) - (991612151U)))));
                            arr_16 [i_1 - 1] [i_2] [i_3 - 2] = ((/* implicit */unsigned short) arr_1 [(unsigned char)18]);
                        }
                    } 
                } 
                arr_17 [i_0] [(unsigned short)4] [i_0] = max((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_7 [i_1] [i_0])))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1] [i_1])))) : (((/* implicit */int) arr_11 [i_1 - 3] [i_1 - 2] [i_1 - 1] [i_1 - 2]))))));
                arr_18 [i_0] [i_1] = var_11;
                arr_19 [i_1] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
            }
        } 
    } 
}
