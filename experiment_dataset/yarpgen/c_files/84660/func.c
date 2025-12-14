/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84660
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (+(1259897467459363441ULL)));
                var_13 *= ((/* implicit */int) ((max((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (var_11))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                arr_6 [i_0] [i_1] [i_1] = 1600310636U;
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) var_7);
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_11 [12] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10848))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_6);
}
