/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97826
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
            var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [12ULL] [12ULL])));
            arr_6 [(unsigned char)8] &= ((/* implicit */unsigned char) 13298695780231103313ULL);
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_12 = ((short) arr_9 [i_0]);
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_13 = ((/* implicit */short) 1274025784U);
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_14 = ((/* implicit */int) (unsigned char)191);
                    arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_15 [i_0] [i_2] [0U]))))));
                }
            }
            for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (5148048293478448287ULL) : (5148048293478448307ULL)));
                var_16 = arr_17 [i_0] [i_0];
                var_17 ^= ((/* implicit */unsigned int) ((5148048293478448303ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) var_3);
                            var_19 = ((short) var_9);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30250)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (short)-4656))));
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        for (short i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
                            {
                                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((unsigned int) (short)-2686)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_9] [i_11]))))) == (((/* implicit */unsigned int) -726374652))));
                                arr_42 [i_13] [i_12] [i_11] [i_10] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (short)-8958)) : (((/* implicit */int) (unsigned char)0))));
                                var_22 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_35 [i_10] [i_10] [i_10])) + (2147483647))) << ((((~(-606831549))) - (606831548)))));
                            }
                            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-936)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) var_1)), (arr_27 [i_9])))));
                            arr_43 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-1)) | (1180040168)))))) : (((((/* implicit */_Bool) var_7)) ? (arr_36 [i_9] [i_9] [i_12]) : (arr_36 [i_12] [i_10] [i_10])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        for (short i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            {
                                arr_50 [i_14] [i_15] [(unsigned char)4] [i_14] [i_10] [i_9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_49 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_15] [i_15] [i_14] [i_9] [i_9]))))));
                                var_24 = (signed char)-118;
                            }
                        } 
                    } 
                } 
                arr_51 [i_9] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_48 [(unsigned char)19] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_37 [i_9] [i_9] [i_10] [i_10])))), (((/* implicit */int) arr_48 [i_10] [i_10] [(short)14] [i_9] [i_9]))));
            }
        } 
    } 
}
