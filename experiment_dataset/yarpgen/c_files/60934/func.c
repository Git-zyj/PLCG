/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60934
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
    var_16 = ((/* implicit */signed char) min(((unsigned short)6), ((unsigned short)4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)6)) & (((/* implicit */int) (unsigned short)65509))));
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) <= (max((((/* implicit */int) (unsigned short)65509)), (1936137317)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */signed char) arr_9 [18U] [i_0]);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65518))))), (max((((/* implicit */unsigned long long int) 0U)), (8506394107366195593ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */int) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_10))))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_11))) : (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))));
}
