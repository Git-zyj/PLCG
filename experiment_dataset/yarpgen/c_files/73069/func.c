/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73069
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3 + 1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44))))), ((~(((/* implicit */int) arr_8 [i_1] [i_3]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) min((arr_11 [i_4] [i_2]), (arr_6 [i_0] [i_1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((13ULL), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_4]))))) && (((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3 - 1])))))))));
                                var_13 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                                var_14 = ((/* implicit */long long int) ((signed char) (-(-901694571379502768LL))));
                                var_15 = ((/* implicit */int) min((arr_11 [i_1] [i_3 + 3]), (((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)7)))) + (2147483647))) >> ((~(4294967295U))))))));
                                var_16 = ((/* implicit */signed char) arr_3 [i_1] [i_3 + 1] [i_4]);
                            }
                        } 
                    } 
                    var_17 -= arr_3 [i_0] [i_1] [i_2];
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) max((arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5] [i_6]), (arr_5 [i_1] [i_5] [i_1])))) << (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [i_6]))))), (((((/* implicit */_Bool) 138513903840796159LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]))) : (((18U) | (1U)))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((878777677U) < (arr_3 [i_0] [i_1] [i_0]))) ? (((/* implicit */unsigned int) -2109770347)) : (4294967295U)))) ^ (((((/* implicit */_Bool) ((int) (signed char)17))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6])) & (((/* implicit */int) (_Bool)1))))) : (arr_6 [i_1] [i_5])))));
                                var_20 = ((/* implicit */unsigned short) -8691149261770525852LL);
                                var_21 = ((/* implicit */unsigned char) (!((!(arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */_Bool) (signed char)121);
    var_23 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (long long int i_7 = 4; i_7 < 13; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) min((((/* implicit */long long int) 1U)), (arr_11 [i_7] [i_8])));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (int i_11 = 2; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_35 [i_7 - 2] [i_9] [i_9] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_9] [i_10] [i_9] [i_10] [i_11])) || (((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_9]))))));
                                var_25 = ((/* implicit */short) arr_2 [i_7 - 4] [i_11 + 1]);
                                var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_9] [i_9] [i_9])), (-1623074903)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_7 - 4] [i_8]) <= (17247004111289589933ULL))))) : (max((arr_6 [i_7] [i_8]), (((/* implicit */long long int) arr_34 [i_7] [i_7 - 2] [i_7 - 1] [i_8] [i_9] [i_10] [i_11 + 1])))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) 1623074902)) & (arr_3 [i_7 + 2] [i_8] [i_11 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_11);
}
