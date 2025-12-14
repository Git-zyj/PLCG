/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72681
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_3)), (var_0)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [6LL])), (-698695545)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-5558)) || (((/* implicit */_Bool) (short)5561))))) : ((~(-108474600)))))) ? (((arr_1 [(unsigned char)6]) * (((/* implicit */unsigned long long int) 765791284)))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) (short)-5562)), (var_11))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (arr_1 [2U])))))))));
        arr_2 [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35357)) ? (-765791284) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_18)) : (((765791284) | ((-2147483647 - 1)))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 22; i_5 += 1) 
                        {
                            arr_14 [i_1] [i_2] [i_3 - 1] [i_4] [i_1] = ((/* implicit */long long int) arr_9 [i_1] [i_5]);
                            arr_15 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_5 - 3])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))));
                            arr_16 [17LL] [i_2] [i_2 - 2] [15] [i_1] = ((/* implicit */unsigned char) (~(((long long int) (unsigned char)87))));
                        }
                        arr_17 [i_1] [i_1] [10U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_16) == (((/* implicit */long long int) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) arr_8 [15] [i_1] [i_3 - 1] [i_3]))))) : (max((arr_5 [i_1]), (((/* implicit */long long int) -242363807))))))) ? (((765791284) << (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [10LL])))))))));
                    }
                    arr_18 [i_1] [i_1] [i_3 - 1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)159)), (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) arr_9 [i_1] [i_1])) : (arr_11 [i_1] [i_3] [i_2 + 1] [i_1 + 3] [i_1])))));
                }
            } 
        } 
    } 
}
