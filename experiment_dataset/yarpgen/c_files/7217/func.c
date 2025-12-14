/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7217
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (var_2) : (((/* implicit */int) var_10))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1951323976131535860LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                arr_12 [15ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57540)) ? (1677515777U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_13 [7ULL] [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_14)));
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */int) (+(var_14)));
            }
            var_20 = ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-10)) : (((/* implicit */int) (unsigned short)7991)))));
        }
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_11 [i_1])))) : (arr_8 [(unsigned short)12] [i_1])));
        arr_15 [i_1] = ((/* implicit */unsigned short) -434714221);
    }
    var_22 = ((/* implicit */_Bool) (-(var_14)));
    var_23 = var_0;
}
