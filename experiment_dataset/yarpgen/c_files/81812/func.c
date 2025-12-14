/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81812
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2]))));
                    var_15 = ((/* implicit */short) var_1);
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])), (min((789207738U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_2])))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2 - 1]))))))))));
                }
                for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [0LL])) ? (arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) arr_1 [12U])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)25)) && (((/* implicit */_Bool) (short)18895))))))))));
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_6 [i_3] [i_1] [(unsigned char)22] [i_1]))) | (((/* implicit */int) ((((/* implicit */int) (short)2325)) >= (((/* implicit */int) var_12)))))))) ? ((~(var_10))) : (((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [(short)9])) + (arr_4 [i_0] [i_0] [i_3 - 1]))));
                }
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((286541762U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79)))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) + (((/* implicit */int) (unsigned char)217))));
                }
                for (signed char i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) ((_Bool) var_6));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)42))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) (+(var_4)))) ? (arr_6 [i_5 - 1] [i_5 + 2] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (arr_16 [i_0] [i_5 + 1] [i_0] [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) (short)-17533)), (2303591209400008704LL))))))));
                        var_24 = ((/* implicit */unsigned char) (+(((unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned short)12] [11LL] [i_5] [(_Bool)1])) < (((/* implicit */int) (signed char)-90)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((arr_11 [i_5 - 1] [i_5] [i_1 + 1] [(unsigned char)16]) > (arr_11 [i_5 - 1] [i_5 - 1] [i_1 + 1] [12]))))));
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) <= (((long long int) (unsigned char)13))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)51))))) < ((-(var_3)))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 22; i_8 += 4) 
                    {
                        var_28 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_8 - 1] [i_8] [i_5 + 1] [i_8] [i_0]))));
                        var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_5))) && (((/* implicit */_Bool) var_12))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-7748)) && (((/* implicit */_Bool) 0U)))))));
                        var_31 = ((/* implicit */_Bool) ((signed char) 0));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) ? (arr_4 [i_5 - 1] [i_0] [i_8 + 2]) : ((-(((/* implicit */int) var_8))))));
                    }
                    for (short i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_9] [i_1 + 1] [i_0])) << (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (15658)))))));
                        var_34 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_19 [i_1] [i_1 + 1] [i_1 + 1] [(unsigned char)19])))), (((/* implicit */int) ((unsigned short) arr_14 [i_9 - 1])))));
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) max((3), (((/* implicit */int) (unsigned char)230))))) ^ (3315870382U)));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (arr_10 [i_0] [i_0] [i_0] [i_0])));
                        var_37 &= ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967287U)) == (12127446122806301176ULL)))), (max((((/* implicit */int) var_1)), (1130204589)))))));
                    }
                    var_38 = ((/* implicit */long long int) arr_14 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */long long int) ((signed char) ((1596748029U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1 + 1] [i_0] [i_5 + 2]))))));
                                var_40 ^= ((/* implicit */long long int) (unsigned char)215);
                                var_41 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [14U] [i_0] [i_11]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                }
                var_42 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1 + 1] [i_0]))))));
            }
        } 
    } 
    var_43 = ((/* implicit */_Bool) var_2);
}
