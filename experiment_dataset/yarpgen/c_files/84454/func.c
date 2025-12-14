/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84454
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (~(arr_9 [i_3] [i_3 - 4] [i_1] [i_1])));
                        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_2] [i_1]) : (arr_2 [i_1] [i_2])));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0] [i_1])) || (((/* implicit */_Bool) 0LL)))) || ((!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0]))))));
        }
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_3) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36673)))))))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((int) var_2)))));
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_7))));
        var_22 = ((/* implicit */unsigned char) var_15);
        var_23 = ((/* implicit */unsigned long long int) var_4);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_6 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_4])), (var_7))))))) : ((-(((((/* implicit */int) var_1)) & (((/* implicit */int) var_10))))))));
    }
    for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) var_12)));
        var_25 -= ((/* implicit */unsigned long long int) -1999257084);
        arr_20 [10U] |= ((/* implicit */unsigned short) ((int) (-((-(((/* implicit */int) (_Bool)0)))))));
        var_26 = ((((/* implicit */_Bool) ((80026054) | (((/* implicit */int) arr_15 [i_5 + 1]))))) ? (((arr_7 [i_5 - 2] [i_5] [i_5 - 2]) + (arr_7 [i_5 + 1] [i_5 - 1] [9LL]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))));
        var_27 -= ((/* implicit */unsigned short) (~(max((178583945U), (((/* implicit */unsigned int) ((signed char) 144044819331678208ULL)))))));
    }
    var_28 = ((/* implicit */long long int) var_14);
}
