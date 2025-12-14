/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97909
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
    var_15 += ((/* implicit */short) (-(((((/* implicit */int) var_3)) + (((/* implicit */int) ((unsigned short) -6203955683618803481LL)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_16 = arr_0 [i_0 - 2];
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((arr_1 [(unsigned short)10] [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))) * (var_4))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) : (min((((/* implicit */long long int) arr_0 [(unsigned short)10])), (arr_1 [i_0] [i_0 - 3])))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4931)) && (((/* implicit */_Bool) (unsigned short)4912))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((arr_1 [i_1] [i_1]) + (9223372036854775807LL))) << (((((arr_3 [i_1]) + (9000997962537549023LL))) - (46LL)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned short)4915))));
            var_20 += ((/* implicit */unsigned char) ((_Bool) arr_9 [i_2] [i_3 + 3]));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3 - 2] [(_Bool)0])) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)124)))))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_9 [i_3 + 1] [i_3 - 2]);
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_10 [i_2]) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) arr_10 [(unsigned char)6]))))));
        var_23 = ((/* implicit */signed char) ((((long long int) arr_11 [i_2] [i_2])) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((unsigned short) arr_19 [i_4] [i_5]));
            var_26 = ((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4]);
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 22; i_8 += 4) 
                    {
                        for (short i_9 = 3; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned long long int) var_12);
                                var_28 = ((/* implicit */unsigned short) (signed char)-113);
                                var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_6] [i_4] [i_8 + 1] [i_8 - 1])) ? (((/* implicit */int) arr_26 [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_9] [i_9 - 1])) : (((/* implicit */int) arr_26 [i_8] [i_8 - 2] [i_8 - 2] [i_8 + 1] [(_Bool)1] [i_9 + 4]))));
                                var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4931)) ? (arr_25 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((unsigned long long int) arr_14 [i_8] [i_6]))));
                                var_31 = ((unsigned int) arr_27 [i_4] [i_9 + 3] [i_4] [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    }
}
