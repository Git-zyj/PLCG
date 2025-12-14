/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78684
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
    var_20 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                var_22 = ((/* implicit */short) min((((/* implicit */int) arr_2 [i_1])), (arr_3 [(short)19])));
                var_23 += arr_4 [2];
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_0 [12LL])) ? (((/* implicit */int) arr_6 [(short)2] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_0 [(short)6])))))));
                                var_25 = ((/* implicit */signed char) min(((~(((/* implicit */int) ((((/* implicit */_Bool) (short)16)) || (((/* implicit */_Bool) arr_1 [i_1]))))))), (var_13)));
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */int) arr_9 [i_0] [i_4] [i_3] [i_0])) : (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_4] [i_2 - 1] [i_0]))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
}
