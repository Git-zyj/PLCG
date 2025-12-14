/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8345
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
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((unsigned char)251), (var_4)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) (unsigned char)4)))))) == (((/* implicit */int) min((((/* implicit */short) var_7)), (((short) var_7)))))));
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((long long int) (short)-18461)) : (((/* implicit */long long int) ((unsigned int) ((unsigned int) (unsigned char)251)))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) -1LL);
                                arr_14 [i_1] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_17)) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [i_2 + 2] [i_0])))), (arr_11 [i_0] [i_1] [i_2] [i_3] [11])));
                                var_21 = ((((/* implicit */int) arr_5 [i_2 - 4])) * (((/* implicit */int) var_0)));
                            }
                        } 
                    } 
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 - 4] [i_2] [i_2 - 4] [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 3])) ? (((/* implicit */int) arr_12 [i_2 - 1] [14ULL] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_8 [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 - 3] [i_2 - 1]))))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((var_15) / (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (1429998832210849566ULL) : (((/* implicit */unsigned long long int) var_9)))));
    var_24 = ((/* implicit */unsigned char) ((unsigned short) var_11));
}
