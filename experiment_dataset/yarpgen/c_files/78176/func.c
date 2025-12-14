/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78176
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
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1 - 1])) ? (var_6) : (((/* implicit */long long int) arr_1 [i_0 + 2] [i_1 - 1]))))) ? (((((var_6) + (9223372036854775807LL))) >> (((arr_1 [i_0 + 2] [i_1 - 1]) - (392846190))))) : (((/* implicit */long long int) ((unsigned int) (signed char)-29)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */long long int) (signed char)71);
                                var_23 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_3] [i_3])) ? (var_11) : (((/* implicit */unsigned int) var_5))))))), (min((((((/* implicit */_Bool) (signed char)-12)) ? (11408381667340659599ULL) : (11408381667340659592ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_11 [i_0] [i_1] [(signed char)5] [(signed char)5] [18LL])) ^ (arr_5 [i_0 + 2] [i_0 - 1] [3U]))))))));
                                var_24 *= ((/* implicit */int) min((min((((unsigned long long int) arr_4 [i_0] [(_Bool)1])), (((arr_10 [i_0] [4U] [i_0] [i_0] [i_4 + 2]) >> (((((/* implicit */int) arr_2 [i_3 + 2])) - (76))))))), (((/* implicit */unsigned long long int) var_14))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_10) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)29943))) : (-9223372036854775801LL))) : (((/* implicit */long long int) ((var_16) ? (((/* implicit */int) (short)-24284)) : (((/* implicit */int) var_19)))))))));
                                arr_18 [(short)10] [i_1 - 1] [5] [5] = ((/* implicit */_Bool) min((((long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [11])) ? (-930474453) : (1817109662))), (((int) var_0)))))));
                                arr_19 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((arr_17 [i_1]), (var_9)))), (((((/* implicit */_Bool) 13757754646114797482ULL)) ? (17ULL) : (((/* implicit */unsigned long long int) -2147483627))))));
                                var_26 = ((/* implicit */int) ((signed char) max((arr_11 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 - 1]), (((/* implicit */unsigned int) var_5)))));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */short) ((((((/* implicit */unsigned long long int) 1041838158U)) * (14854051533075970327ULL))) % (((/* implicit */unsigned long long int) (-(arr_14 [i_0 + 2] [i_0 - 1] [i_2 + 1] [i_1]))))));
                }
            } 
        } 
    } 
}
