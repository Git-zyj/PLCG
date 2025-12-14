/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91320
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = var_2;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                    arr_10 [10ULL] [i_1] [i_2] &= ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
        arr_11 [(signed char)16] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)49298);
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            arr_19 [i_3] = ((/* implicit */unsigned char) (~(((unsigned int) var_10))));
            arr_20 [(unsigned short)0] = min((var_7), (var_7));
        }
        arr_21 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_6 [i_3] [i_3] [i_3]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_17 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (((arr_12 [i_3] [i_3]) & (arr_2 [i_3]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) -2009328480)));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_5]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        arr_34 [i_6] [10U] [i_6] [10U] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)119))))))), ((+(arr_3 [(short)15])))));
                        arr_35 [i_5] [(signed char)8] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_5] [i_5])))))));
                        arr_36 [i_8] = ((/* implicit */_Bool) (((_Bool)1) ? (4119809760U) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)168)))), (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_37 [7U] [i_6] [10U] = ((/* implicit */unsigned char) arr_3 [i_5]);
                    arr_38 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_26 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_2 [i_5]))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)107)))), (arr_5 [i_5] [i_7])))) : (min((arr_2 [i_6]), (arr_2 [i_5])))));
                }
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_43 [i_9] = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned int) var_9))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    arr_49 [(unsigned short)6] [(unsigned short)6] [i_11] |= (unsigned char)190;
                    arr_50 [i_9] [i_9] [i_9] [(short)5] = ((/* implicit */_Bool) arr_24 [i_9]);
                }
            } 
        } 
        arr_51 [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2049731214))));
    }
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)48840)) - (48839)))));
}
