/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57148
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
    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? ((~(var_4))) : (((/* implicit */int) (short)-16384)))), (max((((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (short)-16383)))), (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)15450))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) var_8)), (0U)))));
        arr_3 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) (unsigned char)192))))) ? (((var_10) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = var_1;
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (3LL))), (((/* implicit */long long int) (signed char)36))))) ? (var_6) : (((/* implicit */int) ((short) ((int) (unsigned char)89))))));
                }
            } 
        } 
        arr_9 [(unsigned short)2] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_10 [i_0] [16LL] = ((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (max((((/* implicit */int) (unsigned short)65332)), (arr_5 [i_0])))))) ^ ((-(((var_2) & (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0 - 1])))))));
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_23 [(short)2] = min(((((+(17U))) / (max((582317881U), (((/* implicit */unsigned int) (_Bool)1)))))), ((-(((((/* implicit */_Bool) (unsigned short)62438)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6]))))))));
                                var_16 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) -2442453174278200433LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) / (((/* implicit */int) ((_Bool) (unsigned char)13)))))));
                            }
                        } 
                    } 
                    arr_24 [9] [(signed char)5] = ((/* implicit */unsigned char) (signed char)8);
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_4 + 1] [(unsigned char)7] [i_5])) ? (((/* implicit */int) max((arr_6 [i_3] [i_4 + 1] [i_5 + 1]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (unsigned char)255))));
                    arr_25 [i_4] [i_4] [8U] &= ((/* implicit */signed char) ((long long int) arr_22 [i_5 - 1]));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) arr_16 [(_Bool)1] [(unsigned short)10] [i_3] [i_3]);
        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) 0U)), (4875566517446880949LL)));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12842)) ? (max((((/* implicit */unsigned int) arr_0 [i_3])), (17U))) : (max((109553127U), (((/* implicit */unsigned int) var_0))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 3])) % (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 2]))))))))));
        arr_26 [i_3] |= ((/* implicit */signed char) arr_21 [i_3] [7U] [(_Bool)1] [i_3] [i_3] [i_3]);
    }
    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 3) /* same iter space */
    {
        arr_29 [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_8 + 1] [i_8] [i_8])) - (((((/* implicit */_Bool) arr_20 [i_8] [i_8 + 1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_6 [i_8] [i_8] [i_8])) : (var_6)))))) - (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33283)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) + (1971597721U)))))));
        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_7 [i_8 + 1] [i_8 + 1] [(signed char)11] [i_8]) >> (((arr_1 [i_8]) - (2840653884785723341ULL))))));
        var_22 = ((/* implicit */signed char) min(((~(((((/* implicit */int) (unsigned char)107)) * (((/* implicit */int) arr_15 [i_8])))))), ((((_Bool)1) ? ((~(((/* implicit */int) (signed char)39)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1)))))))));
    }
    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) /* same iter space */
    {
        arr_32 [i_9] = ((/* implicit */int) (signed char)-112);
        arr_33 [i_9] [i_9 + 1] = ((/* implicit */unsigned short) arr_17 [(unsigned short)0] [(short)1]);
        /* LoopNest 2 */
        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_8))));
                    arr_39 [i_10 + 2] [i_11] = ((((/* implicit */_Bool) min((var_8), (arr_36 [i_9] [i_10 - 2] [i_10 - 2] [i_9 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)10]))))) : (((/* implicit */int) var_12)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 2) 
    {
        for (unsigned int i_13 = 2; i_13 < 12; i_13 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((var_3), (((/* implicit */unsigned int) (short)-3274))))))) ? (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_36 [i_13] [6ULL] [(short)2] [i_12]))))) ? ((-(((/* implicit */int) (signed char)-94)))) : (((/* implicit */int) (unsigned short)32640)))) : (var_6)));
                arr_46 [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)53))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_5))));
    var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((var_10) ? (((/* implicit */int) (unsigned short)32542)) : (((/* implicit */int) (unsigned short)62180)))) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_10)))))))), ((-(((unsigned long long int) var_2))))));
}
