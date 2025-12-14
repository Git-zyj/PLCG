/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79463
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_7)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12755))))) << (((((/* implicit */int) var_6)) + (122)))))) ? ((+((~(2147483647))))) : (((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) (+(((unsigned int) var_11))))), ((((-(var_4))) / (((/* implicit */long long int) min((-1156217381), (((/* implicit */int) var_8)))))))));
                    var_19 -= ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    var_20 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_3 - 2])) ? (((/* implicit */int) arr_15 [12LL] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_15 [i_4] [i_3] [i_3 + 1]))))), (((long long int) arr_15 [i_5] [i_3] [i_3 - 2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max(((_Bool)1), ((!(((/* implicit */_Bool) arr_10 [i_7] [i_3 - 1])))))))));
                                arr_23 [(short)8] [(unsigned char)10] [i_5] [i_6] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) + (((/* implicit */int) ((((_Bool) arr_20 [i_3 - 2] [i_3] [i_5] [i_6] [i_3 - 2])) || (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [18])) || (((/* implicit */_Bool) (signed char)-17)))))))));
                                var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (var_1)))) + (((/* implicit */int) (unsigned char)250)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_27 [i_8] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_3] [i_5] [i_8])) / ((+(((/* implicit */int) var_2))))))) ? (min((2042628096), (((/* implicit */int) arr_16 [i_3 - 2])))) : (((((/* implicit */int) arr_15 [i_3] [i_8] [i_3 - 1])) ^ (((/* implicit */int) arr_15 [i_3] [i_8] [i_3 + 1]))))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(arr_19 [(signed char)14] [(signed char)14] [i_5] [i_8] [i_8]))), (((-536870912) & (((/* implicit */int) arr_22 [i_3 - 2] [i_3] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3] [i_3 - 2])) >> (((((/* implicit */int) ((unsigned char) (unsigned short)23910))) - (72)))))) : (((((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [14LL] [14LL]))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_3])), (3111620454U))))))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_14)))))) ? ((-(arr_13 [i_4] [i_4] [i_9 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21930))) > (arr_13 [i_9 + 1] [i_9] [i_9 - 1])))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) max((arr_11 [i_4] [i_5]), ((_Bool)1)))), (arr_15 [i_9 + 1] [i_3] [i_5])))) | (((/* implicit */int) ((arr_26 [i_3 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9]) || (((/* implicit */_Bool) arr_30 [i_5] [i_9 - 1] [i_9] [i_9] [i_5] [(short)14])))))));
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((arr_29 [i_3] [(unsigned short)2] [i_3] [i_3 + 1] [i_3 + 1]), (((/* implicit */int) arr_26 [i_4] [i_4] [i_5] [11ULL] [i_9]))))))) || (((/* implicit */_Bool) 13078469167115698180ULL))));
                        var_27 = max((((arr_25 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 2]) + (arr_25 [i_3] [i_3] [i_5] [i_9 + 1]))), (((/* implicit */long long int) ((int) arr_28 [i_9 - 1] [i_4] [i_5] [i_3 - 1]))));
                    }
                }
            } 
        } 
    } 
}
