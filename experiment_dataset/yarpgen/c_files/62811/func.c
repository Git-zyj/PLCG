/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62811
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))) ? (((/* implicit */int) min((max((((/* implicit */short) arr_1 [i_0])), ((short)-29066))), (((/* implicit */short) arr_1 [i_0 - 1]))))) : (((/* implicit */int) ((short) arr_1 [i_0 + 3])))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) max((min((10299565882794641806ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29059)) && (((/* implicit */_Bool) arr_1 [i_1 - 1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29073))))) ? (((unsigned int) arr_5 [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29066)))))))))));
            var_12 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_0 [i_0 - 2] [i_0 - 1]))) != (((/* implicit */int) ((signed char) 9918236575883379900ULL)))));
            var_13 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29065)) ? (arr_3 [i_0] [(_Bool)1]) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-78))))) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) 4294967289U)) : (arr_2 [i_1 + 2] [i_1 + 1] [i_1]))))));
        }
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_8 [12LL] [12LL] [i_0] = ((/* implicit */signed char) 1728872140U);
            var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 3] [i_2 + 1] [i_2]))) ? (arr_2 [i_0 - 2] [i_2 + 1] [i_2]) : (arr_2 [i_0 + 2] [i_2 + 1] [i_2])));
        }
        for (short i_3 = 3; i_3 < 17; i_3 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) (signed char)86);
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 3])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-21)), (arr_1 [16])))) ? (min((((/* implicit */unsigned long long int) (short)-29067)), (arr_7 [i_3]))) : (min((arr_2 [i_3 - 3] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))))));
            arr_13 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_3 + 1] [i_3 - 1])) ? (((((/* implicit */_Bool) 4177920)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_10 [(short)15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39119)))))))) != (((arr_11 [i_0] [i_0]) | (((((/* implicit */_Bool) 1571310038)) ? (arr_11 [i_0 + 3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            var_16 = ((/* implicit */long long int) (!(((min((((/* implicit */long long int) (_Bool)1)), (arr_4 [8ULL] [i_0] [i_3]))) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_3 + 1])))))));
        }
        for (short i_4 = 3; i_4 < 17; i_4 += 3) /* same iter space */
        {
            arr_18 [i_0] [i_4 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(signed char)11] [i_4])) ^ (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) && (((/* implicit */_Bool) (short)31242)))))))) && ((_Bool)1)));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((max((7632067621479694371ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [16] [i_4] [i_4])) ? (arr_0 [i_4] [(signed char)13]) : (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [(short)11]))))))), (((/* implicit */unsigned long long int) ((arr_5 [i_5 - 1] [i_4]) ? (((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_5 [i_5 + 2] [i_4])))))));
                        arr_26 [i_5] = ((/* implicit */signed char) ((unsigned int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 4637190315966173879ULL))))));
                        var_18 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_17 [i_4 - 2] [i_0 - 3])), (arr_2 [i_4 - 2] [i_4 + 2] [i_4 - 2]))));
                        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (arr_21 [i_0] [i_4] [i_5]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_5])) ? (-417867565) : (((/* implicit */int) arr_1 [i_0])))))))), (arr_1 [i_0 - 1])));
                        var_20 = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_19 [i_6] [i_4 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (arr_24 [18ULL] [i_4] [18ULL] [i_6] [i_6] [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) (short)-29066)) != (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39119)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (arr_22 [i_5 - 1] [i_4] [i_0]) : (((/* implicit */int) arr_25 [8] [(short)3] [i_4] [8] [i_6]))))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) min((((unsigned long long int) arr_14 [i_0 - 1])), (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1] [i_4 + 2]), (arr_3 [i_0 - 1] [i_4 - 2]))))));
            arr_27 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_14 [i_4]) && (((/* implicit */_Bool) (short)18039)))))))) ? (max((((/* implicit */unsigned int) min((-170124802), (((/* implicit */int) (short)-29066))))), (((((/* implicit */_Bool) (short)-29066)) ? (arr_20 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) arr_10 [i_4 + 2])) - (32560))))))))));
            arr_28 [i_4] [(short)10] = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_4]))))))) != (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4 - 3])) != (((/* implicit */int) arr_17 [i_0] [i_0 + 1])))))));
        }
        arr_29 [i_0] = ((/* implicit */int) max((((unsigned long long int) 482967022)), ((-(max((((/* implicit */unsigned long long int) -1245209404)), (arr_2 [i_0 + 3] [i_0] [5])))))));
    }
    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_19 [i_7 - 1] [i_9]), (((/* implicit */unsigned short) arr_31 [i_9]))))) && (((/* implicit */_Bool) ((arr_22 [i_7] [i_7] [i_7 - 2]) - (((/* implicit */int) arr_37 [i_7 + 1] [7LL] [i_7]))))))))) ^ (min((((long long int) arr_24 [i_7] [i_7 + 1] [i_8] [i_8 - 2] [i_8] [i_9])), (((/* implicit */long long int) 1714023130))))));
                    var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_8 + 1] [i_7 + 1])) ? (arr_0 [i_8 - 1] [i_7 - 2]) : (arr_0 [i_8 - 1] [i_7 + 1]))), (((/* implicit */unsigned int) -2147483644))));
                    arr_40 [i_8] [i_8 - 1] [i_8] = min((((((/* implicit */int) max((arr_23 [i_8] [i_8] [i_8]), (arr_9 [i_7])))) & (((/* implicit */int) max(((_Bool)1), (arr_25 [i_7] [i_8] [i_9] [i_8] [i_9])))))), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_7] [i_7] [i_9])) && (((/* implicit */_Bool) 470583146))))), (max((arr_23 [i_8] [i_7 - 1] [i_9]), (arr_17 [i_9] [i_8 - 2])))))));
                    var_24 = ((/* implicit */signed char) arr_30 [i_8 + 1]);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_7 - 2] [i_7] [i_7 + 1]))) != (((arr_21 [i_7 - 2] [i_7] [i_7 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7] [i_7])))))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) (short)18039);
                    arr_47 [i_11] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_42 [i_7 - 2] [i_7 - 1])) ? (arr_42 [i_7 - 2] [i_7 - 2]) : (arr_42 [i_7 - 1] [i_7 - 2]))), (((min((arr_2 [i_7] [i_10] [i_11]), (((/* implicit */unsigned long long int) (unsigned short)62523)))) - (((/* implicit */unsigned long long int) ((-44739667) - (((/* implicit */int) (_Bool)0)))))))));
                    arr_48 [i_7] [i_7] [i_10] [i_11] = ((int) ((((/* implicit */_Bool) arr_9 [i_7 - 1])) ? (arr_11 [i_7 - 1] [i_7 - 1]) : (2566095155U)));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */short) (_Bool)1);
}
