/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68669
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_2] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (short)28404);
                    var_14 ^= ((/* implicit */short) ((arr_3 [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? ((-(var_8))) : (((/* implicit */int) arr_12 [i_0] [i_4] [i_3] [i_4] [i_4 + 1] [i_1 - 1]))));
                                arr_13 [i_4] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_9 [i_0] [(_Bool)1] [i_2] [i_3])));
                                arr_14 [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32663)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) (-(107491282443665245LL))))));
                                var_16 = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
                                arr_15 [i_4] = ((_Bool) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_13);
                                var_18 += ((/* implicit */int) (unsigned char)16);
                                var_19 &= ((/* implicit */unsigned long long int) ((((_Bool) 32764ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6))));
                                arr_21 [i_0] [i_5] [i_2] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_5))) * (var_7)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)192))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_7])) ? (var_8) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_7])))) : (arr_18 [i_1] [i_1 + 2] [i_1 + 1] [i_1])));
                    var_21 -= ((((/* implicit */int) ((((long long int) arr_3 [i_7] [i_7])) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) > (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_7])) ? (var_13) : (((/* implicit */long long int) arr_6 [i_0])))))));
                    var_22 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) (_Bool)1)) % ((+(((/* implicit */int) var_6))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                {
                    arr_27 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((141487184) > (((/* implicit */int) (unsigned short)65526))))) > (141487184)));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (((+(((/* implicit */int) var_12)))) > (((var_9) * (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) min(((unsigned char)238), ((unsigned char)155)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_1)))) : (min((1489909753), (((/* implicit */int) (_Bool)1))))))));
                    arr_28 [i_0] [i_1] [i_8] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)31))))))) ? (((/* implicit */int) (unsigned short)23)) : (((((/* implicit */_Bool) (short)16655)) ? (((((/* implicit */int) arr_23 [i_1])) ^ (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_0)) >> (((var_8) + (1928997678)))))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */int) var_4);
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            arr_33 [i_10 + 1] [i_9] [i_9] [i_0] = ((/* implicit */long long int) var_6);
                            var_25 ^= ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_4))))))));
                            var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (unsigned char)69))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_18 [i_10 + 1] [i_8] [i_1] [i_0])) : (arr_9 [i_1] [i_1] [i_1] [i_1])))))), (max((((unsigned long long int) (unsigned short)65513)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned char)64)))))))));
                            arr_34 [i_9] [5ULL] [i_9] [1LL] [i_1] = ((/* implicit */long long int) (unsigned char)162);
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_30 [i_1 + 1] [i_1] [i_8] [i_9]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_30 [i_1] [i_1 + 2] [i_8] [(short)22]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (var_7)))) ? (((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned short)44501)))) : (((/* implicit */int) var_10)))))));
                            var_29 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
                            var_30 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1135736503)))))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) var_7);
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((int) max((((/* implicit */long long int) arr_16 [i_9] [i_9] [i_9] [i_8] [i_1 + 1] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_13)))))))));
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_33 = var_13;
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) - (arr_38 [i_1 + 2] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55420)))))))) : ((-(((/* implicit */int) (short)1008)))))))));
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((((int) var_13)), (((((_Bool) var_11)) ? ((~(((/* implicit */int) (unsigned char)130)))) : ((~(var_9))))))))));
                }
                arr_39 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? ((~(((/* implicit */int) ((signed char) (short)-12202))))) : (((/* implicit */int) (_Bool)0))));
                var_36 = ((/* implicit */int) min((var_36), (var_8)));
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 23; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_47 [i_14] = ((/* implicit */int) arr_37 [i_13] [i_14] [i_15]);
                                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((_Bool) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) var_12);
}
