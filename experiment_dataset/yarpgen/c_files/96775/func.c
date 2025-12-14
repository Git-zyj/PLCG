/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96775
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
    var_16 |= var_13;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (min((((/* implicit */int) var_8)), (0))))), (max((((/* implicit */int) ((((/* implicit */_Bool) (short)646)) && ((_Bool)1)))), (((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [10LL]))))))));
        var_18 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [16LL] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) max((var_2), (((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) (-(var_3)))) ? ((-(var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8627694603368342435LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8005718995751034453LL)) ? (((/* implicit */int) (unsigned char)8)) : (-1613905103))))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((_Bool) var_15));
        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4252348739U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (-7127222982098041143LL)))));
        var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_0 [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [0ULL])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) 1613905103)), (2084528595U)))))), (max((((/* implicit */long long int) (+(var_3)))), (max((((/* implicit */long long int) var_6)), (-8627694603368342435LL)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (~(arr_8 [i_1 + 1] [i_1 + 1] [0LL] [i_1])))) ? (min((var_5), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) min((arr_9 [i_1 + 1] [i_2] [i_2] [i_2]), (var_13))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_22 = ((_Bool) ((((/* implicit */int) ((signed char) 2084528595U))) + (((((/* implicit */int) (unsigned short)8111)) & (((/* implicit */int) var_0))))));
                        var_23 *= ((/* implicit */_Bool) ((int) ((((var_4) > (arr_0 [i_2] [i_2]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18663)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))))));
                        arr_14 [i_1 + 1] [i_2] [i_3] [i_2] [i_2] &= (_Bool)1;
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    arr_20 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        arr_23 [8LL] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) -1LL)) : (var_5)))))));
                        arr_24 [i_1] [i_5] [i_5] [i_1] [6ULL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 + 1] [i_1 - 1] [i_1 + 1])) ? (arr_10 [i_1 + 1] [i_1 + 1]) : (arr_10 [i_1 - 1] [i_1]))), ((~(13059828997800928067ULL)))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            arr_29 [i_5] = ((/* implicit */short) ((long long int) ((unsigned char) max(((unsigned short)57425), (((/* implicit */unsigned short) (_Bool)1))))));
                            arr_30 [i_8] [i_5] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_9)))))), (((((((long long int) arr_21 [10ULL] [i_7] [(short)3] [10ULL])) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned long long int) (unsigned short)65507)), (var_5))) - (10240477408076928925ULL)))))));
                        }
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_8), (var_9)))), ((~(arr_10 [i_5] [i_6])))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)57425)), (var_2)))) ? (min((var_5), (((/* implicit */unsigned long long int) 2322512899921431963LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_5])) ? (((/* implicit */long long int) var_2)) : (var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9] [0LL] [i_6] [i_5] [i_5] [i_1])) || (((/* implicit */_Bool) var_7)))))) : (min((((/* implicit */long long int) arr_12 [i_1] [i_1])), (9174227781380470676LL))))))));
                            var_25 = max((((/* implicit */long long int) 4252348721U)), (arr_8 [i_5] [i_6] [i_5] [i_9]));
                            var_26 *= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)69))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */long long int) var_2)), (1LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)646))));
                        }
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_28 -= (((!(((/* implicit */_Bool) arr_31 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_7 + 4] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [(unsigned char)1] [i_5]))) && (var_0))))) : (((arr_6 [i_1 - 1]) ? (-2LL) : (((/* implicit */long long int) arr_19 [i_1 - 1] [i_1 - 1])))));
                            arr_37 [i_5] [i_5] [i_6] [i_5] [i_6] [i_7 + 3] [i_6] = (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1])), ((unsigned short)64727)))));
                            var_29 += max((((((/* implicit */_Bool) max((arr_32 [i_5] [i_7] [i_6] [i_5] [i_1 + 1]), (((/* implicit */long long int) (_Bool)1))))) ? (min((arr_18 [i_6] [i_6] [i_10]), (463516561U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-32759)))))), (min((((arr_3 [i_6] [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_7 - 2])))));
                            var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((int) (_Bool)1)) == (((/* implicit */int) ((1536614546U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))), (((((/* implicit */_Bool) (unsigned short)809)) ? (arr_10 [(short)4] [(short)4]) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1]))))));
                        }
                        arr_38 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_33 [(unsigned short)9] [i_5] [i_6] [i_6] [i_7]);
                    }
                    var_31 = ((/* implicit */int) ((_Bool) (+(arr_35 [i_1 - 1] [i_5] [i_1 + 1] [i_1] [i_1 + 1]))));
                }
            } 
        } 
    }
}
