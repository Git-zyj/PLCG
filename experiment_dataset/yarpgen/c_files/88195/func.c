/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88195
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)13725))) ^ (-1436081573615695297LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (~(1436081573615695273LL)))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_14)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50236)) ? (arr_1 [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 4] [i_0])))));
        var_18 += ((/* implicit */unsigned char) (+(-1436081573615695295LL)));
        var_19 |= ((/* implicit */signed char) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 4] [i_0 - 4])) + (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2] [i_0 + 1]))));
                        arr_11 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_10)))));
        arr_15 [i_4] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_4] [(unsigned short)22] [i_4] [i_4]))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_22 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_5] [(unsigned short)6])), (arr_1 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_7 [14LL])))))) : (arr_2 [i_5] [i_5])))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    {
                        arr_25 [i_5] [(short)10] [i_6] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_7 + 3] [i_8 + 1])), ((-(((/* implicit */int) arr_7 [i_5]))))));
                        arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(arr_2 [i_6] [i_7 - 1])));
                        var_23 = ((/* implicit */unsigned int) min((-1436081573615695306LL), (1436081573615695289LL)));
                    }
                } 
            } 
        } 
        arr_27 [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) (unsigned char)3))) ? (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned char)170)) - (150))))) : (((/* implicit */int) arr_18 [i_5] [i_5])))) > (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (unsigned short)36338)) : (var_0))) < (((((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) / (arr_21 [i_5] [i_5] [i_5] [(signed char)2]))))))));
        var_24 = min((min((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))) | (-4828764854453584024LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)29198)))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) != (((((/* implicit */int) arr_8 [i_5] [i_5] [22U])) * (((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))))))));
    }
    var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) max(((unsigned char)86), (var_9)))) ^ (((/* implicit */int) var_1)))));
    var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_6)) - (4707)))))) : (min((((/* implicit */long long int) (unsigned char)19)), (9223372036854775807LL)))))));
}
