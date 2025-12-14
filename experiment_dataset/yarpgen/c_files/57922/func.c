/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57922
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
    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_12))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) / (((/* implicit */long long int) ((var_9) << (((((/* implicit */int) var_6)) - (64144))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_1)) / (((/* implicit */int) var_10))))));
        var_19 = ((/* implicit */unsigned long long int) (unsigned char)36);
        var_20 |= ((/* implicit */short) (~(((unsigned int) (~(var_7))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)0));
            arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1] [i_1])) ? (arr_3 [i_0 - 1] [i_1] [i_0 + 3]) : (arr_3 [i_0 + 2] [9ULL] [i_1 + 3])))) ? (((var_3) ? (arr_3 [i_0 + 3] [i_1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))) : ((-(arr_3 [i_0 + 3] [i_1 - 1] [i_0 - 2]))));
        }
    }
    for (unsigned short i_2 = 4; i_2 < 10; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37089))))) : ((+(-7043084102921731047LL))))))));
        var_22 = ((/* implicit */unsigned short) min((min((arr_4 [i_2] [i_2] [i_2]), (((/* implicit */long long int) 4294967286U)))), (((/* implicit */long long int) (signed char)41))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_10))));
        var_24 = ((/* implicit */unsigned short) (+((+(arr_3 [i_2 - 4] [i_2 - 3] [i_2 - 1])))));
        arr_9 [i_2] [(unsigned short)10] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)-77)) : ((+(((/* implicit */int) arr_8 [i_2 - 4]))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))));
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) (+(arr_11 [i_4] [i_3])));
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_4);
            var_27 = ((/* implicit */unsigned int) ((unsigned char) ((var_14) / (arr_12 [3LL] [i_4]))));
            arr_15 [i_4] = ((/* implicit */long long int) var_9);
            arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (arr_11 [i_3] [i_4])));
        }
        for (long long int i_5 = 4; i_5 < 22; i_5 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) 17592186044415LL))))))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)232)) | (((/* implicit */int) (signed char)-61))));
        }
        for (long long int i_6 = 4; i_6 < 22; i_6 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) 2300362771U);
            arr_21 [i_6] = ((/* implicit */_Bool) (unsigned char)178);
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_3) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35)))))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (9345273791542236484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            arr_26 [i_3] [i_3] = ((/* implicit */signed char) arr_20 [i_3] [i_3]);
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (+(arr_12 [i_3] [i_3]))))));
        }
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned char)204))))))));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (-(var_4))))));
    }
    var_36 = ((/* implicit */unsigned short) var_10);
}
