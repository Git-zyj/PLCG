/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99862
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
    var_16 = ((/* implicit */unsigned char) max((max((((var_12) ? (((/* implicit */unsigned long long int) var_3)) : (var_4))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((unsigned int) max((var_13), (((/* implicit */unsigned short) (short)32743))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [3ULL] [(signed char)9] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [(short)1] [i_1 + 1])) ? (((/* implicit */int) var_5)) : (arr_3 [i_0] [i_0] [i_1 + 1]))) : (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_1 + 1]) > (arr_3 [(short)10] [i_1 + 1] [i_1 + 1]))))));
                    var_17 = ((/* implicit */short) var_15);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)119)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_2]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32731))) : (var_0))))))))));
                                var_19 = ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (short)6871)));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)123))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
