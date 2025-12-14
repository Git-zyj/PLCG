/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79921
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
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1575173608574597742ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_11)) : (544860411))) : (((((/* implicit */int) arr_4 [i_0 - 1])) * (((/* implicit */int) arr_4 [i_1])))))))));
                arr_5 [i_1] [(short)2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1575173608574597742ULL)) ? (((/* implicit */int) (_Bool)0)) : (544860403)));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (arr_7 [i_1])));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_7 [i_0 - 3]))))));
                                var_15 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((arr_3 [i_2] [i_2 + 1] [i_2]) >= (arr_3 [i_1] [i_2 + 1] [i_2 + 1])))) : (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) arr_2 [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) var_12)))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) (((-(1575173608574597750ULL))) % (((((/* implicit */_Bool) (signed char)-31)) ? (min((16871570465134953876ULL), (9150664753198595168ULL))) : (((/* implicit */unsigned long long int) ((arr_1 [i_5] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2 + 1]))))))));
                                arr_17 [i_2] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */_Bool) (-((-(18446744073709551601ULL)))));
                            }
                            var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0 - 3])), (1575173608574597750ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (var_9)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -544860411)) ? (1575173608574597739ULL) : (16871570465134953864ULL)));
    var_20 = ((/* implicit */long long int) var_6);
    var_21 ^= ((/* implicit */int) ((long long int) var_8));
    var_22 -= ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_4)));
}
