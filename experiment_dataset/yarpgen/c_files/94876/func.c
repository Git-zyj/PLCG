/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94876
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) ((arr_2 [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
        arr_4 [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 + 1])) > (((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */long long int) (~(0)));
        var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1 - 1]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) (signed char)116);
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((int) (-(((/* implicit */int) min(((unsigned short)0), ((unsigned short)27366))))))))));
                var_17 -= ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((_Bool) arr_1 [i_2]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))));
                arr_14 [i_2] [i_3 - 2] = ((/* implicit */long long int) 0);
                var_18 -= ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
}
