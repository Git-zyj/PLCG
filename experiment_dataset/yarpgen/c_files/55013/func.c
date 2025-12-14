/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55013
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (_Bool)1))))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_1])))) : (((/* implicit */int) (signed char)-40)))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) -874724428)) ? ((-(-874724422))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (var_8) : (((/* implicit */int) var_12)))))) > (((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [(_Bool)1] [i_1] [i_2] [i_1] [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_8 [i_0] [i_3]))))) ? (((/* implicit */int) min((var_5), (arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [i_4])))) : ((~(((/* implicit */int) arr_8 [i_1] [i_1]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_16 [(unsigned char)14] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) (short)-14730);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned char)54))));
                                var_19 *= ((/* implicit */short) var_12);
                                arr_17 [(unsigned char)4] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)222))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9082))))) : (((/* implicit */int) arr_7 [i_2]))));
                            }
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned short) ((((1936025909U) <= (max((1936025911U), (((/* implicit */unsigned int) var_4)))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */int) arr_10 [22] [i_0] [i_0] [i_0] [i_1] [i_1]))))) ? (min((var_13), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_1])), (var_11)))) ? (min((0U), (0U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)9082)), (874724422)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    var_20 = (!((!(((/* implicit */_Bool) 10093560059314167499ULL)))));
                    arr_21 [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1536))) : (((((/* implicit */_Bool) (unsigned short)51032)) ? (6831172238888317157ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_26 [i_0] = ((/* implicit */_Bool) ((unsigned int) -874724427));
                                arr_27 [i_0] [i_6] [i_7] [i_0] = ((/* implicit */unsigned int) arr_6 [0] [i_0] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 26))));
                                var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */unsigned long long int) 874724434)) : (11623121275062523648ULL))));
                                arr_32 [(_Bool)1] [0U] [0U] [i_6] [i_9] [0U] [0U] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (1905841637U)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) min((var_23), (var_6)));
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_24 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)32046)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_12 = 2; i_12 < 22; i_12 += 2) 
                    {
                        var_25 = ((_Bool) -1543521589769798298LL);
                        arr_37 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) : (((unsigned int) var_3))));
                        var_26 = ((/* implicit */unsigned int) arr_31 [i_12 + 2] [i_12 + 2] [i_12] [i_12] [i_12 - 2] [i_12 - 1]);
                        var_27 = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_1] [i_11]) / (((/* implicit */int) var_5))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        arr_42 [(_Bool)1] [i_1] [i_11] = ((/* implicit */_Bool) var_1);
                        var_28 = ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 911414047)) ^ (4294967294U)))), (((((/* implicit */_Bool) var_8)) ? (6823622798647027968ULL) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0]))))));
                        var_29 = (-(((/* implicit */int) (unsigned short)64003)));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44359)) ? (((((/* implicit */_Bool) -16777216)) ? (1382653223U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -874724428)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)255)))))));
                    }
                    var_31 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_11] [i_1]) >> (((/* implicit */int) var_6)))))));
                    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                }
                var_33 = ((/* implicit */unsigned int) var_12);
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_47 [i_0] [i_0] [i_1] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (5865416649908569828ULL)))) ? (((/* implicit */int) (unsigned short)63999)) : ((((_Bool)1) ? (-131072) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_0] [i_15 - 1]))))))) - (min((1898457766U), (((/* implicit */unsigned int) (unsigned short)1536))))));
                            var_34 = ((/* implicit */unsigned short) arr_44 [(short)14]);
                            var_35 = ((/* implicit */int) 1167315374U);
                            var_36 = (_Bool)1;
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned int) ((((((_Bool) 1073741824U)) ? (((/* implicit */int) var_3)) : ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)109)) || (((/* implicit */_Bool) (unsigned short)54761)))))));
}
