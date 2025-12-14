/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67385
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_12)))) && ((!(((/* implicit */_Bool) var_2))))));
                        arr_11 [i_0] [i_0] [i_0] [6LL] |= (-(var_8));
                    }
                    for (unsigned short i_4 = 1; i_4 < 7; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned int) ((var_8) != (((/* implicit */int) var_1))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 992015331)) ? (-3334359855219750768LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20544))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) % (8795711840812685518LL)));
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_3)))))))));
                            var_22 = ((/* implicit */short) (-(var_6)));
                            var_23 = ((/* implicit */_Bool) var_10);
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_22 [i_2] [i_0] = ((/* implicit */short) ((long long int) var_9));
                            var_24 ^= ((/* implicit */int) var_4);
                        }
                        arr_23 [i_0] [i_0] [i_2 - 2] [i_2 - 2] = ((/* implicit */_Bool) var_3);
                        arr_24 [7U] [7U] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */int) var_7))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (((long long int) var_0))));
                        var_26 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)734))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_27 *= ((/* implicit */short) (((~(var_6))) - (((/* implicit */int) var_14))));
                        /* LoopSeq 4 */
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_28 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_14)))));
                            var_29 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_3))))));
                            var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)2400))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_3))));
                            arr_37 [i_0] [i_1] [i_2] [i_9 + 1] [i_1] = (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_13))))));
                            arr_38 [i_0] [i_0] [i_2] [i_0] [i_9] [i_0] [3] = var_4;
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_41 [i_0] [i_0] [i_1] [i_2] [i_9] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) var_3))));
                            var_31 *= ((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_11))));
                            var_32 += ((/* implicit */short) (+((~(((/* implicit */int) var_5))))));
                            var_33 = ((/* implicit */_Bool) max((var_33), ((!(((/* implicit */_Bool) var_12))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (~(992015331))))));
                            arr_44 [(unsigned short)6] [i_9] [(unsigned short)6] &= ((short) (!(((/* implicit */_Bool) (unsigned short)31761))));
                            var_35 = (~(((/* implicit */int) var_9)));
                        }
                    }
                    arr_45 [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */short) var_6);
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) ((int) (-(var_16))));
                        arr_48 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = var_11;
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)2381)))))));
                        /* LoopSeq 1 */
                        for (short i_15 = 1; i_15 < 6; i_15 += 1) 
                        {
                            arr_51 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                            var_38 += ((/* implicit */signed char) var_4);
                        }
                    }
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned short) ((int) var_10));
                        arr_54 [i_0] = ((/* implicit */int) var_11);
                        arr_55 [i_1] [(short)2] [i_16] [i_2 - 2] [i_16] |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)18151))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : ((+(9198324643622159021LL))))))));
                    }
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_5)) | (((/* implicit */int) var_1)))))))));
                        var_42 = ((/* implicit */unsigned int) var_11);
                    }
                }
                var_43 *= ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((short) 3464584032408812662ULL)))));
}
