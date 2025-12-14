/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69498
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
    var_13 = ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */_Bool) max((((((/* implicit */int) var_5)) % (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)126))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) (~(arr_1 [i_0])));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_16 += ((/* implicit */signed char) var_3);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_4] [14ULL] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0])))) >= (((/* implicit */int) var_9))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (short)4315))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((/* implicit */int) var_10)))))));
                            arr_14 [(short)24] [i_1] [i_2] [(short)24] [i_4] [i_2] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2]))));
                            var_19 = ((/* implicit */short) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)2))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [(unsigned char)13]);
        }
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_20 = ((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])) != (((/* implicit */int) min((arr_9 [i_5] [13ULL] [(_Bool)1] [(unsigned char)23]), (arr_9 [i_5] [i_5] [i_5] [i_5])))));
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)4315))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68))))) : (((var_8) + (var_8)))))) ? (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) (unsigned char)126)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + ((-(arr_1 [i_5])))));
        var_23 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5]))))))))));
    }
}
