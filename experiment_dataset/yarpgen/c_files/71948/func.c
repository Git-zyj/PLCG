/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71948
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
    var_20 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_11)), (((((/* implicit */int) var_11)) % (((/* implicit */int) var_16))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_21 += ((/* implicit */signed char) ((unsigned short) arr_2 [i_3 - 2] [i_1]));
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_10 [i_3 + 1] [i_1]) + (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [i_2] [i_3 + 1])))))));
                        var_22 = ((/* implicit */short) (+(((long long int) var_3))));
                        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_1])) != (-3347196588688988273LL))))));
                        var_24 = ((/* implicit */unsigned char) -3347196588688988273LL);
                    }
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) (((+(arr_0 [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3347196588688988272LL))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) < (((/* implicit */int) var_18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_1]))) : (arr_9 [i_1])));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_13 [(short)8] [i_0] [i_0] [i_2] [i_4])))) << (((((((((/* implicit */_Bool) arr_4 [i_1] [i_2] [6U])) ? (arr_10 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) + (2012104729912171378LL))) - (25LL)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_13 [(short)8] [i_0] [i_0] [i_2] [i_4])))) << (((((((((((/* implicit */_Bool) arr_4 [i_1] [i_2] [6U])) ? (arr_10 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) + (2012104729912171378LL))) - (25LL))) - (5900774758461814961LL))))));
                        var_26 = (unsigned char)241;
                        arr_18 [14U] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)33410)) ? (-5053844959835762183LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33411)))));
                    }
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_14 [i_0] [i_0] [i_0])))));
        arr_20 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1]);
        var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-3)) > (((/* implicit */int) (unsigned char)120))))) < (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) arr_14 [i_5] [i_5] [i_5]);
        var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [(signed char)4] [i_5]))) >= (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_6 [i_5])))));
        arr_24 [i_5] = arr_12 [i_5] [i_5] [i_5] [18ULL];
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_29 *= ((/* implicit */unsigned long long int) (~(18LL)));
        arr_27 [i_6] [i_6] = var_17;
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]);
    }
    var_30 &= ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        arr_31 [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
        arr_32 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_29 [i_7] [i_7])) >= (((/* implicit */int) arr_29 [(signed char)0] [i_7])))))));
    }
}
