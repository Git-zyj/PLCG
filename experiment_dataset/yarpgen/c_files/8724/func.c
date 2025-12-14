/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8724
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
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (1609909078)))), (var_11)));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(min((((/* implicit */unsigned int) -1710921904)), (var_6))))))));
                    var_20 -= ((/* implicit */short) min((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) % (((/* implicit */unsigned long long int) -1710921913)))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [(_Bool)1])) ? (arr_6 [i_1]) : (-1609909058)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [1LL] [i_0 + 2])) & (var_5)))) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_11 [i_0] [(short)10] [(short)10] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 2] [i_3])) ? (1609909078) : (((/* implicit */int) arr_4 [i_0 + 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(signed char)10] [i_1] [i_3 + 2] [i_2 - 2] [i_4])) ? (((((/* implicit */_Bool) arr_12 [8U] [8U] [i_2] [i_2])) ? (((/* implicit */int) (short)-30101)) : (((/* implicit */int) arr_2 [i_0])))) : (1710921903)))) : (((((/* implicit */_Bool) ((5977344458987980808ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 1609909091)) ? (var_13) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                var_22 &= ((/* implicit */unsigned int) (((!(arr_7 [i_2 + 3] [i_0 + 2]))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (1935656709) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 1710921904)) : (arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 3] [i_3]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1935656729)), (4294967292U))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_3)))))) >= (((int) arr_11 [i_2 - 1] [i_1] [i_3 + 2] [i_3 + 2] [i_3 + 2])))))));
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_2 [i_3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11114)) ? (((/* implicit */int) (short)0)) : (-1935656721)))) ? (((((/* implicit */_Bool) (short)-11115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11125))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 2] [i_3 - 2] [i_3 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = var_10;
    var_26 = ((/* implicit */_Bool) (short)-23514);
    var_27 = ((/* implicit */short) ((unsigned char) ((((_Bool) var_6)) && (((/* implicit */_Bool) ((unsigned short) (short)22))))));
}
