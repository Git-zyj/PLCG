/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7883
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
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_3 [i_0] [(unsigned short)4]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        arr_12 [(unsigned short)15] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_0);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_2] &= ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_3 - 2] [i_3 + 1] [i_2] [i_3 + 1] [i_2] [i_2])) : (var_13));
                            arr_16 [(_Bool)1] [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */long long int) var_7);
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2])) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_10)))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [12] [i_1] [i_3] [i_4])) << (((((/* implicit */int) var_11)) - (101))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(_Bool)1] [i_1] [i_2] [i_2] [i_4] [i_2]))))))))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((arr_1 [i_0 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10858))) : (11311132327914901527ULL))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_6 [i_5]);
                            var_20 += ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) (+(var_10))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (max((var_7), (((/* implicit */unsigned int) var_1))))))));
                            var_21 -= ((/* implicit */unsigned char) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)37))))))));
                            arr_19 [i_0] [(_Bool)1] [i_2] [i_3] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_11)) & (arr_4 [i_0] [i_0 + 2]))), (((((/* implicit */_Bool) arr_8 [i_0 - 4] [i_3 - 3])) ? (arr_4 [i_0] [i_0 + 3]) : (arr_4 [i_0 + 2] [i_0 - 4])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)-31))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_18 [i_0] [i_0] [8] [i_3 + 1] [i_6]))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (~(arr_18 [i_3 - 2] [i_3 - 1] [i_0 - 1] [i_0] [i_0]))))));
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [i_3] [i_6])) ? (arr_18 [i_0 - 1] [i_1] [1U] [i_1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0 + 2] [i_3 - 2])) ^ (((/* implicit */int) arr_0 [i_0 - 3] [i_3 - 2])))) * (var_3)));
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))), (2145386496)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((-8920000207553644624LL), (((/* implicit */long long int) var_4)))) >> (((8920000207553644621LL) >> (((var_5) - (521100003U)))))))) ? ((~((~(((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_17 [i_0 - 2] [i_0 - 2]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_22 [i_3 + 1] [i_1] [i_2] [i_0 + 1] [i_7 + 3]);
                        }
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(8920000207553644615LL))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 3; i_9 < 16; i_9 += 4) 
                        {
                            arr_33 [i_0] [i_8] [i_9] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)18)), ((unsigned char)205))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_8] [i_0] [i_1] [i_0])) ? ((-(arr_32 [i_0] [i_0] [i_2] [i_8] [i_9]))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_28 [i_0] [i_1] [i_2] [(unsigned char)9] [i_8] [i_9])), ((unsigned short)255)))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~((((~(((/* implicit */int) var_4)))) | (((/* implicit */int) arr_1 [(unsigned char)7])))))))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned char) (+(var_8)))))));
                        }
                        var_30 = max(((!(((/* implicit */_Bool) min((-8920000207553644622LL), (((/* implicit */long long int) arr_27 [i_0] [i_8]))))))), ((!(((/* implicit */_Bool) arr_17 [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_36 [i_0] [i_0 - 4] [i_0 - 4] [i_2] [i_8] [i_11])))) ? (arr_34 [i_0] [i_1] [i_8] [6]) : (((/* implicit */unsigned int) max((arr_36 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_11]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0 + 3])))))))))))));
                            arr_38 [i_8] [i_8] [9LL] [i_8] [i_8] = ((/* implicit */long long int) (~(1189730623U)));
                            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)65530);
                            arr_40 [i_11] [i_8] [i_1] [i_1] [i_0 - 3] = ((/* implicit */unsigned long long int) (~((~((((_Bool)1) ? (((/* implicit */int) arr_21 [i_0])) : (-1754442160)))))));
                        }
                        var_32 = ((/* implicit */long long int) min((max((var_7), (((/* implicit */unsigned int) arr_32 [i_0] [i_0 - 2] [i_0 + 3] [i_0] [i_0 - 3])))), (((/* implicit */unsigned int) max((arr_3 [8LL] [i_0 + 1]), (arr_3 [i_0] [i_0 - 1]))))));
                    }
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (+(((/* implicit */int) min((arr_0 [i_0 - 4] [i_1]), (arr_28 [i_0 - 4] [i_0] [i_1] [i_2] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}
