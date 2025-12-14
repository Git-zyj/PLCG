/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61084
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((var_10) ^ (((/* implicit */unsigned int) ((int) (-9223372036854775807LL - 1LL))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) 9223372036854775807LL);
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1800356779U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0] [i_1])))))) ? (((arr_1 [i_1] [i_1]) >> (((min((((/* implicit */unsigned int) var_3)), (arr_3 [i_0] [i_0] [i_1]))) - (7659U))))) : ((+(arr_1 [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) % (var_1))))), ((-9223372036854775807LL - 1LL))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) ((var_10) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) % (((/* implicit */int) var_3)))))));
                    arr_16 [i_2] [i_2] [i_4] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-4825032142536946597LL)));
                    arr_17 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_9 [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        arr_30 [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((min((arr_0 [i_8 - 3] [i_8 - 2]), (arr_0 [i_8 - 2] [i_8 - 2]))) | (arr_21 [i_8 + 1])));
                        arr_31 [i_8 + 1] [i_6] [i_6] [i_8 + 1] = ((/* implicit */unsigned int) ((signed char) (signed char)30));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_35 [i_5] [i_6] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4825032142536946597LL)) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_23 [i_9])))))))) >= (((((/* implicit */_Bool) ((0U) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_9), ((signed char)-81)))) : (((/* implicit */int) arr_27 [i_5] [i_5] [i_7] [i_9]))))));
                        arr_36 [i_9] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1910856741480247851ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_6] [i_9]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_6] [i_7] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))))))) : (var_12)));
                    }
                    arr_37 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned char)255)))));
                    arr_38 [i_6] [i_6] = ((/* implicit */signed char) (unsigned char)1);
                }
            } 
        } 
    } 
}
