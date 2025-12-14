/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56212
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) <= ((-(arr_2 [i_0 + 1])))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_0 [i_0 + 1]))));
                        var_18 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) 2906823837U)) ? (1037915267406387615LL) : (((/* implicit */long long int) 4294967294U)))))), (((((/* implicit */_Bool) 4611686018427387903LL)) ? ((~(-4611686018427387919LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                        arr_10 [i_0] [i_1] [i_1] [i_1] [0U] |= max((min((((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2 - 1] [i_3])), (max((4611686018427387903LL), (((/* implicit */long long int) arr_5 [i_3] [i_0] [i_0])))))), (-4611686018427387914LL));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_3 [i_2 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_1)), (arr_5 [i_0] [i_2] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (max((var_4), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2 + 1] [i_3] [i_0 + 1])))) : (((/* implicit */long long int) min((329180187U), (arr_1 [i_1] [i_1]))))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) ((int) 4611686018427387903LL))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3])) ? (6703061918190290944LL) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_0])) ? (arr_5 [i_0] [i_1] [(unsigned char)18]) : (((/* implicit */int) arr_4 [i_3] [i_1] [i_1] [i_0])))))))))))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_5 = 4; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 4611686018427387885LL))));
                            arr_17 [i_2] [i_4] [i_2 - 1] [i_1] [i_2] = ((/* implicit */long long int) arr_15 [i_5] [i_2] [i_4] [i_2 + 1] [i_1] [i_2] [i_0]);
                        }
                        for (unsigned int i_6 = 4; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_2] [i_4] [i_2 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) 4611686018427387885LL);
                            var_22 += ((/* implicit */int) var_11);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0 + 1] [i_6 + 2] [i_6] [6U] [20LL])), (var_10)))) ? (min((-4611686018427387904LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4] [i_6]))) < (var_8)))))) : (4611686018427387885LL))))));
                            var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((-4611686018427387921LL) == (-4611686018427387903LL)))), (2480425566046400333LL)));
                            var_25 -= ((/* implicit */unsigned int) var_3);
                        }
                        for (unsigned int i_7 = 4; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            var_26 += ((/* implicit */signed char) (-(max((((/* implicit */long long int) min((((/* implicit */short) (signed char)65)), (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])))), (-4535286775018678527LL)))));
                            var_27 = ((/* implicit */short) arr_4 [i_0] [i_2] [i_0] [i_7]);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [10]))) == (min((((((/* implicit */long long int) arr_5 [(unsigned char)18] [i_1] [(unsigned char)18])) ^ (var_15))), (((/* implicit */long long int) (unsigned char)31)))))))));
                        }
                        for (unsigned int i_8 = 4; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) ? (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_1] [i_4]))) : (-4611686018427387914LL)))) ? (((/* implicit */long long int) 196608U)) : (((((/* implicit */_Bool) var_9)) ? (var_10) : (4611686018427387877LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((-4611686018427387908LL) != (((/* implicit */long long int) var_16))))))))));
                            var_30 += ((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) min((arr_25 [i_0 + 1] [i_1] [i_1] [i_2] [i_4] [i_8] [i_4]), (((/* implicit */short) var_0))))) ? (((int) 4294967286U)) : (((/* implicit */int) min(((unsigned char)134), ((unsigned char)141))))))));
                        }
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+((+(-4611686018427387917LL))))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        arr_30 [(_Bool)1] [i_2] [i_2 + 1] [i_9] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_1] [i_1] [i_2]))));
                        arr_31 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_1] [i_2]) : (arr_12 [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_2])));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((unsigned int) 4196886670U)))));
                    }
                    arr_32 [i_0] [i_2] [i_1] [6U] = ((/* implicit */int) ((long long int) 4611686018427387914LL));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_38 [i_0] [i_0] [i_2] [i_2] [i_11] = ((/* implicit */_Bool) ((arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2]) & (min((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (4196886670U)))));
                                arr_39 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_11] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_36 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1])))) ? (-4611686018427387905LL) : (max((arr_13 [i_0 + 1] [10LL] [i_0 + 1] [i_2]), (((/* implicit */long long int) arr_34 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [18LL] [i_0]))))));
                                arr_40 [i_0] [i_2] = ((/* implicit */unsigned char) arr_12 [i_2] [i_2 - 1] [i_2] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 0U)) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}
