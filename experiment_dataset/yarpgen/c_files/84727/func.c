/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84727
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [2ULL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) 311600088))))) ? (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0])) : (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((long long int) 4194422164039693921ULL));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8734967944724500027LL)) ? (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-3691849165112439203LL)))), (max((((/* implicit */unsigned long long int) arr_1 [i_3])), (0ULL))))) : (((/* implicit */unsigned long long int) var_9))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((unsigned long long int) 8555822497012097190ULL)), (((/* implicit */unsigned long long int) ((unsigned char) ((long long int) (short)-5731)))))))));
    var_13 = ((/* implicit */unsigned long long int) ((3663439103U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))));
}
