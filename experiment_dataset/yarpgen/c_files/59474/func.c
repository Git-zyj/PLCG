/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59474
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [i_4] [i_3] [i_2] [i_1] [(unsigned char)10]), (((/* implicit */unsigned int) var_5))))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) (unsigned char)200)) ^ (((/* implicit */int) (signed char)67))))))) % (min((arr_3 [i_2 - 1] [i_4 + 1] [i_4 - 2]), (arr_3 [i_2 + 1] [i_4 - 1] [i_4 + 1]))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_1] = arr_0 [i_2] [(unsigned char)11];
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_4] [i_0] [i_4] |= ((/* implicit */short) min((max((arr_1 [(unsigned char)13] [i_4 - 2]), (((/* implicit */unsigned long long int) arr_6 [i_4 + 1] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_4 + 1] [i_2] [i_2 - 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_0] [i_2 - 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] |= ((/* implicit */unsigned char) -503414905);
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (503414905) : (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) var_12)))) < (min((((/* implicit */int) var_12)), (((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))))));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (var_9)))));
}
