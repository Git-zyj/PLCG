/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6783
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_6)), ((unsigned short)43424)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) >> (((/* implicit */int) ((((/* implicit */unsigned int) max((var_13), (((/* implicit */int) arr_1 [5LL] [5LL]))))) < (((((/* implicit */_Bool) 0U)) ? (4294967286U) : (((/* implicit */unsigned int) var_13)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((max((0ULL), (((/* implicit */unsigned long long int) var_14)))), (max((max((((/* implicit */unsigned long long int) var_8)), (5423312924545722681ULL))), (((/* implicit */unsigned long long int) 8U)))))))));
        var_21 += ((/* implicit */unsigned char) (+(max((max((((/* implicit */unsigned long long int) 4294967295U)), (arr_8 [10LL] [10LL]))), (((/* implicit */unsigned long long int) 11U))))));
        arr_10 [i_3] [i_3] &= ((/* implicit */long long int) ((((unsigned int) 0U)) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [(unsigned char)8])))))));
        var_22 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)47862))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) ((signed char) (~(max((((/* implicit */long long int) var_16)), (var_3))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((unsigned int) (unsigned short)192));
                    var_24 -= ((/* implicit */_Bool) ((var_18) / (((/* implicit */unsigned long long int) 942188509U))));
                    arr_22 [i_4] [1LL] [(unsigned char)15] [i_4] = ((unsigned char) ((short) var_4));
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned char) 17U);
    }
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65344)) >> (((((/* implicit */int) (unsigned short)172)) - (164)))));
        var_26 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7]))) / (3392900075U)))) ? (((/* implicit */unsigned long long int) 1U)) : (arr_24 [i_7]))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_15)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            arr_29 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 15848444698072001188ULL))));
            var_27 ^= arr_26 [i_7] [i_8 + 1];
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_32 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6895923369281783214ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65344)))))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_11 [i_7] [i_9]))));
        }
    }
}
