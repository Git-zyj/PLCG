/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87544
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_2))))) | (min((var_7), (((/* implicit */unsigned int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (var_4)))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_0) <= (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_2] [i_1])), (var_7)))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0]))))) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1])), (arr_8 [i_0] [i_1 + 2] [i_1] [i_3] [i_4]))))));
                                arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_10 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) arr_5 [i_1]))))) | (((/* implicit */int) arr_4 [i_0] [i_1] [i_3] [i_1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_4]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))) ^ (var_7)))))) : (((((/* implicit */_Bool) min((var_2), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_0 [i_0 + 3])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                }
            } 
        } 
    } 
}
