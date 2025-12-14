/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76695
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_12))));
    var_16 = ((/* implicit */signed char) ((var_13) - (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (arr_3 [(unsigned short)5] [i_1] [i_1])))) : (((((/* implicit */_Bool) max((4294967281U), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) (signed char)53)) ? (15038617648238104965ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39600))))) : (((/* implicit */unsigned long long int) var_13))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_8 [i_1] [i_2] [6LL])) : (((((/* implicit */_Bool) 14086368126756261181ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [8LL] [8LL])) : (((/* implicit */int) var_6))))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned short) (unsigned char)52);
                                arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (signed char)125))))));
                                var_19 ^= (signed char)-21;
                            }
                            for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                            {
                                var_20 = ((/* implicit */long long int) 8128U);
                                arr_17 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) var_9);
                                arr_18 [i_5] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~((-(2080486124)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_4)) ? (2080486124) : (((((/* implicit */_Bool) var_9)) ? (-1672345569) : (((/* implicit */int) var_5))))))));
}
