/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71725
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (signed char)0))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-11094)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7899))) : (9223372036854775805LL)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)31888))));
        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)0]))) : (((long long int) var_10))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_26 = ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (signed char)-8)));
                        arr_12 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_3 + 1])) || (((/* implicit */_Bool) (signed char)-4))));
                        var_27 -= ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)1368)))) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)28736)) < (((/* implicit */int) arr_2 [(unsigned short)4])))))));
                        arr_13 [(short)16] [i_3] [i_2] [(short)16] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12703)) << (((((/* implicit */int) arr_10 [i_3 + 1] [i_2 - 1] [i_3 + 1])) - (51304)))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) var_16);
    }
    var_29 = (+((((!(((/* implicit */_Bool) (unsigned short)1349)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (var_9))));
}
