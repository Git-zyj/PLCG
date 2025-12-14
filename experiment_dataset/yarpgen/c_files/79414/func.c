/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79414
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
    var_16 += 2687634629U;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [(unsigned char)9] = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_6 [i_2] [i_1 - 1] [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 + 2])))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(11365237290069078433ULL)))) ? (((((((/* implicit */_Bool) 3183866512U)) ? (5254605778561131849ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))) : (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15688)))))));
                    arr_10 [18LL] [i_1] [(signed char)2] = ((/* implicit */long long int) (-((+(((/* implicit */int) max(((unsigned short)22087), (((/* implicit */unsigned short) var_3)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_18 *= ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_1 [i_4])) + (2147483647))) >> (((((/* implicit */int) var_14)) - (193))))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) == (((/* implicit */int) arr_1 [i_4])))))));
            arr_16 [i_4] [13ULL] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_12 [i_3]), (arr_12 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_4]))) : (var_12)))) : (((unsigned long long int) arr_12 [i_4]))));
            arr_17 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((short) (-(arr_0 [i_3] [i_4]))));
            arr_18 [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) var_4);
        }
        var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)18599)))))));
        arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((1535013078U), (((/* implicit */unsigned int) (short)32765))))) * (max((((/* implicit */unsigned long long int) 3962934522U)), (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)15] [(unsigned short)16] [19LL] [(unsigned short)15])))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_25 [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(6049646781944435545LL)))))) ? ((~(((/* implicit */int) ((unsigned short) (unsigned char)255))))) : (((/* implicit */int) ((short) ((signed char) arr_14 [i_5] [i_5] [i_5]))))));
            var_20 += ((/* implicit */long long int) ((signed char) max((arr_11 [i_5] [i_5]), (arr_11 [i_5] [i_6]))));
            arr_26 [i_5] [i_5] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (~(arr_12 [i_5])))))));
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 1941200630U)))))) ? (3500811618U) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)28))))), ((+(1097273708U)))))));
    }
    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        var_22 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_7 + 1])))) ? (max((-4107539610068402856LL), (((/* implicit */long long int) (signed char)28)))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-114), (arr_1 [i_7 - 1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_32 [i_8] [i_7 + 2] [i_8] = ((/* implicit */unsigned long long int) arr_8 [(signed char)11] [i_7] [(signed char)11] [(signed char)11]);
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(arr_30 [i_10 - 1] [i_9 - 1] [13ULL])));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-114)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                for (unsigned int i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            arr_45 [i_7] [i_13] [i_7] [i_7 - 1] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20075)))))));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-69)) > (((/* implicit */int) (unsigned short)9634))))) : ((~(((/* implicit */int) (unsigned char)204))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_14 = 2; i_14 < 8; i_14 += 3) 
    {
        var_26 = ((/* implicit */long long int) (unsigned char)247);
        var_27 = ((/* implicit */unsigned int) (+(-8113870652235425918LL)));
    }
}
