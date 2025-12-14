/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95826
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
    var_16 = ((/* implicit */unsigned short) var_2);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (signed char)-77))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-77)))) << (((((/* implicit */int) (signed char)77)) - (74)))));
                    arr_9 [(unsigned short)11] [(unsigned short)3] [i_2] = ((/* implicit */unsigned short) var_5);
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13886)) && (((/* implicit */_Bool) (signed char)-61)))))));
                }
            } 
        } 
        arr_11 [i_0] &= ((/* implicit */signed char) var_11);
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) arr_1 [i_3]);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-61))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_4);
                    arr_21 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)-79))));
                    arr_22 [i_3] [i_3] [(signed char)0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)61)) && (((/* implicit */_Bool) 3034454542U))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)61)) | (((/* implicit */int) (signed char)67))));
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (3294607279U)));
        arr_25 [i_6] = ((/* implicit */signed char) ((long long int) 8796093022207LL));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) (signed char)-61);
        var_23 &= ((1000360017U) << (((1000360016U) - (1000359997U))));
        arr_30 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)86))));
    }
    var_24 = var_0;
    var_25 = var_15;
}
