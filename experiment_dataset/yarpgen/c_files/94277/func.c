/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94277
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
    var_20 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1 + 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_21 = ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [(unsigned char)17] [i_0] [i_0])) : (((/* implicit */int) arr_5 [(short)0] [i_1 + 2] [i_2] [i_3 - 1]))));
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) arr_10 [(short)15] [i_3] [i_3] [2ULL]))))))));
                                var_22 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1] [i_2] [i_0])) ? (var_16) : (var_16))));
                }
                var_24 ^= ((/* implicit */_Bool) ((unsigned char) (~(((var_17) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))))));
            }
        } 
    } 
    var_26 *= ((/* implicit */_Bool) var_1);
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((unsigned char) var_19))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6))))))));
}
