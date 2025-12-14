/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99232
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)6144))));
                    arr_12 [i_0] [i_1] = ((/* implicit */long long int) (((+(arr_8 [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((35150012350464ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((unsigned char) arr_9 [21LL] [i_0] [(signed char)7]));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [(unsigned char)4]))) : (arr_8 [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0])))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_13 [i_0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0])))))) : (min((((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_17 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_17 [i_0])) * (arr_5 [15ULL] [i_3] [(unsigned char)5]))))))));
                }
            } 
        } 
        var_21 = (i_0 % 2 == 0) ? (((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_1 [i_0])), (((arr_14 [i_0]) % (arr_14 [i_0]))))), (((((((/* implicit */_Bool) arr_9 [10LL] [i_0] [(signed char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0]))) : (arr_5 [i_0] [i_0] [i_0]))) >> (((arr_17 [i_0]) + (2113765143)))))))) : (((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_1 [i_0])), (((arr_14 [i_0]) % (arr_14 [i_0]))))), (((((((/* implicit */_Bool) arr_9 [10LL] [i_0] [(signed char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0]))) : (arr_5 [i_0] [i_0] [i_0]))) >> (((((arr_17 [i_0]) - (2113765143))) + (1143974590))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 4; i_5 < 19; i_5 += 3) 
    {
        for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            {
                arr_23 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_21 [i_5] [i_6])) ^ (arr_10 [6LL] [i_5 - 2] [6LL] [i_5 + 1])))) ? (min((arr_13 [i_5 + 2] [i_6 - 2]), (((/* implicit */long long int) arr_17 [i_5])))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-30))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_2 [10] [(_Bool)1])) << (((/* implicit */int) arr_6 [i_5])))) * (((/* implicit */int) arr_6 [i_5])))))));
                arr_24 [i_5] [i_5] = arr_6 [i_5];
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_8] [i_7])) ? (arr_10 [i_9] [i_8] [i_8] [i_7]) : (arr_10 [(short)11] [i_9] [(short)15] [(unsigned short)13])))) ? (((/* implicit */long long int) max(((+(arr_14 [i_9]))), (((/* implicit */unsigned int) arr_31 [i_7] [12ULL] [i_7]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(unsigned short)11] [i_8])) ? (arr_21 [i_7] [i_7]) : (((/* implicit */int) arr_9 [i_7] [i_9] [i_9]))))), (arr_0 [i_9] [i_7])))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_42 [i_10] [i_10] = min((((((/* implicit */_Bool) arr_28 [i_11] [i_8] [i_7])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) ^ (35150012350464ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))), (((/* implicit */unsigned long long int) -1747127466836355185LL)));
                                var_23 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((short) arr_18 [i_10]))), (((arr_8 [i_7] [i_10]) ^ (((/* implicit */unsigned long long int) arr_0 [i_9] [i_9]))))))));
                                arr_43 [14] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) min((17726159095263163671ULL), (17726159095263163682ULL)));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_22 [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
