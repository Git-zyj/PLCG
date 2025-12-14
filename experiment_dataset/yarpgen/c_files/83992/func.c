/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83992
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned int) var_4))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_15 -= ((/* implicit */unsigned char) max((min((var_11), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_10))));
                        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_9))))));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */int) (!((_Bool)1)));
                        var_18 *= ((/* implicit */unsigned short) (((-(var_4))) | (((/* implicit */int) ((7222654224305692361LL) != (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
                        arr_12 [(unsigned short)6] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) var_8)), (var_5)))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_5] = var_8;
                            arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((var_1), (var_1))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_6))))))))));
                            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) var_0);
                            var_20 = ((/* implicit */unsigned short) var_4);
                            var_21 = ((/* implicit */long long int) max((var_21), (var_0)));
                            arr_22 [i_0] [i_0] [i_2] [5] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [(unsigned short)12] [11LL] [i_0] = ((/* implicit */unsigned short) ((((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ^ (var_1)));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_12);
                        }
                        var_22 = ((/* implicit */unsigned short) var_4);
                    }
                    var_23 &= ((/* implicit */short) min((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) 650449569)), ((+((-9223372036854775807LL - 1LL))))))));
                    arr_27 [i_1] |= ((/* implicit */unsigned char) max(((~(var_11))), (max(((+(var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))))));
                    var_24 ^= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_12)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_0))));
}
