/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98702
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) -1626857477)) : (1557563943U))) - (((1557563962U) / (2737403357U)))))) * (((arr_2 [i_0]) / (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [10U]))) ? (((((/* implicit */_Bool) arr_1 [0] [9ULL])) ? (((/* implicit */unsigned long long int) var_14)) : (var_18))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 886327943U)) ? (var_10) : (((/* implicit */unsigned int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(-1960288055)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) | (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (var_5)))));
        var_22 = ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0] [13U]) | (arr_1 [i_0] [i_0]))));
        arr_3 [16] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1501023479U)) & (15656204345405089247ULL)))) ? (((((/* implicit */unsigned long long int) (+(arr_0 [i_0])))) | (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) var_9))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((arr_7 [i_0] [i_0] [i_2 + 1] [i_2]) ^ ((~(arr_7 [i_0] [i_0] [17] [11ULL])))));
                    arr_12 [i_1] [14ULL] [i_2] = ((/* implicit */int) ((max((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]), (arr_7 [i_2] [i_2] [i_2 + 2] [i_2]))) > (arr_1 [i_1 - 2] [i_1 - 2])));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((arr_2 [i_3]) % (((/* implicit */unsigned long long int) ((3140415482U) / (1557563935U)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_14 [i_4 - 1] [i_5 - 1])))) ? (arr_8 [i_3] [(signed char)14] [i_3] [i_3]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (1073479680U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                    arr_21 [i_5 - 1] [6] [6] = ((/* implicit */int) 0ULL);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_3])), (var_12)))))) ? (var_10) : (((/* implicit */unsigned int) var_7)))))));
                    var_25 ^= ((/* implicit */signed char) ((arr_17 [i_3] [i_3]) & ((~(((/* implicit */int) arr_15 [i_3]))))));
                    arr_22 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (2737403357U)))) & (max((((/* implicit */unsigned long long int) 1679272587U)), (var_12)))))) ? (((/* implicit */unsigned long long int) (~((~(var_7)))))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) (signed char)-96)), (var_13)))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned int) (signed char)95)), (0U))) : (((/* implicit */unsigned int) (+(var_7)))))))));
    var_27 += ((/* implicit */unsigned int) var_13);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) << (((var_9) - (345661789U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((((/* implicit */_Bool) var_10)) ? (var_10) : (var_19))), (3055804026U)))));
}
