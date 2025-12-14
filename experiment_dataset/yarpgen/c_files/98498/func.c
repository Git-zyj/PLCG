/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98498
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
    var_18 = ((/* implicit */unsigned long long int) var_4);
    var_19 ^= ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) ((int) (_Bool)0)))));
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)15] [i_0] = ((unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_16)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_21 = ((/* implicit */_Bool) var_7);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))), (min((((/* implicit */unsigned int) (short)2804)), (4294967295U)))));
                        arr_11 [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] = ((((/* implicit */_Bool) (short)2812)) ? (min((((/* implicit */unsigned long long int) 3969815578U)), (8070450532247928832ULL))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)(-127 - 1))))) + (((/* implicit */int) (unsigned short)0))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(arr_8 [i_0] [(short)8] [i_0] [(_Bool)1]))))));
                        var_24 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_15)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_5] [i_5 - 2] [(_Bool)1] [i_1] |= ((/* implicit */unsigned long long int) arr_16 [i_1] [i_4]);
                    var_25 += ((unsigned long long int) (-(((/* implicit */int) var_6))));
                }
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = min((max((((/* implicit */unsigned long long int) ((signed char) arr_20 [i_0] [(unsigned char)3] [i_0] [i_0] [(unsigned char)3]))), (((var_11) ? (var_2) : (var_2))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_5))))))));
                    arr_24 [i_0] [i_0] [i_1] [i_1] [i_6] [i_6] |= ((/* implicit */_Bool) ((unsigned short) (-(min((17199506729686113934ULL), (((/* implicit */unsigned long long int) var_9)))))));
                }
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                {
                    var_26 *= ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_21 [i_1] [i_1] [(short)16] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_1] [i_1]))))))) ^ (min(((~(0U))), (((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned short) (short)-2805)))))))));
                    arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)76)), (var_3)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)202)), (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-398969934) : (((/* implicit */int) arr_16 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) && (((/* implicit */_Bool) arr_25 [i_4 - 1] [i_4 - 1] [i_7]))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_17))))) < (((((/* implicit */_Bool) var_9)) ? (5826589745900133517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((-16777216) & (((/* implicit */int) (short)24651))))) <= (min((var_12), (((/* implicit */unsigned long long int) var_11)))))))));
                }
                var_28 += ((/* implicit */short) 1289339324796103138ULL);
            }
            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -16777216)) <= (((((/* implicit */_Bool) 16777213)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_15))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33300)) + (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)0)))))) : (((/* implicit */long long int) max((-1), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_8] [i_9])))))))))))));
                    var_31 *= ((/* implicit */unsigned long long int) ((min((3452312705428533370LL), (((/* implicit */long long int) arr_12 [i_0] [i_1])))) >= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)55594)))))));
                }
                for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    arr_35 [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17157404748913448466ULL)) ? (max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0])) < (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned short)15] [i_0] [i_8 - 1])) >= ((-(((/* implicit */int) (short)-12852))))))))));
                    arr_36 [i_10] [i_1] [i_8] [(unsigned short)5] [i_0] = ((/* implicit */unsigned char) 8904098011160849364ULL);
                }
                for (signed char i_11 = 4; i_11 < 17; i_11 += 3) 
                {
                    arr_40 [i_0] [i_1] [i_1] [i_11 - 1] = (signed char)-83;
                    arr_41 [i_0] = ((/* implicit */int) var_6);
                }
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((var_13) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))))))));
            }
            arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) 4369028911102969211LL);
            arr_43 [i_0] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_1])) ? (((/* implicit */int) var_13)) : ((-2147483647 - 1))))) ? (((/* implicit */int) ((_Bool) -103979177))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2476487377U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_48 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((short) max((((/* implicit */short) (signed char)-105)), ((short)-21460))));
            var_33 = ((/* implicit */signed char) min((((/* implicit */long long int) 1257695834)), (max((((/* implicit */long long int) (signed char)84)), (max((((/* implicit */long long int) (signed char)-1)), (6029279834137495233LL)))))));
        }
    }
}
