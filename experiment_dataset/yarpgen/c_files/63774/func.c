/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63774
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) var_3);
            var_18 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_3 [i_1])))) ? (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (var_2))))));
        }
        for (short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65521)) > (((/* implicit */int) arr_1 [i_2 - 1] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_3))));
            var_20 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
            arr_9 [i_0] [i_2 + 1] = ((/* implicit */int) var_9);
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        arr_19 [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_4 - 1] [i_4 - 1]))));
                        arr_20 [i_5] [i_4] [i_3] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_5]))));
                    }
                } 
            } 
            arr_21 [i_0] |= ((/* implicit */unsigned short) (_Bool)1);
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0]))));
        }
        arr_23 [i_0] [i_0] = ((/* implicit */signed char) var_10);
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
    {
        arr_27 [i_6] [i_6] &= ((/* implicit */signed char) arr_12 [i_6] [(unsigned short)2] [i_6]);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6])) ? (arr_7 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_24 [i_6] [i_6])))), (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6]))))))))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2118724174U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))) : ((-(((/* implicit */int) (short)1))))));
}
