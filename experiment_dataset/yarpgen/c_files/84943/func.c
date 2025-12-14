/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84943
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
    var_15 -= ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32451))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_18 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_2 [i_0] [4ULL]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) (signed char)-3);
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_4 [(unsigned char)6]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_21 ^= ((arr_6 [i_2] [i_2]) + (((((/* implicit */_Bool) 0ULL)) ? (arr_7 [i_2]) : (0ULL))));
        arr_8 [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-63)), (((arr_6 [i_2] [i_2]) + (3060100593558910815ULL)))))) ? (((/* implicit */unsigned long long int) 1269321780)) : ((-(0ULL))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */signed char) max(((+(max((arr_14 [i_3] [(signed char)5] [i_5]), (0ULL))))), (((/* implicit */unsigned long long int) (signed char)6))));
                    arr_18 [i_3] [(signed char)10] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? ((~(max((arr_7 [i_4]), (((/* implicit */unsigned long long int) (unsigned char)243)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32451)) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_9 [i_3] [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (~(((long long int) arr_11 [i_3]))));
                                var_23 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)90)), (arr_9 [i_5] [i_5])))) < (((/* implicit */int) (_Bool)1))))), ((-(((/* implicit */int) arr_9 [i_3] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
