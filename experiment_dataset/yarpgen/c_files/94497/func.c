/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94497
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
    var_14 = ((/* implicit */unsigned long long int) (unsigned short)48227);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((arr_2 [i_0]) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (803854274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_12)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((unsigned short)17296), ((unsigned short)48204)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (507710946)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 3] = ((/* implicit */signed char) (-(((arr_9 [i_0] [i_0] [i_0]) << (((((/* implicit */int) var_2)) - (118)))))));
                                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (signed char)-4)), ((short)32729))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_7 [18U] [i_1] [i_0]))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_24 [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32758)))))) ? (((((/* implicit */_Bool) -2189873972922694472LL)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_6 + 1] [(signed char)18])) : (((/* implicit */int) var_2)))) : ((~(-17)))))) ? (((((/* implicit */int) (signed char)98)) | (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_8 [8LL] [i_6 + 2] [i_7] [i_7])))))) : (((((/* implicit */int) max((arr_7 [i_7] [i_7] [(short)24]), (((/* implicit */unsigned short) arr_22 [i_5] [i_5] [i_6] [(signed char)21]))))) | (((/* implicit */int) arr_12 [i_7] [i_6] [i_6 + 1] [i_5] [i_5] [i_5]))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32766)) <= (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (-118183062) : (-118183065)))) / (((arr_8 [7] [i_6] [i_7] [i_5]) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))))))));
                }
            } 
        } 
    } 
}
