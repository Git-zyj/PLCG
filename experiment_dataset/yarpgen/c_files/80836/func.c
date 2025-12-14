/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80836
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
    var_16 |= max(((short)1852), (((/* implicit */short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)0)))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_2 - 1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) var_2);
                    arr_8 [i_1] = ((/* implicit */short) arr_3 [i_0] [(short)1] [(short)1]);
                    var_17 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_0]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            arr_11 [(signed char)3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)91))));
            arr_12 [i_0] [i_3] [(_Bool)0] = ((/* implicit */_Bool) var_1);
        }
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned long long int) ((((((long long int) var_7)) + (9223372036854775807LL))) >> (((((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1)))) + (115))))))));
        var_19 = ((unsigned short) ((((/* implicit */_Bool) max((1909560012), (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_4])))) : (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_14 [11])))))));
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) arr_13 [i_5] [i_5]);
        arr_19 [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (max((-229235142), (((/* implicit */int) (short)1)))) : (((((/* implicit */_Bool) (short)-1844)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)18940)))))) >= (((((/* implicit */int) ((4191333444U) != (((/* implicit */unsigned int) var_1))))) & (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (arr_22 [i_6] [i_6])));
        arr_23 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_6] [i_6]))));
        arr_24 [i_6] = ((/* implicit */unsigned int) arr_18 [i_6] [(unsigned char)15]);
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)5097)) : (var_6)));
}
