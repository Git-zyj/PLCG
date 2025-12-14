/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89901
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
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (var_0)))) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_16)))) : (min((((/* implicit */int) var_8)), (var_14)))))) ^ (var_4)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) ((arr_1 [i_0]) < (arr_1 [i_0]))))));
        var_21 = ((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_22 = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1])))))) << (((/* implicit */int) arr_4 [i_0] [i_0]))));
                var_24 += ((/* implicit */signed char) arr_6 [i_0] [i_1 + 1] [i_0]);
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
            }
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                arr_10 [i_1] [i_1] [i_3] = arr_5 [i_0] [i_1] [i_0] [i_3];
            }
            arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)48)) ^ (((/* implicit */int) (_Bool)1))))) & (17109764259325229377ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) + (((/* implicit */int) arr_14 [i_5]))))));
            arr_18 [i_4] = ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5])) ? (((((/* implicit */int) arr_14 [i_4])) << (((arr_13 [i_4]) - (51941103))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) > (((/* implicit */int) arr_14 [i_4]))))));
        }
        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_13 [i_4])), (((((/* implicit */unsigned int) (+(arr_13 [i_4])))) * (((arr_12 [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4])))))))));
        arr_19 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-108)), ((unsigned char)235)))) * (min((((/* implicit */int) arr_14 [i_4])), (arr_13 [i_4]))))) << (((max((((arr_12 [i_4] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))) : (arr_12 [i_4] [i_4]))))) - (4209369447U)))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_13 [i_4])) - ((-((+(arr_12 [i_4] [i_4])))))));
        var_28 = ((/* implicit */long long int) ((((((arr_13 [i_4]) > (arr_13 [i_4]))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_4])) - (arr_13 [i_4])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_4]) ? (arr_16 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))) ? (((((/* implicit */int) (short)-14857)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) != (arr_13 [i_4])))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) arr_15 [i_6] [i_6] [i_6]);
        arr_25 [i_6] [i_6] = max((((((/* implicit */_Bool) max((arr_22 [i_6]), (arr_22 [i_6])))) ? (arr_16 [i_6] [i_6] [i_6]) : (((arr_14 [i_6]) ? (arr_16 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [i_6]))))))), (((((/* implicit */_Bool) max((arr_23 [i_6] [i_6]), (((/* implicit */unsigned char) arr_21 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6]))) : (arr_16 [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned int) ((arr_15 [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_20 [i_6] [i_6]))))))));
        var_29 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((arr_15 [i_6] [i_6] [i_6]) && (((/* implicit */_Bool) arr_22 [i_6]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_23 [i_6] [i_6]))))) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) : (max((arr_13 [i_6]), (((/* implicit */int) arr_22 [i_6]))))))));
        arr_26 [i_6] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_6])), (arr_12 [i_6] [i_6])))) ? (((arr_16 [i_6] [i_6] [i_6]) >> (((arr_16 [i_6] [i_6] [i_6]) - (719996697U))))) : (((/* implicit */unsigned int) ((arr_14 [i_6]) ? (((/* implicit */int) arr_23 [i_6] [i_6])) : (((/* implicit */int) arr_21 [i_6] [i_6]))))))) ^ ((((+(arr_16 [i_6] [i_6] [i_6]))) >> ((((~(((/* implicit */int) arr_14 [i_6])))) + (15))))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            {
                var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_21 [i_7] [i_8])) ? (((/* implicit */int) arr_31 [i_7])) : (arr_13 [i_7])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_23 [i_7] [i_8])), (arr_12 [i_7] [i_8])))) ? (((/* implicit */unsigned long long int) (-(8916490575823887756LL)))) : (max((arr_30 [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_12 [i_7] [i_8]))))))));
                arr_32 [i_7] [i_7] = ((/* implicit */unsigned short) arr_14 [i_8]);
            }
        } 
    } 
}
