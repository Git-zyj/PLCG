/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69529
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
    var_19 &= ((/* implicit */_Bool) (unsigned char)127);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */long long int) (short)-18792);
                var_21 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)130)) || (((_Bool) 3725963829172724866ULL)))))) : (((((/* implicit */_Bool) arr_2 [i_0] [15U] [15U])) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    var_22 = ((((/* implicit */_Bool) min((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1])))) && (((((/* implicit */int) (unsigned char)127)) >= (((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1] [i_2])))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned short) var_0))))) << (((((((/* implicit */int) var_7)) + (118))) - (7))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 - 1] [i_3])) >> (((/* implicit */int) arr_0 [(signed char)2] [(signed char)2])))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [24U])))))));
                        arr_11 [20U] [i_2] [i_2] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31736))) / (144115187002114048ULL))))));
                    }
                    for (short i_4 = 2; i_4 < 24; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */short) var_11);
                        arr_17 [i_2] [i_2] [19LL] [i_4 + 1] = ((/* implicit */int) min((((-2036830028) < (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-121)) : (637490348))))), (var_1)));
                        var_26 = ((/* implicit */int) (~(arr_3 [i_2] [i_2 + 1])));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_27 += ((((/* implicit */_Bool) (unsigned char)76)) && (((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) var_9);
                            arr_25 [i_6] [i_2] [(signed char)13] [i_2] [i_0] = ((/* implicit */unsigned int) (signed char)101);
                            arr_26 [17ULL] [i_1] [i_2] [i_5] [9ULL] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_2] [i_2 - 1] [i_2 + 1]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_29 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
                            arr_30 [i_0] [i_2] [i_2] [i_5] [i_7] [i_2] = ((/* implicit */_Bool) var_8);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((signed char) arr_15 [i_0])))));
                            arr_31 [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)120))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_34 [12] [12] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) var_5))) & (((1023ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))))));
                            var_29 = ((/* implicit */unsigned char) arr_28 [i_0] [(signed char)7] [(signed char)7] [i_5] [i_8] [14LL]);
                            arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) var_18)))));
                            var_30 -= ((/* implicit */signed char) -2036830028);
                        }
                        arr_36 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) (unsigned char)154)));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_5] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5])) : (18446744073709551613ULL))))));
                    }
                }
                arr_37 [i_1] = ((/* implicit */_Bool) var_17);
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 24; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_43 [i_0] [i_9] = ((/* implicit */_Bool) arr_2 [i_1] [(_Bool)1] [i_1]);
                            /* LoopSeq 1 */
                            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                            {
                                var_32 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) || (((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                                arr_46 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [(_Bool)1] [i_0] [i_9 - 1] [i_9 - 1] [i_10 + 3] [i_10 - 1]), (arr_13 [0] [i_0] [i_9 + 1] [i_9 + 1] [i_10 - 1] [i_10 + 3])))) ? (((((/* implicit */_Bool) arr_13 [24LL] [24LL] [i_9 + 1] [i_9 + 1] [i_10 + 3] [i_10 + 1])) ? (arr_13 [20] [20] [i_9 + 1] [i_9 + 1] [i_10 - 1] [i_10 + 1]) : (arr_13 [8ULL] [8ULL] [i_9 + 1] [i_10] [i_10 - 1] [i_10 + 2]))) : (((/* implicit */long long int) ((var_4) + (((/* implicit */int) (signed char)7)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */int) var_13);
    var_34 ^= ((/* implicit */_Bool) 1023ULL);
}
