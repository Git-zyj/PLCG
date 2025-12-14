/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71020
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((var_2) ^ (((/* implicit */long long int) 938846601)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) - (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) 2353150883521507007LL);
                            arr_14 [i_0] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                            arr_15 [i_3] [i_3] [i_0] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((var_3) != (arr_13 [i_0 + 1] [i_1] [i_2] [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((-(((/* implicit */int) (short)32767))))));
                            var_18 &= ((/* implicit */int) (!((_Bool)1)));
                            var_19 *= ((/* implicit */unsigned char) ((_Bool) arr_4 [(short)5]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 2; i_5 < 8; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) -938121484)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
            var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0])) ? (arr_17 [i_5]) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_8))));
            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169)))))) <= (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) (_Bool)1))))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_1))));
                arr_22 [i_0] [i_5] [i_6] &= 5U;
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)(-127 - 1));
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        arr_30 [i_8] [i_0] [i_6] [i_5 + 3] [i_0] [i_0] = ((/* implicit */int) var_8);
                        arr_31 [i_0] [6] [i_6] [i_6] [i_6 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_29 [i_5 + 3] [i_6 - 1] [i_6])) : (((/* implicit */int) var_0))));
                    }
                    arr_32 [i_0 - 1] [i_0] [7LL] [i_5] [7] [i_7] = ((/* implicit */unsigned int) var_4);
                }
                for (short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                    var_27 = ((/* implicit */short) ((unsigned short) var_9));
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2U)))))));
                        var_29 *= ((/* implicit */unsigned char) (_Bool)0);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */int) (_Bool)1);
                        arr_41 [(_Bool)1] [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) != ((-(((/* implicit */int) (unsigned char)240))))));
                        arr_42 [i_0 + 1] [i_5] [i_6] [i_0] [i_6] = ((/* implicit */short) (unsigned char)8);
                        var_31 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) % (-1075977066115554638LL)));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_0 + 1] [i_5] [i_6 + 1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)225))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1])) ? (arr_28 [i_6 + 1] [i_0 - 1] [i_0] [i_9] [i_5 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) & (((/* implicit */int) arr_43 [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]))));
                        var_34 &= (_Bool)0;
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_5])) ^ (((/* implicit */int) (_Bool)1)))))));
                        var_36 *= ((/* implicit */_Bool) ((int) 9223372036854775807LL));
                    }
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_37 ^= ((/* implicit */unsigned short) (unsigned char)25);
                arr_50 [i_0] [i_5] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2366281366U)))) ? (((var_4) ? (1075977066115554638LL) : (var_1))) : (((/* implicit */long long int) var_5))));
            }
        }
        for (unsigned int i_15 = 1; i_15 < 8; i_15 += 3) 
        {
            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
            arr_54 [i_15 + 1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_2 [i_15]))) * ((-(-1075977066115554643LL)))));
            arr_55 [i_0] = ((/* implicit */unsigned char) ((arr_52 [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_52 [i_0]))));
        }
        var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))))) != (((((/* implicit */_Bool) var_5)) ? (-14LL) : (arr_38 [i_0] [(unsigned char)9] [i_0] [i_0 - 1] [i_0])))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_40 &= ((/* implicit */int) var_4);
        var_41 = ((/* implicit */int) arr_0 [i_16]);
    }
}
