/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67639
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? ((+(var_2))) : (max((-20LL), (7835264766917951070LL))))))));
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((76659202942822662LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-1694)))))))) ? ((((((-(76659202942822671LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) - (30543))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_3 + 3]), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)16384))))))) : (min((((2205842889U) << (((76659202942822662LL) - (76659202942822637LL))))), (((/* implicit */unsigned int) var_7))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                            {
                                var_20 = ((/* implicit */short) min((var_20), (arr_10 [i_1] [(short)2])));
                                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)26325)) >= (49152))))))), (((unsigned long long int) ((unsigned long long int) (unsigned char)3)))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((short) var_11))))) || ((!((!(((/* implicit */_Bool) (unsigned char)48))))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (unsigned char)4))));
            }
        } 
    } 
    var_24 = max((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)208)), (var_11))))) & (((-7835264766917951076LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned short)33804))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (unsigned char)21)))))))));
}
