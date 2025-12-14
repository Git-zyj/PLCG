/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98576
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_6) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_2] [i_3])) : (((/* implicit */int) var_1))))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_1] = ((((/* implicit */int) var_7)) != (((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 2062358936U))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 2232608368U))))) : (arr_0 [i_2 + 2])));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 3])) ? (arr_1 [i_1 + 1] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_17 += ((/* implicit */short) ((unsigned char) ((unsigned short) (unsigned short)58556)));
                    }
                } 
            } 
            var_18 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1])) : (((/* implicit */int) var_12)))));
        }
        for (long long int i_4 = 1; i_4 < 8; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_2 [i_4 + 2] [i_4 + 3])) : (((arr_0 [i_0]) & (((/* implicit */int) arr_14 [i_0] [i_4]))))))));
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4 + 1] [i_4]))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4))))));
        }
        var_20 ^= ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned short) arr_15 [i_0] [i_0])), (arr_5 [i_0] [i_0]))));
    }
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) var_3)) : (var_11))) | (var_13)));
}
