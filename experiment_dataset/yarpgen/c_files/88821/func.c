/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88821
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
    var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29905)) ? (((/* implicit */long long int) 7)) : (4526728784410375941LL)))) ? ((-(((/* implicit */int) (unsigned short)48877)))) : (((((/* implicit */int) (signed char)-79)) + (719448720))))), (((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [1U] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18004)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-29))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (6145473085140187655ULL)));
                    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -714800242)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]))) : (134217727U)))));
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-1265))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) 9179528028035614400ULL))));
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) arr_9 [6LL] [i_0] [i_0] [i_0])));
            arr_16 [i_3] [i_3 + 1] = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) -2147483647);
                        arr_22 [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-24)) | (((/* implicit */int) (short)26329))));
                    }
                } 
            } 
            arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483636)) ? (6137981716185399373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))));
        }
    }
    for (short i_6 = 3; i_6 < 19; i_6 += 2) 
    {
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned short) (_Bool)1);
        arr_27 [i_6] = ((/* implicit */int) (unsigned short)33649);
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            {
                arr_34 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5U)), (max((((/* implicit */unsigned long long int) -1LL)), (4348626217052120000ULL))))))));
                arr_35 [i_8] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [i_7]))))), ((signed char)-104)));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_38 [i_9] [(unsigned short)16] [i_8] [i_7] = ((/* implicit */unsigned int) (signed char)-55);
                    var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(1047132978U)))) ? (((/* implicit */int) ((_Bool) arr_33 [(_Bool)1] [i_8]))) : ((+(1073741808)))))));
                }
                for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 4054314657U)) ? (((/* implicit */int) (short)-1024)) : (-2067019842)));
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (11238147872268161688ULL) : (((/* implicit */unsigned long long int) 2046700402)))))));
                    var_20 ^= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_33 [i_7] [i_8])), (9223370937343148032LL))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10)))))))));
                }
                for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(max((35841036605957699LL), (((/* implicit */long long int) (signed char)67))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_7] [i_7] [6ULL]))) : (((((/* implicit */_Bool) (short)8184)) ? (2164663517184LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8192)))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27649))) : (3651172203600443541LL))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)63)), (1993598967)))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2974249036225952545ULL)) ? (1890050837) : (((/* implicit */int) (signed char)-106)))) <= (((/* implicit */int) ((signed char) -8043382069857170849LL))))))))))));
                    var_23 ^= ((/* implicit */signed char) ((unsigned long long int) min((((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */unsigned long long int) 1962720232U)) : (7ULL))), (((/* implicit */unsigned long long int) arr_42 [i_11 + 1] [i_11 + 1] [i_11 + 1])))));
                }
            }
        } 
    } 
    var_24 = var_1;
    var_25 = ((/* implicit */short) 524287ULL);
}
