/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78222
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [(short)17] [0ULL] [(unsigned short)20])), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [(short)11] [i_3] [i_4]))))) ? (((var_10) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_6)))) : ((+(var_7)))))));
                                var_19 -= ((/* implicit */int) arr_3 [i_0] [i_0]);
                                arr_13 [(short)17] [i_1] [(short)17] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(var_15)))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_14);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_6);
    var_22 ^= ((/* implicit */int) min((max((max((((/* implicit */unsigned int) var_14)), (var_0))), (((/* implicit */unsigned int) var_16)))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3866736188U)) && (var_14)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (var_1)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((var_10), (var_10))))))) : ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_5)) : (var_0))) : (min((((/* implicit */unsigned int) var_13)), (var_0)))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1722818695U)) ? (((/* implicit */int) var_14)) : (max((max((((/* implicit */int) var_14)), (var_8))), (var_11)))));
}
