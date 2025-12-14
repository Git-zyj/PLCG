/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83388
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 - 1]))))), (min((((/* implicit */long long int) arr_1 [i_0 - 1])), (arr_0 [i_0 - 2]))))) == (((/* implicit */long long int) ((/* implicit */int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
        arr_4 [i_0 - 2] [2] = ((/* implicit */short) (-(((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (signed char i_2 = 4; i_2 < 20; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = min((((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [(short)11] [i_2 - 2] [i_2 - 4] [i_2 - 1])) >= (((/* implicit */int) arr_9 [i_2] [i_2 - 2] [i_2 - 4] [i_2 - 1]))))), (((unsigned short) var_18)));
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_1] [i_3])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    arr_12 [i_1] [(unsigned short)9] [(short)15] [i_3] = ((((/* implicit */_Bool) (unsigned char)125)) ? (5767325845529239164LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10982))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_3] = ((/* implicit */short) arr_13 [i_5]);
                                var_22 = ((/* implicit */unsigned short) var_8);
                                var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_16 [i_2] [i_2 + 1] [i_2] [i_2 - 4]), (arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
