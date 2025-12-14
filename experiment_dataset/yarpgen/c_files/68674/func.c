/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68674
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((int) var_3))) : (var_8)))) ? (min((((/* implicit */int) ((_Bool) (_Bool)1))), ((~(((/* implicit */int) var_4)))))) : (((/* implicit */int) var_7))));
    var_12 = ((/* implicit */unsigned int) ((((int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-6855166226482781258LL)))) < (((/* implicit */int) var_3))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned char) var_5)), (((/* implicit */unsigned char) ((_Bool) 6855166226482781258LL)))))) ? (min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (unsigned short)42908)))))) : (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) ((short) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_14 = (+(min((min((((/* implicit */long long int) var_6)), (arr_4 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */long long int) arr_5 [i_0] [i_2] [5])))));
                            var_15 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) var_3))))) <= ((~(6775960024028269129LL))))))));
                            var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((786718357U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_3] [i_1]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3])))) : (((((/* implicit */_Bool) (unsigned short)53730)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32078))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 2691240207U))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (((((~(((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) (unsigned char)149)) - (149))))))) + (2147483647))) << (((((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) ^ (min((2691240207U), (((/* implicit */unsigned int) (_Bool)1)))))) - (1U)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) arr_9 [i_0] [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_16 [i_4] [7LL] = ((/* implicit */unsigned char) var_6);
                                var_19 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 1782185313U)))));
                                arr_17 [(_Bool)1] [i_1] [i_4] [i_0] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1603727078U)) ? (((/* implicit */unsigned int) -2132283495)) : (1782185335U)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    arr_22 [i_0] = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1] [i_9])) != (((var_9) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_4))))));
                                arr_29 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) << (((arr_1 [i_0]) - (3081935758246124037LL)))))) ? (arr_1 [(unsigned short)8]) : (arr_1 [i_0])));
                            }
                        } 
                    } 
                    arr_30 [i_1] [(unsigned short)10] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-3953)) ? (arr_4 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_7])))));
                }
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_0] [i_10] [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(signed char)12] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((1696575596U) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)46))))) : (((var_10) ? (-4515001585030638006LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_38 [(_Bool)1] [(unsigned short)3] [(_Bool)1] [(_Bool)1] [i_0] [i_11] = ((/* implicit */long long int) (-(arr_8 [i_0] [i_1] [i_10] [6U])));
                    }
                    var_21 = ((/* implicit */int) ((unsigned short) ((var_10) || (((/* implicit */_Bool) min((((/* implicit */short) arr_24 [i_10])), (var_7)))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) arr_15 [i_0] [i_1] [(_Bool)1] [i_12] [i_13]);
                                arr_45 [0U] [0U] [0U] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [4LL] [i_1] [i_10] [i_12]))));
                                arr_46 [(short)8] [i_1] [i_10] [i_10] [i_13] = ((/* implicit */signed char) ((unsigned short) arr_26 [i_1]));
                                arr_47 [(_Bool)0] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) arr_8 [i_0] [(unsigned char)10] [i_0] [i_0])) / (var_8))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20341))) : (1501635816U)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3942))) - (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (1945504171U))))))));
                }
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 3074001849U)) ? (arr_27 [(unsigned char)10] [i_14]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) == (arr_27 [i_1] [i_14])));
                    var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_14] [i_14] [i_0]))));
                    arr_51 [7U] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) (signed char)-39)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(signed char)2] [(signed char)12] [i_14] [i_1] [i_0])))))))) ? (2713723057U) : (((/* implicit */unsigned int) 579775560))));
                }
            }
        } 
    } 
    var_27 = var_4;
}
