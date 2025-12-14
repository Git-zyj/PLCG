/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55931
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
    var_18 = ((/* implicit */short) var_13);
    var_19 ^= var_1;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [3LL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -3731504440467089542LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (2627513535907137392LL))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */long long int) arr_8 [i_3] [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 1]))));
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2] [i_3]))) : (min((((/* implicit */unsigned long long int) (unsigned char)126)), (6888206641627216006ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_14 [i_0] [1ULL] [i_0] [i_3] [i_3] = ((/* implicit */long long int) var_3);
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3] [(unsigned char)19]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != (3676897983717909532ULL))))));
                            arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_5])) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0]))) : (var_13))) : (((((/* implicit */_Bool) 7473869407298700364LL)) ? (-9105328330724834090LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) << (((((/* implicit */int) var_1)) - (159)))));
                            arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80)))));
                            arr_23 [i_0] [i_1] [i_2] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) (+(((arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            var_24 *= ((((/* implicit */_Bool) ((long long int) 7159587819836035145LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-15581)), (3676897983717909532ULL)))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3 - 1] [i_7 + 1] [i_0] [i_7])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_13)))))))) : (var_5));
                            arr_27 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)61);
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_7 [i_7 - 1] [i_7] [i_7] [i_7] [i_7]))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)-30282))) ? ((-(var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        for (short i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */short) 7159587819836035127LL);
                            var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 17408710283302924982ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) : (2211612318398249348LL))), (((7159587819836035127LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-26208)))))));
                            var_29 = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [(short)19] [(short)19]);
                            arr_30 [i_0] [i_0] [i_8 + 2] [(short)3] [i_8] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_0]);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (2149459909419407378LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)175))) ? (max((-8747121565813370993LL), (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [11U])))))));
                        }
                        var_31 ^= ((/* implicit */unsigned long long int) ((((((long long int) arr_29 [i_3] [i_1] [i_2])) + (9223372036854775807LL))) << ((((+(var_5))) - (3372042821U)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            arr_38 [i_0] [8ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (short)11053)) : (((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (-6402737179058093055LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_9] [i_10] [i_0])))))) : (8590254251739505370ULL)))));
                            var_32 += ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), ((-(4803557514063898488ULL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 7211773550010988571ULL)) || (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))))), (var_16)))) : ((((+(((/* implicit */int) var_17)))) * (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [(unsigned char)2] [i_0] [i_0] [i_0]))))));
            arr_39 [i_0] [i_0] = ((/* implicit */short) var_13);
        }
        for (short i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
        {
            arr_42 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-3943993563206255297LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))))));
            var_34 += ((/* implicit */unsigned char) (short)19690);
        }
        var_35 += arr_5 [i_0] [i_0] [i_0] [18U];
        arr_43 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_12)) ? (var_15) : (arr_20 [i_13] [(unsigned char)9] [i_13] [i_13] [0LL])))));
        arr_46 [i_13] = ((/* implicit */unsigned int) 11340380836434021117ULL);
    }
}
