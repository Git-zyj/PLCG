/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97149
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
    var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1)))) ? (((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        var_15 += ((/* implicit */signed char) (!(((arr_1 [i_0 + 1] [i_0]) >= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_10)))))));
        var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-54)) ^ (((/* implicit */int) var_13))))) ? (((var_6) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_17 = ((/* implicit */signed char) 856518448039606008LL);
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((((-(((/* implicit */int) (unsigned char)22)))) / (((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)23))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_13 [i_1 - 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 4; i_5 < 10; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), ((signed char)42)));
                            arr_16 [i_1] [i_2] [i_3 - 2] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3143920209U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (24U)))) ? (var_5) : (max((var_5), (((/* implicit */unsigned int) var_8))))))));
                        }
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */long long int) (~((~(2042546787U)))))), (max((((/* implicit */long long int) (~(-95373136)))), (arr_9 [i_3 + 1] [i_2 - 1] [i_1 + 1]))))))));
                        arr_17 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_13)) + (73)))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-14485)))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23871))) : (arr_0 [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (signed char)0))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_9)))))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_22 [i_1] [(signed char)8] [i_1] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(signed char)4] [i_1 - 1] [i_2 - 1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) max((arr_18 [i_1] [i_1 + 1] [i_2 - 1] [i_1]), (((/* implicit */short) arr_20 [i_1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_7 + 1]))))) : (((/* implicit */int) ((signed char) arr_20 [i_1] [i_1 - 1] [i_2 - 1] [i_2 + 1] [i_7 + 1])))));
                        var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)16)), (arr_14 [i_6] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])));
                    }
                } 
            } 
            arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) max((var_7), (arr_7 [i_1 - 1] [i_1])))), ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_1]))))));
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((1198004849U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 - 1])))))) ^ (0LL)));
        arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(7964260389498460526LL)))) ? (((13ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))))))));
    }
    for (signed char i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
        {
            var_23 = -157443788;
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_8] [i_9] [i_9] [(_Bool)1] [(unsigned short)1]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned char)128))))), ((~(((/* implicit */int) var_11))))))) : (max((var_10), (((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned short) (short)-599)))))))));
            arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)23)) ? (((((/* implicit */_Bool) 1589426065U)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_29 [i_8] [2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (arr_26 [(signed char)2]))))))) / (((((/* implicit */_Bool) (+(2426055192U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))));
            var_25 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)2))));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9]))) | (4294967292U)))) ? (((/* implicit */long long int) 1360291719)) : (min((var_4), (((/* implicit */long long int) (unsigned short)62866)))))))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) / (-1258585522)))) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) (short)-29442))));
            arr_36 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */long long int) arr_0 [i_8] [i_10])) : (-9153404430040426600LL)))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                arr_39 [i_8] [i_10] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-28965))));
                arr_40 [i_8 - 1] [i_8] [i_11] [i_11] = ((unsigned int) arr_9 [i_8 + 1] [i_8 - 1] [i_8 + 1]);
                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_8 [i_8 - 1] [i_10])))) ? (((/* implicit */int) (unsigned short)47204)) : (((/* implicit */int) var_0))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                var_29 = ((/* implicit */int) (unsigned short)19432);
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1636294287))));
                arr_45 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (unsigned char)208))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_8])))) : (((/* implicit */int) (_Bool)1))));
                arr_46 [i_10] [i_10] [i_8] [i_10] = ((/* implicit */unsigned char) (short)-18062);
            }
        }
        var_31 = ((/* implicit */short) var_3);
    }
    var_32 = ((/* implicit */int) var_10);
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-29)))) : (((/* implicit */int) var_2))))) ? ((((~(((/* implicit */int) var_2)))) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_12))))))) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))))))));
}
