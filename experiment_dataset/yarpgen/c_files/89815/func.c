/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89815
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
            var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_9))))));
            arr_6 [(signed char)3] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) < (var_5))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)-42))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) var_8);
    }
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_12 = min((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)102))) : (arr_3 [i_2 - 1] [i_3 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)107))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((long long int) var_1)) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)12088)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((signed char) var_1))))))));
                    var_14 -= (signed char)112;
                    arr_16 [i_2] [i_2 - 2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_3))))))) ? (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) arr_0 [i_3])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)107))))) ? (((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519)))))) : (((/* implicit */int) var_3))))));
                    var_15 = ((/* implicit */long long int) (signed char)106);
                }
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_16 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((+(var_1))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))))));
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_3]), (((/* implicit */long long int) var_4))))))))) < (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-106), ((signed char)-30)))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_11 [(unsigned short)6]))));
                }
                for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_6] [i_6] [i_3] [i_6] = ((/* implicit */signed char) ((long long int) var_4));
                        var_19 -= ((/* implicit */long long int) var_0);
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -1LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7]))))))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)16383))));
                            var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) || (((/* implicit */_Bool) (signed char)-30))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [i_7 + 1] [i_9 - 1]))));
                            arr_37 [6LL] [i_3 - 1] [i_2] [i_7 + 1] [i_9] [(unsigned short)2] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)121))) : (-8776090940822977275LL))))));
                            var_24 = ((/* implicit */unsigned short) arr_5 [i_6] [i_7]);
                            var_25 = ((/* implicit */long long int) var_8);
                        }
                        var_26 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_24 [i_2 - 2] [i_2] [i_2] [i_6]));
                    }
                    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) ((unsigned short) min((arr_31 [i_6] [i_10] [(signed char)6] [(unsigned short)6] [(signed char)7] [(signed char)9]), (((/* implicit */long long int) ((signed char) arr_9 [(signed char)6]))))));
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)64), ((signed char)-107))))) : (max((((long long int) var_2)), (((/* implicit */long long int) var_7)))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((long long int) ((signed char) arr_40 [i_2] [i_2 + 1] [i_3 - 1])))));
                        }
                        arr_42 [i_2 + 1] [(signed char)10] [i_6] [i_6] [i_2] [i_10 + 1] &= ((long long int) (!(((/* implicit */_Bool) (+(arr_41 [2LL] [2LL] [i_2] [2LL] [(signed char)8]))))));
                        arr_43 [i_6] [i_6] [i_3] [i_6] = ((/* implicit */signed char) (unsigned short)65518);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)0)), ((~(var_5)))))) ? ((+(((/* implicit */int) (signed char)-65)))) : (((/* implicit */int) (signed char)-107))));
                        arr_44 [6LL] [i_2] [6LL] [(signed char)0] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (arr_27 [0LL] [i_2] [(unsigned short)6])))));
                    }
                    arr_45 [i_2] [i_2] [i_6] |= ((/* implicit */signed char) ((unsigned short) ((arr_17 [i_2] [i_3 - 1] [i_2 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_35 [(signed char)2] [i_3] [i_3 - 1] [i_2] [i_6]))))));
                }
            }
        } 
    } 
    var_31 = min((var_9), (((signed char) (+(var_1)))));
    var_32 = var_9;
    var_33 ^= var_0;
}
