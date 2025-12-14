/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86461
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_12)))))), (var_1)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) (-(min((((1695946292) + (((/* implicit */int) var_7)))), ((-(524287)))))));
        arr_3 [i_0] = min((((/* implicit */short) (signed char)-121)), (var_9));
        arr_4 [i_0] [i_0] = max((((/* implicit */short) (signed char)0)), ((short)(-32767 - 1)));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned short i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] [i_3] [i_4] = ((/* implicit */signed char) arr_13 [14ULL] [i_4 + 1] [i_3] [i_4]);
                        var_16 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3]))) : (var_2))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))) ? (317403296774732761LL) : (((/* implicit */long long int) ((arr_13 [i_4 + 1] [i_2] [i_2] [(short)14]) ? (-1409274381) : (max((((/* implicit */int) arr_6 [i_1] [i_1])), (arr_15 [i_4] [i_4] [i_4]))))))));
                        arr_18 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -524287)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18369)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-((-(((/* implicit */int) var_6)))))))));
                            var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_11 [i_6] [i_5 - 3] [i_5] [i_5 - 1])))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (-1409274381))) : (max((((((/* implicit */_Bool) (unsigned short)65535)) ? (-293800693) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_12 [i_5] [i_7])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_6] [i_7]))))))));
                            arr_27 [i_2] [i_5] [i_6] [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1409274381)) ? (((/* implicit */int) (unsigned short)7251)) : (((/* implicit */int) (signed char)71))))), (arr_12 [i_5 + 1] [i_5 + 2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_7] [i_2] [i_5 - 3] [i_6]))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)35268))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_11 [i_1] [i_1] [i_1] [i_1])))))));
                        }
                    } 
                } 
                arr_28 [i_5] [i_2] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_9 [i_5 - 2] [i_5 + 1])), ((~(2057048061U)))));
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                arr_31 [(short)3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)0)) ? (-1409274381) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_20 [i_1] [i_8])) : (((/* implicit */int) ((((var_1) ? (524287) : (((/* implicit */int) var_11)))) < (((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))))));
                arr_32 [i_8] [1U] [i_1] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_8]))))), (min((((/* implicit */int) var_7)), (var_12)))))));
            }
            arr_33 [(unsigned short)2] [i_1] [i_2] = ((/* implicit */signed char) -524287);
            arr_34 [i_2] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_23 [i_1] [i_2] [i_2] [i_2] [4LL]), (arr_23 [i_2] [i_2] [i_2] [i_1] [i_2]))))));
            arr_35 [i_1] [i_1] = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))), (((/* implicit */unsigned int) min((arr_0 [22U] [i_1]), (((/* implicit */unsigned short) (!(var_1)))))))));
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)951))) : (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (((min((var_3), (((/* implicit */long long int) (short)951)))) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))))) : (((/* implicit */long long int) -1409274381))));
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min(((unsigned short)35163), (((/* implicit */unsigned short) (_Bool)0))));
        var_21 = ((/* implicit */unsigned short) (_Bool)0);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (((((/* implicit */_Bool) arr_19 [i_9])) ? (arr_12 [i_9] [i_9]) : (arr_16 [(_Bool)1] [i_9] [i_9] [19U] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [8LL] [i_9])))))) ? (((-1302020167) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_9]))));
    }
}
