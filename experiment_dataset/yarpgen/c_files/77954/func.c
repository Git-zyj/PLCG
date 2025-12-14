/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77954
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
    var_11 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) % ((+(var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) + (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (0ULL))))) + (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    var_13 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((max((arr_7 [(unsigned short)9] [(signed char)7] [(unsigned short)9] [i_3] [(_Bool)1] [(signed char)7]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))) > (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)45440), (((/* implicit */unsigned short) arr_0 [i_1]))))))))) * ((-(((/* implicit */int) arr_3 [i_1])))))))));
                        var_15 = ((/* implicit */unsigned int) 0);
                        arr_9 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) max((min(((~(var_7))), (((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 1])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_3])))))));
                    }
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (unsigned int i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((arr_16 [i_4 + 2] [i_4 - 1] [i_6 - 1]), (((arr_16 [i_4 - 1] [i_4 + 1] [i_6 - 1]) | (arr_16 [i_4 - 1] [i_4 + 1] [i_6 - 3])))));
                    arr_19 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_12 [i_6 + 1] [i_6 - 2]) == (arr_12 [i_6 - 1] [i_6 - 3])))) & (((/* implicit */int) (((-(((/* implicit */int) arr_18 [i_6 - 3] [i_5] [i_4 + 1])))) == (((/* implicit */int) arr_13 [i_6 - 1] [7ULL] [i_6])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7]))) : (arr_12 [i_4] [i_4 + 2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-79)))))))) : (arr_11 [13LL] [(short)15])));
                        arr_23 [i_6] = ((/* implicit */unsigned short) ((arr_12 [i_6] [i_6]) > (((/* implicit */long long int) (~(((((/* implicit */_Bool) 926443909U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) : (4036641281U))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_19 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-((~(arr_16 [i_8] [i_5] [i_5]))))))));
                        arr_26 [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_6 - 2] [i_4 - 2]));
                        var_21 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_6 - 1] [i_6] [i_6] [18LL]))));
                    }
                }
            } 
        } 
        arr_27 [i_4] [i_4] = ((/* implicit */unsigned short) ((signed char) (~(arr_24 [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_4]))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 1) 
    {
        arr_31 [i_9] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_12 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (((long long int) (short)-22776))))));
        arr_32 [i_9] = (!(((/* implicit */_Bool) max((arr_21 [i_9 + 1]), (((/* implicit */unsigned long long int) arr_24 [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 - 1]))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_36 [i_9] [i_10] [i_10] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9] [(short)2] [i_9]))))));
            arr_37 [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_9 - 2] [i_9 + 1] [i_9 + 1])))));
        }
        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            var_22 = (!(((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) arr_38 [2U] [i_11])) && (((/* implicit */_Bool) arr_28 [i_9]))))), (arr_38 [(_Bool)1] [(_Bool)1])))));
            arr_42 [i_9 - 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)32754)) > (((/* implicit */int) (_Bool)0)))))))) + (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (arr_29 [i_9 + 1])))));
            var_23 = ((unsigned long long int) (!(((/* implicit */_Bool) (-(3792885326U))))));
            arr_43 [i_9] = ((/* implicit */short) ((((/* implicit */long long int) (~(((unsigned int) (unsigned short)42283))))) == (((long long int) (+(((/* implicit */int) var_2)))))));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned int) arr_44 [i_12]);
        var_24 *= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17640)) || (((/* implicit */_Bool) (short)-17209))))), (((long long int) arr_45 [i_12] [i_12]))));
        arr_47 [i_12] = ((/* implicit */unsigned short) ((_Bool) var_4));
    }
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
    {
        arr_50 [i_13] = ((/* implicit */signed char) (+(((long long int) ((2581294664U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-6421174014608941733LL)))) && (((/* implicit */_Bool) (unsigned short)8191))))) ^ (((/* implicit */int) arr_44 [i_13]))));
    }
}
