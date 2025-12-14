/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68705
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)64))))))) : (((/* implicit */int) var_11)))))));
                            var_14 ^= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), ((~(6439657898823021587ULL))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2 - 1] [i_3]))));
                            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) min((-1767351048), ((+(var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 139408162)) : (13213813724138441890ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (min((((/* implicit */int) var_9)), (151179882)))))) : (((((/* implicit */_Bool) var_5)) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) 622343577U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)24083)), (var_9)))))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                            {
                                var_16 = max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_10))))) : ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9])));
                                var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 622343577U))))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                            {
                                var_18 *= ((/* implicit */signed char) ((int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 6439657898823021587ULL))))), (min(((signed char)111), ((signed char)14))))));
                                var_19 = ((/* implicit */short) var_11);
                                var_20 = ((/* implicit */int) var_0);
                                arr_14 [i_0] [i_1] [(short)4] [i_3] [i_5] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (622343577U)))) ? (((((/* implicit */_Bool) (unsigned short)16639)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-83)))) : (((/* implicit */int) (unsigned char)146)))), (((/* implicit */int) ((((/* implicit */_Bool) 1104647878)) && (((/* implicit */_Bool) (unsigned short)11865)))))));
                            }
                            for (short i_6 = 4; i_6 < 14; i_6 += 1) 
                            {
                                var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) -2147483643))));
                                arr_19 [i_0] = ((/* implicit */short) var_3);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned int) var_7);
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(522240U)))) ? (((((/* implicit */_Bool) var_5)) ? (785344164U) : (((/* implicit */unsigned int) -6230357)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2369))))))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) (signed char)90)) ? (arr_0 [i_1]) : (((/* implicit */long long int) 522240U))))))));
            }
        } 
    } 
    var_24 |= ((/* implicit */short) ((unsigned char) var_9));
    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
}
