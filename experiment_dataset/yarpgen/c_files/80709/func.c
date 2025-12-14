/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80709
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((short) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 ^= (((!(((/* implicit */_Bool) arr_9 [i_0 + 2] [i_3 - 1] [i_2] [i_3] [3ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))) : (((unsigned long long int) arr_9 [i_0 + 3] [i_3 + 2] [7ULL] [i_3 + 2] [i_4])));
                                var_20 -= ((/* implicit */unsigned int) ((((arr_9 [i_0] [i_0 + 4] [i_3 + 2] [i_1 - 1] [i_3 + 1]) < (arr_9 [i_0 + 1] [i_0 + 4] [i_1 + 2] [i_1 - 1] [i_3 + 1]))) ? (arr_9 [2ULL] [i_0 + 4] [i_2] [i_1 - 1] [i_3 + 1]) : (((((/* implicit */_Bool) arr_9 [i_3] [i_0 + 4] [i_1 + 1] [i_1 - 1] [i_3 + 1])) ? (arr_9 [i_3] [i_0 + 4] [i_2] [i_1 - 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                                arr_13 [i_1] [i_1] [i_2] [(unsigned short)3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]), (arr_12 [i_3] [i_3 + 1] [i_3] [(short)0] [i_3 + 1] [i_3]))))) * (max((((/* implicit */unsigned int) (_Bool)1)), (168710822U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                arr_18 [i_1 - 1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
                                var_21 = arr_16 [i_0] [i_0] [i_1] [i_6 + 2] [i_6];
                                var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6 + 1] [i_6] [i_5] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) 1593384749)) ? (((/* implicit */long long int) -1593384749)) : (3700736486678414434LL))) : (arr_4 [i_1] [i_1 - 1] [i_1])))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (min((((/* implicit */unsigned long long int) 4261168931U)), (279223176896970752ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
    {
        var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_20 [i_7])))))) <= (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_7]))));
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_25 [i_7] = ((((/* implicit */_Bool) 1432300594U)) ? (4123291726U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
            var_24 = var_13;
        }
        for (int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            var_25 = max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (144385239U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)15119)) : (((/* implicit */int) var_5))))));
            var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-15131)), ((unsigned short)2))))) / ((((_Bool)1) ? ((~(15728640U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61144))))));
            var_27 = ((/* implicit */int) arr_22 [i_7]);
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            arr_30 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_26 [i_7 + 2] [i_7 + 1] [i_7 + 2]))));
            var_28 *= ((/* implicit */int) ((unsigned int) 18167520896812580863ULL));
        }
        var_29 = arr_27 [i_7 + 1] [i_7 + 2];
    }
    /* LoopNest 3 */
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 3; i_13 < 18; i_13 += 3) 
            {
                {
                    arr_38 [19U] [i_13] [i_12] = ((/* implicit */int) var_0);
                    arr_39 [i_12] [i_12] [8U] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((0U) != (((/* implicit */unsigned int) arr_31 [i_13 - 1])))))));
                }
            } 
        } 
    } 
}
