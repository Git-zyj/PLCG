/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77105
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
    var_18 = ((/* implicit */_Bool) (~(var_7)));
    var_19 = ((/* implicit */long long int) max(((~(var_2))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_4)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */long long int) var_10);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_3))));
                        var_22 -= ((/* implicit */long long int) var_11);
                        var_23 = ((/* implicit */short) (~(var_1)));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1023U)) ? (((/* implicit */unsigned long long int) 1643688205U)) : (8830898208934746447ULL))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (var_3)));
                        arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) ((var_7) << (((((/* implicit */int) var_11)) - (5387)))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2)))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                            arr_19 [i_0] [i_5] [i_0] [(unsigned char)10] [i_0 - 1] [i_0 - 1] [i_0] |= ((((/* implicit */_Bool) var_10)) ? (var_2) : (var_2));
                        }
                        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 3; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_28 *= ((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)470))) : (14754208531027284134ULL));
                            arr_23 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (var_10)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                            arr_24 [i_0] [i_1] [i_1] [i_1] [i_5] [i_7 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                            var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))))));
                        }
                        for (long long int i_8 = 3; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) var_17);
                            var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_0)) - (8548)))))) ? (var_10) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))));
                            arr_28 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))));
                        }
                    }
                }
            } 
        } 
    } 
}
