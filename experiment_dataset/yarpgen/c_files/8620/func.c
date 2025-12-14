/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8620
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
    var_17 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (var_12))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0)))))));
            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_15)) * (((/* implicit */int) ((((/* implicit */int) (short)0)) == (((/* implicit */int) (signed char)74)))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */_Bool) ((((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_16))))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) / (((/* implicit */int) var_15)))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)4)), (-199363987)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (signed char)-75)) : ((-2147483647 - 1)))) : ((-(arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) var_3)) : (arr_6 [(unsigned char)4] [i_2])));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0] [i_3]) - (((/* implicit */int) ((arr_1 [i_0] [i_3]) == (((/* implicit */int) var_13)))))));
            arr_13 [i_0] [i_3] = ((/* implicit */short) var_3);
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_0] [i_0]))));
            var_22 = ((/* implicit */unsigned char) ((unsigned short) ((int) var_5)));
            var_23 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_4]);
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [i_5] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */int) (short)-5)) - (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5]))))));
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_8])) && (((/* implicit */_Bool) arr_4 [(short)2] [i_8])))) || ((!(((/* implicit */_Bool) (unsigned char)28))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_33 [i_9 - 1] [i_9] [(unsigned char)5] [i_9 - 1] [i_9 + 1] [i_9])) && (((/* implicit */_Bool) arr_33 [i_9 - 1] [i_9 - 2] [i_9 + 2] [i_9 - 1] [i_9 + 1] [i_9]))))));
                            arr_34 [i_5] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_17 [i_9 + 2] [i_9 + 1] [i_9 + 1])), (arr_0 [i_9 - 2]))) >= ((-(((/* implicit */int) arr_17 [i_9 - 2] [i_9 - 2] [i_9 + 2]))))));
                            arr_35 [2ULL] [2ULL] [2ULL] [i_8] [i_8] [i_6] |= arr_4 [i_6] [i_5];
                            arr_36 [i_0] [i_0] [9ULL] [i_8] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) 491058929U)) ? (((/* implicit */unsigned long long int) (-(7872786993272844271LL)))) : (((((/* implicit */_Bool) max(((signed char)120), ((signed char)107)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (max((4ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))));
                        }
                    }
                    for (signed char i_10 = 3; i_10 < 8; i_10 += 2) 
                    {
                        var_28 = ((unsigned char) (unsigned short)0);
                        arr_39 [i_0] [i_5] [i_5] [i_0] [i_10] = ((/* implicit */unsigned short) max((((arr_37 [i_0] [i_5] [i_0] [i_10] [i_0] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1129)) && (((/* implicit */_Bool) var_4)))))))), (((/* implicit */long long int) min(((short)32767), (((/* implicit */short) (_Bool)0)))))));
                        var_29 = ((/* implicit */unsigned short) arr_29 [i_0] [i_5] [i_0] [i_10 + 2]);
                    }
                    var_30 -= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0])))))));
                    arr_40 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_21 [i_0] [i_5] [i_6] [i_6]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_5))));
        arr_43 [i_11] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_11] [i_11]))));
    }
    var_32 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (short)-5))))), (var_6))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) var_14))))))));
}
