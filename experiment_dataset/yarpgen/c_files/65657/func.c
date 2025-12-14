/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65657
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
    var_20 *= ((/* implicit */unsigned int) max((15872168344537673464ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_19) ? (((/* implicit */long long int) var_15)) : (var_0)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (var_0)))) >= (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (unsigned short)7107)))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_0] [i_0] [16LL] [i_0])))) - (((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3 - 1] [i_0])) ? (arr_3 [i_3 + 2] [i_0]) : (arr_3 [i_3 - 1] [i_0])))));
                                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)4)))) >> (((((/* implicit */int) max(((unsigned char)182), (((/* implicit */unsigned char) arr_4 [i_0]))))) - (155)))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [14U]))))), (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_2] |= ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned char) var_2);
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(max((((arr_5 [i_5] [i_5]) % (arr_9 [i_5] [i_5 + 1] [i_5] [i_5]))), (((/* implicit */long long int) (_Bool)1))))));
        var_23 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)4651)) && (((/* implicit */_Bool) (+(-4150074136997372891LL)))))) ? (((/* implicit */int) var_5)) : (((int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
}
