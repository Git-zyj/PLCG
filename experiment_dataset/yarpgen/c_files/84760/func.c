/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84760
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 11219707750204852556ULL);
        arr_4 [i_0] [i_0] = (+(((/* implicit */int) var_15)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) (~((-(11219707750204852558ULL)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) 11219707750204852558ULL);
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0])) != (((/* implicit */int) ((signed char) var_9)))));
            }
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((3966442467U), (((/* implicit */unsigned int) (unsigned short)9346))))) > (((var_1) + (arr_1 [i_3])))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) var_3);
                    var_22 = ((/* implicit */int) (-(var_2)));
                    var_23 = ((/* implicit */long long int) var_4);
                    var_24 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)83)) : (var_7))) | (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (var_4) : (((/* implicit */int) arr_12 [4U] [4U])))))), (((/* implicit */int) (signed char)31))));
                }
            } 
        } 
        arr_18 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 2218463862U))) / (((((((/* implicit */int) var_14)) + (2147483647))) << (((var_8) - (3798571986379588172LL)))))))) ? ((-(var_12))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_3)) / (2145386496))))))));
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) arr_5 [14ULL] [i_6] [i_6]))), (max((((/* implicit */unsigned char) (signed char)70)), ((unsigned char)91)))))) ? (max((((((/* implicit */int) (unsigned char)154)) << (((arr_0 [i_6]) + (4123174060369986095LL))))), (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6))));
        var_25 &= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_9 [i_6] [(signed char)6] [i_6])) ? (arr_9 [i_6] [22LL] [i_6]) : (((/* implicit */int) var_15)))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -136273477)) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_19 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))))) : (((/* implicit */long long int) (~(arr_9 [i_7] [i_6] [i_6]))))));
            var_27 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [(short)12] [i_7])) ? (((/* implicit */long long int) arr_9 [i_7] [10ULL] [10LL])) : (12288LL)))) || (((((/* implicit */_Bool) arr_9 [i_6] [(unsigned char)6] [i_6])) || (((/* implicit */_Bool) arr_9 [i_6] [(unsigned short)16] [i_6])))));
        }
        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) (unsigned char)83)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (13733289563531971376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)8184)), (var_3))))))))))));
            /* LoopSeq 1 */
            for (signed char i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                arr_30 [i_6] [i_8 + 3] [(signed char)0] = var_12;
                var_29 = ((/* implicit */signed char) ((unsigned short) var_16));
                var_30 *= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))) * (((((/* implicit */_Bool) var_13)) ? (18122912442264444687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_8 - 1] [i_6] [(short)23]))))), (((int) (~(((/* implicit */int) var_6)))))));
                            var_32 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_29 [i_8 - 1] [i_8 - 1] [i_6]))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (11219707750204852568ULL) : (((/* implicit */unsigned long long int) 1845723487))));
                        }
                    } 
                } 
            }
        }
    }
    var_34 = ((((var_10) * (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-113)), ((unsigned char)0)))))) * (((((((/* implicit */int) var_6)) <= (var_7))) ? (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)91)) >= (var_10)))))));
}
