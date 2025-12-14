/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99855
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) var_3);
        var_20 *= ((/* implicit */unsigned char) var_17);
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] = ((/* implicit */_Bool) (+(arr_0 [i_0])));
                        arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 353285754U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_0 + 1] [i_1] [i_2 - 1])))) ? (arr_7 [i_1 + 1] [i_1 - 4] [i_1 - 4]) : (max((arr_2 [i_0] [(short)10]), (arr_3 [i_0] [i_0] [i_2])))))));
                    }
                } 
            } 
        } 
        var_21 = var_9;
        var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */int) var_9)) == (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (arr_2 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 1]))))))));
    }
    for (signed char i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_4] [i_4 - 2] [i_4 - 2]));
            arr_17 [i_4] [i_5] |= ((/* implicit */unsigned short) (_Bool)0);
            arr_18 [i_4] [i_4 - 2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(arr_10 [i_4] [i_5])))) != (18446744073709551603ULL)));
            arr_19 [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) | (2305843009213693952LL)))) ? (((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_5] [i_5])) ? (353285765U) : (3941681553U)))) : (min((((/* implicit */unsigned long long int) -2305843009213693971LL)), (var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0) : (((/* implicit */int) (signed char)74)))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) arr_14 [(unsigned char)16]);
            /* LoopSeq 2 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                arr_26 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_7] [(short)2] [i_6] [i_4 - 2])) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-110)), ((short)-27544))))));
                var_25 ^= ((/* implicit */unsigned short) arr_0 [(unsigned short)8]);
                var_26 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
            }
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                arr_29 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (arr_15 [i_4 - 2] [i_4]))))))), (((((((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (((/* implicit */int) (short)-27544)) : (((/* implicit */int) (unsigned short)19061)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) (unsigned char)178))) - (178)))))));
                arr_30 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (arr_8 [i_4] [i_4] [i_8] [i_6]) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_6 [i_8] [i_8] [(unsigned short)4] [i_4 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2407490831133491734ULL)))) : (min(((-(3941681553U))), (((/* implicit */unsigned int) arr_9 [i_4 - 2] [i_4 + 1] [i_4 + 1]))))));
            }
            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_9 [i_4] [i_4] [i_4])))) | (((/* implicit */int) arr_1 [i_6])))))));
        }
        var_28 += ((/* implicit */signed char) (-(((((/* implicit */int) var_14)) - (((/* implicit */int) (short)27543))))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            var_29 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) arr_6 [i_9] [i_9] [i_4 - 2] [i_4]))), (var_3)));
            arr_33 [i_4] [1U] [(unsigned short)10] |= ((/* implicit */unsigned int) min((arr_0 [i_9]), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_9] [i_4])), (arr_16 [(short)16])))), (min((((/* implicit */unsigned long long int) arr_21 [i_4])), (18274169296437879331ULL)))))));
        }
        for (int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_31 [i_10] [i_10] [i_10 + 1])))));
            arr_36 [i_4] [i_4 - 1] [i_10] = ((/* implicit */short) arr_8 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]);
            arr_37 [i_10] = arr_31 [i_4 + 1] [i_4 - 2] [i_10 - 1];
        }
        arr_38 [i_4] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)41003)) ? (-420183729) : (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) arr_28 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1])))) | (((/* implicit */int) var_12))));
        arr_39 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_4 - 1])) <= (((/* implicit */int) arr_28 [i_4] [i_4] [i_4 + 1] [i_4])))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_4])))) : (arr_15 [i_4 - 2] [i_4 - 1])))) ? (var_7) : (((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (unsigned short)5397))))))));
    }
    for (signed char i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
    {
        arr_43 [i_11] = (unsigned short)13736;
        arr_44 [i_11] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_2) % (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) arr_35 [i_11] [i_11 - 2] [i_11 - 2])) : (18446744073709551606ULL))), (((((/* implicit */_Bool) -1197227717)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((arr_27 [(_Bool)1] [i_11 - 1]), (((/* implicit */unsigned long long int) var_17))))))));
        arr_45 [i_11] = ((/* implicit */long long int) ((short) max((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) 3941681542U)))));
    }
    var_31 = ((/* implicit */_Bool) var_6);
    var_32 = ((/* implicit */int) min((((/* implicit */unsigned int) (((~(1560239839780954659LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)0)))))))), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))))));
}
