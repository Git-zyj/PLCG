/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61091
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (unsigned short)32594);
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_1 [i_1] [i_0]))));
                var_15 = ((arr_0 [i_0]) <= (((/* implicit */int) (unsigned char)227)));
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */unsigned short) arr_0 [(_Bool)0]);
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min(((~(arr_0 [8LL]))), (((((/* implicit */_Bool) arr_0 [(unsigned char)8])) ? (arr_0 [6ULL]) : (arr_0 [4LL]))))))));
                }
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) max((((((((-28493431968597920LL) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_0]))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (short)14173)))) - (29))))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -5184670262386468229LL)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0 + 2]))))));
                        arr_14 [i_0] [i_1 - 2] [i_3] [i_0] = ((/* implicit */unsigned short) -2108476456);
                        arr_15 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_4]);
                    }
                    arr_16 [i_0] [i_0] [i_3] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((-5184670262386468202LL) <= (((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_0] [i_0])) + (2147483647))) << (((max((6421026238422980003LL), (((/* implicit */long long int) arr_0 [i_0])))) - (6421026238422980003LL))))))))) : (((/* implicit */unsigned int) ((-5184670262386468202LL) <= (((/* implicit */long long int) ((((((((/* implicit */int) arr_6 [i_0] [i_0])) - (2147483647))) + (2147483647))) << (((max((6421026238422980003LL), (((/* implicit */long long int) arr_0 [i_0])))) - (6421026238422980003LL)))))))));
                    var_20 = min((6635558694653765052LL), (((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0 + 4]))))) & (arr_5 [i_0 + 2] [i_0] [i_0] [i_0]))));
                }
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 8; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) 1895390886U)) <= (5184670262386468229LL)))), (((arr_0 [i_0]) ^ (((/* implicit */int) (short)-1))))));
                                var_22 ^= ((((((((((/* implicit */int) arr_7 [i_1] [i_5] [i_1] [i_7])) < (((/* implicit */int) arr_1 [i_1] [i_5])))) ? (((/* implicit */long long int) arr_0 [i_5])) : (-5184670262386468226LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((short) ((arr_5 [i_1 - 1] [i_5] [i_5] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_5]))))))) - (1))));
                                var_23 = ((/* implicit */unsigned short) 63LL);
                                var_24 = ((/* implicit */unsigned char) 262143U);
                            }
                        } 
                    } 
                    var_25 = 2695684784187426191LL;
                    var_26 -= ((/* implicit */unsigned long long int) (!(((arr_0 [i_5]) != (arr_0 [i_5])))));
                }
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), ((+(12485005141143825686ULL)))))) && (((/* implicit */_Bool) (unsigned char)80)))))));
                    arr_27 [i_0] [i_1] = ((/* implicit */short) 4418148871441189832LL);
                    var_28 |= min((max((-1LL), (2695684784187426199LL))), (max((2695684784187426194LL), (((/* implicit */long long int) arr_18 [i_0 + 3] [i_1 + 3] [i_8] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_32 [6LL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (short)-32746)))), (((/* implicit */int) max((arr_23 [i_10] [i_9] [i_8] [i_1 - 1] [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) (short)127)) || ((_Bool)1)))))))));
                                var_29 = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_8]);
                                arr_33 [i_0] [i_1] [i_8] [i_9] [i_10 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((signed char)59), (((/* implicit */signed char) arr_24 [i_0 + 2] [i_1 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_8] [i_10]))))) : (((((/* implicit */int) (signed char)113)) << (((131071) - (131066))))))) >> (((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])) - (53)))));
                                var_30 = ((/* implicit */unsigned int) ((arr_12 [i_0] [i_1] [i_0] [i_0] [i_9] [i_10]) || (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) && (((/* implicit */_Bool) min(((short)32745), (((/* implicit */short) arr_8 [i_8] [i_9] [i_10])))))))));
                            }
                        } 
                    } 
                }
                arr_34 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) -1942131821275786533LL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (unsigned char i_13 = 1; i_13 < 20; i_13 += 2) 
            {
                {
                    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_32 = ((/* implicit */unsigned char) (signed char)-23);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (unsigned char)109))));
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2060890368)) && (((/* implicit */_Bool) (unsigned char)159))));
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 575897802350002176LL)) && (((/* implicit */_Bool) (signed char)-110))));
}
