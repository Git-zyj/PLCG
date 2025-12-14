/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84504
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
    var_12 += ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (((((/* implicit */_Bool) 19U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4)))))) == (((/* implicit */int) max((var_2), (((((/* implicit */int) var_0)) == (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned long long int) 4294967294U);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_3]))) >= (arr_9 [i_1])))))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((arr_3 [i_0] [i_3]) ? (arr_4 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_3]))))) < (19U))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [(unsigned char)12] [i_2 + 1])) <= (((/* implicit */int) arr_10 [(_Bool)1] [i_2 - 1])))))))))));
                            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (~((((_Bool)0) ? (((/* implicit */int) ((signed char) 4294967288U))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) ((arr_9 [i_5]) | (((unsigned int) ((894220984U) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */signed char) arr_7 [i_5] [i_5 + 1] [i_5 - 1] [i_5]);
    }
}
