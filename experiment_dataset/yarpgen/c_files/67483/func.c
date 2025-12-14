/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67483
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) var_6)) ? (arr_1 [20U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [7] [i_1] [i_1] [i_1] [i_1] [i_1] [22ULL])) || (((/* implicit */_Bool) 3))))))));
                                arr_17 [i_0] [4ULL] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(4736604128918794520LL)));
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
                            {
                                var_17 &= ((((/* implicit */int) var_12)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_6)))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-4736604128918794521LL) - (((/* implicit */long long int) arr_11 [i_0] [i_0] [(signed char)18] [i_0]))))) ? (((((/* implicit */_Bool) (short)27790)) ? (arr_0 [i_0] [i_0]) : (var_1))) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [5ULL] [(short)20]))));
                                arr_20 [(short)14] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_18 [(unsigned char)4] [(unsigned short)19] [i_5 + 1] [i_5 + 1] [i_5 - 1]) > (arr_18 [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                            }
                            for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1392480149)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27789))) : (7919799707590013536LL)));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) arr_14 [(short)17] [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [i_2])))) + (2147483647))) << (((6294609683189842310ULL) - (6294609683189842310ULL))))))))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) var_8)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max(((((-(((/* implicit */int) var_7)))) != (var_0))), (((_Bool) ((((/* implicit */_Bool) (unsigned short)48550)) || (((/* implicit */_Bool) var_12)))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (((min((((/* implicit */unsigned long long int) (unsigned char)235)), (11479996273370669397ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) var_3)))))))));
}
