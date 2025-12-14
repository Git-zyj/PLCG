/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88424
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1 + 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))) ? (min(((((_Bool)1) ? (-3651650229043086185LL) : (9223372036854775807LL))), ((~(9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)224)))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), ((unsigned short)60769)))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2334))) : (var_15)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1030568901122713298LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) - (31242)))))) ? (((/* implicit */int) (!(arr_8 [i_0] [i_1 - 1] [i_0])))) : (((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_4] [(signed char)17] = ((((((/* implicit */long long int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) != (arr_9 [i_1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))) || (((/* implicit */_Bool) (-(var_11)))));
                                var_21 = ((/* implicit */_Bool) -599142557);
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_3 - 3])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_8 [(unsigned char)17] [i_1 + 1] [i_3 - 4])) : (((/* implicit */int) ((9223372036854775792LL) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_3 + 2])))))))))));
                            }
                        } 
                    } 
                    var_23 = var_2;
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) < (((((/* implicit */_Bool) 4294967295U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 22U))))));
                        arr_21 [i_6] [i_5] [i_0] = ((/* implicit */short) ((unsigned char) arr_7 [(short)11] [8LL] [i_6 - 1] [i_0]));
                        var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned char)61)) || (((/* implicit */_Bool) 9223372036854775807LL))))));
                    }
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) ((unsigned short) -9223372036854775807LL));
                        arr_24 [i_5] [i_1] [i_5] = ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_7 + 1] [i_0])) != (((/* implicit */int) (short)32767)))))) : (((long long int) arr_12 [i_0 - 1] [i_5] [i_0] [i_5] [i_0] [i_5])));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned short)52929)) : (((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0 + 1] [i_7] [i_7 - 1]))));
                    }
                    for (short i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        arr_28 [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) -9223372036854775807LL)))) && (((/* implicit */_Bool) arr_3 [i_8 + 2] [i_8 - 2] [i_8]))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 4; i_9 < 14; i_9 += 4) 
                        {
                            arr_33 [i_8] [i_5] [i_0 + 1] = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_0 + 1] [i_8 - 3] [i_9 - 2] [i_9])) : (((/* implicit */int) arr_23 [i_0 + 1] [i_0 - 1] [i_8 - 1] [i_9 - 3] [i_9 + 4]))));
                            arr_34 [i_5] [i_1] [i_8 + 3] [i_9] [i_1] [i_5] [i_8] = ((_Bool) ((((/* implicit */_Bool) 2007371568)) ? (-8895235132769416566LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52929)))));
                        }
                        for (long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            arr_37 [i_5] [i_8 - 2] [(_Bool)1] [i_1] [i_5] = ((/* implicit */_Bool) (((+(9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                            var_27 = ((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_1 + 1] [i_8 - 3] [i_10 - 2]);
                            arr_38 [i_0] [i_1 - 2] [i_5] [i_8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (_Bool)0))));
                        }
                        var_28 = ((/* implicit */unsigned int) ((_Bool) -9223372036854775807LL));
                        var_29 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)52929)) ? (-9223372036854775807LL) : (-9223372036854775792LL))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((long long int) -5254960659340421048LL));
                    var_31 = ((/* implicit */unsigned short) (-(var_1)));
                }
            }
        } 
    } 
    var_32 = 9223372036854775792LL;
}
