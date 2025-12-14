/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96097
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_10 = (+(((/* implicit */int) (short)-32766)));
        var_11 = ((/* implicit */signed char) (!(arr_1 [i_0] [10])));
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (((max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (3867316851U))) << (((-1258776818) + (1258776840)))))));
        var_13 *= ((/* implicit */short) max((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_1 [i_1] [i_1])))), (((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))))))), ((+((-(var_3)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned int) (signed char)-122);
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_2])))) ? (((/* implicit */long long int) min((arr_6 [i_1] [i_3]), (arr_6 [i_1] [i_2])))) : (((arr_12 [i_5 + 1] [i_5 - 1] [i_4] [i_3 + 2]) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [(signed char)7] [i_3] [i_3] = ((/* implicit */signed char) (-(min((max((((/* implicit */unsigned long long int) (signed char)-122)), (8241967893135013120ULL))), (((/* implicit */unsigned long long int) var_7))))));
                    arr_17 [i_2] = ((/* implicit */short) min(((+(arr_12 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 1]))), (((/* implicit */long long int) arr_15 [i_2]))));
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)-32766)) % (((/* implicit */int) (_Bool)1))))))) : (max(((-(var_3))), (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_0)))))))));
                    arr_18 [i_1] [i_2] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_21 [i_6] = ((/* implicit */long long int) var_2);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) && (((/* implicit */_Bool) (signed char)67))));
    }
    var_18 -= ((/* implicit */unsigned char) -8011895938346270847LL);
    var_19 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+(751174673)))))));
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    var_21 = ((/* implicit */long long int) ((max((var_3), (var_3))) >> (((((((/* implicit */_Bool) ((427650434U) << (((((/* implicit */int) (unsigned short)6673)) - (6667)))))) ? (var_3) : (((/* implicit */unsigned int) ((var_4) >> (((var_6) - (1002127028)))))))) - (2985522688U)))));
}
