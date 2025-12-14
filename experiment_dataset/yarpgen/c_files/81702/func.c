/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81702
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((short) ((arr_9 [i_0] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 2] [i_1]))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32764))))) ? (((long long int) arr_7 [i_0 + 2] [i_3] [i_0 + 2] [i_4])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
                                arr_14 [7U] [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [18LL] [i_3]))))) ? (((/* implicit */int) ((_Bool) var_11))) : (var_3));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [18LL] = ((/* implicit */short) ((unsigned int) arr_7 [i_0 - 1] [i_0] [(signed char)19] [i_0 + 2]));
                    var_17 &= ((/* implicit */unsigned char) arr_1 [i_1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 3; i_6 < 19; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) max((var_18), ((+(((/* implicit */int) arr_22 [i_0] [i_6 - 2] [i_0 + 3] [i_8 - 1]))))));
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_0 + 3] [i_0 + 3] [i_6] [i_0 + 3] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [14LL] [(short)17])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4282727822U)) ? (149865023) : (((/* implicit */int) arr_24 [i_0] [i_5] [i_6 + 1] [i_5] [i_0]))))) : (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_2 [i_0])))));
                                var_20 = ((/* implicit */unsigned int) 7591922419264889632LL);
                                arr_27 [i_0] [i_5] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) 149865023);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */short) (+(arr_3 [i_0])));
                            arr_32 [i_0] [i_0] [i_0] [i_9] [(signed char)14] [i_6] [i_6 + 1] = 149865016;
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (4888808248535071690LL))));
                            var_23 -= ((/* implicit */_Bool) ((-149865013) / (((((/* implicit */int) (unsigned short)28672)) / (((/* implicit */int) (signed char)101))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_24 += ((/* implicit */int) ((arr_7 [i_6 - 2] [i_9] [i_9] [i_6]) ^ (arr_7 [i_6 - 1] [i_9] [i_9] [i_5])));
                            var_25 = ((/* implicit */short) ((int) (+(((/* implicit */int) var_0)))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */int) (~((~(4888808248535071692LL)))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)118)) >= (-149865023)));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) + ((-(-681738549))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_9])) ? (arr_1 [i_9]) : (arr_1 [i_9]))))));
                        }
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_41 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0]) / (149865021)))) ? (((/* implicit */long long int) 149865016)) : (((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9])))))));
                    }
                    arr_44 [i_0] [i_0] [i_6 - 1] [i_6 - 1] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_31 [i_0] [i_0] [i_0 + 1] [i_5] [i_6])) / (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_6 - 3]))) - (4888808248535071686LL))) + (4888808248535071685LL)))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_31 [i_0] [i_0] [i_0 + 1] [i_5] [i_6])) / (((/* implicit */int) (_Bool)1)))) << (((((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_6 - 3]))) - (4888808248535071686LL))) + (4888808248535071685LL))) - (107LL))))));
                    var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)0))));
                }
            } 
        } 
        var_32 *= ((/* implicit */signed char) arr_29 [i_0 + 3] [i_0 + 4] [i_0 + 4] [i_0 + 3]);
    }
    for (short i_14 = 1; i_14 < 16; i_14 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) (~(max((arr_12 [i_14] [i_14 + 2] [(short)6] [i_14 + 2] [i_14 - 1]), (arr_12 [i_14 - 1] [i_14] [i_14] [i_14] [i_14 + 1])))));
        var_34 -= ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))) * ((-(min((1099478073344LL), (((/* implicit */long long int) var_4)))))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1099478073346LL)))))));
        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_35 [17] [i_14 + 1] [(unsigned char)19] [i_14 - 1] [i_14] [i_14]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4887))) : (1099478073370LL))) ^ (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) (short)32496))))))))));
    }
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        for (short i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            {
                var_37 = ((/* implicit */int) arr_45 [i_15] [i_15]);
                var_38 = ((/* implicit */long long int) min((var_38), ((((((~(-4888808248535071683LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32763))))))) ^ (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)53915)))))))))));
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            {
                                arr_58 [i_19] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_15] [i_17] [(unsigned short)10] [i_18]))) / (((arr_9 [i_15] [i_15]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52904)))))));
                                var_39 += ((/* implicit */int) (_Bool)1);
                                arr_59 [i_15] [i_15] [i_17] [i_15] [i_17] = min((((/* implicit */int) ((arr_46 [i_16] [i_17]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_19] [i_18])))))), (((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) arr_54 [i_15] [i_16] [i_15] [i_18])) : (((/* implicit */int) arr_54 [i_15] [i_15] [i_15] [i_19])))));
                                arr_60 [i_15] [4U] [16LL] [i_18] [i_15] = ((/* implicit */int) ((((max((2142629422U), (((/* implicit */unsigned int) (unsigned char)238)))) != (((unsigned int) var_0)))) ? ((~(min((((/* implicit */long long int) (short)-4887)), (arr_12 [i_16] [i_16] [i_19] [i_16] [i_19]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967267U)) && (((/* implicit */_Bool) arr_9 [i_15] [i_15])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)9))))) : (arr_7 [i_19] [i_15] [i_15] [i_16]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_20 = 3; i_20 < 17; i_20 += 1) 
                {
                    for (short i_21 = 3; i_21 < 15; i_21 += 4) 
                    {
                        for (long long int i_22 = 1; i_22 < 16; i_22 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_54 [i_15] [i_20 - 3] [i_15] [i_15]), (arr_54 [i_15] [i_20 + 1] [i_15] [i_21]))))));
                                arr_68 [i_15] [i_15] [i_20] [i_15] [i_15] = var_14;
                                arr_69 [i_15] [i_20] [i_20] [i_16] [i_16] [i_15] = ((/* implicit */long long int) (unsigned short)11618);
                            }
                        } 
                    } 
                } 
                arr_70 [i_15] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)8)), (arr_6 [i_15] [i_16])))) % (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_23 = 0; i_23 < 17; i_23 += 4) 
    {
        for (signed char i_24 = 1; i_24 < 15; i_24 += 1) 
        {
            {
                arr_76 [i_23] = arr_61 [2LL] [i_23] [i_23];
                var_42 = ((/* implicit */short) min((min((((/* implicit */long long int) ((signed char) (signed char)41))), (((9223372036854775807LL) << (((((/* implicit */int) (_Bool)1)) - (1))))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)9)))))));
            }
        } 
    } 
}
