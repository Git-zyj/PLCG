/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57472
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
    var_13 = ((/* implicit */unsigned long long int) 1008806316530991104LL);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)121), ((signed char)-121))))))) ? (min((((var_3) ? (arr_1 [22U]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [9LL] [i_0]))))), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 - 2])))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
                var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 2] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_4 [i_0 - 2] [(_Bool)1] [i_0 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_0 + 1])), (arr_4 [i_0 - 3] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned int) (~((+(7257073326828957169ULL)))));
                            arr_13 [i_0] [i_0] [i_2 + 1] [(short)12] [i_2 + 1] [(short)12] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2 + 1])) & (var_8)))), (((((/* implicit */unsigned int) arr_8 [i_1] [i_3])) % (arr_12 [i_0] [i_0 - 2] [i_0] [i_0 - 2])))));
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43461))) != (((long long int) arr_9 [i_2])))))));
                            var_17 *= ((/* implicit */short) (~(arr_11 [i_0] [i_1] [i_2 + 2] [i_3])));
                            arr_14 [i_0] [i_0 + 1] [i_0] [i_0] [(short)22] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (signed char)107)), (arr_12 [i_2 + 3] [i_2 + 2] [i_0 + 2] [i_0 + 2]))), (arr_12 [i_2 - 1] [i_2 + 3] [i_0 + 2] [i_0 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
