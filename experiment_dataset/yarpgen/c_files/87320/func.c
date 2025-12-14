/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87320
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [(unsigned short)20] [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_4))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_13 += (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_9 [i_0]))))))));
                        var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_9 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)52331), (arr_1 [(unsigned short)19] [i_3])))))))), (((((/* implicit */_Bool) arr_7 [5ULL] [i_1] [(short)0])) ? (max((var_0), (((/* implicit */unsigned long long int) (signed char)1)))) : (((/* implicit */unsigned long long int) var_12))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (signed char)0))))));
        var_16 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_4] [i_4] [(signed char)3])), (max((33554400U), (((/* implicit */unsigned int) arr_1 [17ULL] [i_4]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) % (arr_8 [i_4] [i_4]))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_7 [i_5] [(_Bool)1] [i_5]))));
        var_18 = ((/* implicit */unsigned int) var_10);
        var_19 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (unsigned char)149)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) < (arr_11 [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 15; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        var_20 *= ((((/* implicit */_Bool) arr_7 [i_7 - 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_12 [i_7] [i_5]), (((/* implicit */signed char) arr_20 [i_5] [i_6])))))))) : (13625257269032403311ULL));
                        var_21 = ((/* implicit */int) arr_8 [i_8] [i_8]);
                        var_22 = ((/* implicit */signed char) ((int) 130560));
                        var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_7 + 1] [i_7 - 1] [24])) ? (((/* implicit */int) arr_7 [i_7 + 1] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_7 [i_7 - 1] [i_7 + 1] [(short)5])))), (((/* implicit */int) arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1]))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) 13625257269032403311ULL));
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        arr_26 [i_9] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (((-(((/* implicit */int) arr_4 [i_9] [i_9] [3U])))) >= (((/* implicit */int) ((unsigned char) var_12)))))), (((arr_20 [i_9] [i_9]) ? (((/* implicit */int) arr_20 [i_9] [i_9])) : (((/* implicit */int) arr_20 [i_9] [i_9]))))));
        arr_27 [i_9] = ((/* implicit */unsigned long long int) var_12);
    }
    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_10)) - (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1)))), (var_9))))))))));
}
