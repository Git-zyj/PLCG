/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8725
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0 + 2] [(unsigned char)9] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) ? (8657976046256660895LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
            arr_6 [i_1] = (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_3 [i_0])))));
            arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((224469448245342214LL) ^ (-224469448245342215LL))))));
        }
        for (signed char i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0 + 3] [i_0 + 3] [(signed char)9] [i_4] [i_4] [i_5] [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 1]))) : (var_8)));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) var_9);
                            arr_20 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) 224469448245342214LL);
                            arr_21 [i_0] [13U] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 2] [i_2] [i_0 + 1] [i_0 + 3]))) - (var_6)));
        }
        for (signed char i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
        {
            arr_27 [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-44)))))));
            arr_28 [i_6] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
        }
        arr_29 [i_0] = ((/* implicit */unsigned int) (unsigned short)29686);
    }
    var_11 |= ((/* implicit */signed char) ((9223372036854775807LL) + ((-(((((/* implicit */_Bool) var_6)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    var_12 = ((/* implicit */int) var_0);
}
