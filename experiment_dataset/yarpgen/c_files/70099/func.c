/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70099
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */signed char) arr_2 [i_0] [i_2]);
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] [(unsigned short)0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_2))))))));
                            arr_15 [i_4] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */signed char) (~((~(var_0)))));
                            arr_16 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((long long int) 2320602012U))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */signed char) (((~(arr_5 [i_1] [i_1] [i_1 + 1] [i_1 + 1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5])) ^ (((/* implicit */int) var_11)))))))));
                            arr_22 [i_5] [i_3] [21LL] [i_1] [i_0] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)51))));
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0]))));
                            var_17 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_4)))), (((/* implicit */int) arr_13 [17U] [i_1 + 1])))))));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_18 = arr_3 [i_1];
                            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [14LL])) >> (((((/* implicit */int) arr_0 [i_0])) - (55918)))))) ? (arr_2 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_2] [18] [i_0])))))))) & (((/* implicit */unsigned long long int) 2147483647U))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((var_6) < (((/* implicit */long long int) (~((+(2147483621U)))))))))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) (~((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_7] [i_0] [i_3] [i_2] [i_1] [i_0])), (var_3))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))))) ? ((~(((((/* implicit */_Bool) 4204788552U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (2320602034U))))) : ((+(arr_10 [i_0] [i_1] [i_2] [i_3] [i_0])))));
                        }
                        arr_27 [i_0] [i_1] [i_1] [i_1] [4] [20U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_2])))) >> ((((-(arr_17 [i_3] [i_0] [i_0] [i_3] [i_0] [i_2] [i_2]))) - (2439096072U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [(_Bool)1] [i_1]))) / (var_12)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_3])) ? (arr_26 [i_3] [i_3] [i_2] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)10]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) || ((_Bool)1))))))) : (((/* implicit */long long int) var_9))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        arr_32 [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned long long int) ((672848316) >> (((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1])) - (128)))));
                        arr_33 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_8] [i_2] [i_2]);
                    }
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_23 += ((/* implicit */long long int) arr_18 [i_1] [i_1 + 1] [i_2] [i_9] [i_2] [i_2] [i_2]);
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) 2147483646U))))))));
                        var_25 = (i_9 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_1 [i_0])), (var_15))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_1 + 1] [(unsigned char)4] [i_2] [i_9]))) + (var_2))) + (7057139867044233625LL)))))) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_9])) : (max((var_6), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_1 [i_0])), (var_15))) >> (((((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_1 + 1] [(unsigned char)4] [i_2] [i_9]))) + (var_2))) + (7057139867044233625LL))) - (105LL)))))) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_9])) : (max((var_6), (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_26 *= ((/* implicit */_Bool) (unsigned short)65535);
                            arr_43 [i_0] [i_10] [i_2] [13] [i_10] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned int) arr_29 [i_0] [i_10] [i_0] [i_10] [i_0] [i_10])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [20U]))) : (arr_10 [i_11] [i_1] [i_0] [i_11] [i_1])))) ? (arr_3 [i_11]) : (((/* implicit */unsigned int) ((var_0) / (var_0))))))));
                            var_27 = ((/* implicit */long long int) min((((_Bool) 729011592U)), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65533)), (2147483662U))))))));
                            arr_44 [i_0] [i_1] [i_2] [i_10] [i_11] [i_2] [i_10] = ((/* implicit */long long int) (-(var_8)));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 21; i_12 += 2) 
                        {
                            arr_48 [i_0] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_46 [i_0] [i_1] [i_2])) + (((/* implicit */int) var_4))));
                            arr_49 [i_0] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        }
                        for (unsigned int i_13 = 3; i_13 < 20; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_0 [i_13])))) : (((/* implicit */int) ((short) ((int) (unsigned short)65535))))));
                            arr_53 [i_10] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_45 [i_10] [i_1] [i_2] [i_10] [i_13]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) < (var_15)))))));
                            var_30 &= ((/* implicit */unsigned char) var_3);
                        }
                        for (short i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            arr_57 [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(var_1)));
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_1] [i_1] [i_1] [i_1 + 1])) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) arr_10 [i_1 + 1] [i_2] [i_2] [i_2] [i_2]))))) && (var_13));
                            arr_58 [i_10] [i_10] [i_2] = ((/* implicit */short) (((((~(((/* implicit */int) arr_46 [i_1 + 1] [i_1 + 1] [i_1])))) + (2147483647))) >> (((/* implicit */int) arr_12 [i_0]))));
                        }
                        arr_59 [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_10] [i_0]))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((434201906U), (((/* implicit */unsigned int) var_0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (unsigned short)48523)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        var_33 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_20 [i_0] [(unsigned char)6] [i_1] [i_2] [(short)18])) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_56 [i_0] [i_0] [i_10])))))))));
                        var_34 = ((/* implicit */unsigned int) ((((((arr_25 [i_0] [i_0] [i_2] [i_0] [i_10]) + (((/* implicit */unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) min((arr_19 [(short)9] [9U]), (((/* implicit */int) var_13))))))) ? (min((((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_1 + 1])), (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4294963200U))))))))));
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) var_8);
        arr_60 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((3565955704U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14125)))))));
    }
    var_36 = var_15;
}
