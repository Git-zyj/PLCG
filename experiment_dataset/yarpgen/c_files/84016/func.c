/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84016
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */int) ((-2458896927112237813LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45940)))));
                                arr_14 [(signed char)3] [i_1] [i_1] [17] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) % (var_10)))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23455))) : (4294967275U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-20957)))))));
                                arr_15 [i_3] [i_3] [i_2 - 2] [18ULL] [(unsigned short)0] [(signed char)6] [i_1] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) 539287026402281638ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)42080)), (arr_9 [(_Bool)1] [i_1] [(unsigned short)0] [i_2] [(signed char)12])))) ? (arr_5 [(signed char)10] [(unsigned short)13] [(unsigned short)7]) : (((/* implicit */int) arr_1 [3ULL]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)4526)), (var_0)))) ? (max((arr_2 [(unsigned short)17] [i_4]), (arr_2 [i_0 - 1] [11LL]))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)0)))))));
                                arr_16 [1LL] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8171253415245494285ULL)) ? (arr_7 [13] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47683))) : (var_2))))));
                            }
                        } 
                    } 
                    arr_17 [6ULL] [i_0] = ((/* implicit */int) 1054429365306109283LL);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */unsigned short) var_10);
}
