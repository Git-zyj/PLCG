/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78158
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_10))));
    var_12 = ((/* implicit */unsigned long long int) ((((long long int) ((var_8) ^ (-1)))) ^ ((~(((var_9) ^ (var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)28635))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_1]), (var_10)))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((arr_4 [i_2]) | (arr_4 [i_2])))) : (((((/* implicit */unsigned int) ((((-1919945339) + (2147483647))) << (((/* implicit */int) (_Bool)1))))) ^ (((arr_6 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    arr_19 [i_0] = ((/* implicit */unsigned short) ((int) ((unsigned int) arr_17 [i_0])));
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_5 - 3] [i_0] [(unsigned short)8] [i_5 - 3])) ? (arr_8 [i_5 - 2] [i_0] [i_0] [i_1]) : (arr_8 [i_5 + 1] [i_0] [i_5] [i_0])))));
                    var_15 = ((max((arr_14 [i_5] [(short)7] [i_5 - 3] [i_5 - 3]), (arr_14 [i_5] [i_5 + 2] [i_5 + 1] [i_5 - 3]))) + ((-(arr_14 [i_5] [i_5 - 1] [i_5 - 3] [i_5 + 2]))));
                }
                var_16 = ((/* implicit */_Bool) (-(var_6)));
            }
        } 
    } 
}
