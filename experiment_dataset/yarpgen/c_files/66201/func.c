/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66201
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_17 = (~((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                            var_18 = arr_0 [i_0];
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) 1561540734846707781LL))));
                arr_11 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0]) : (var_14)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0]))) : (((long long int) var_14))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (unsigned char)65)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) var_10)) : ((+(((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (2324929784U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((+(var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-1452718416) : (((/* implicit */int) var_9))))), (min((((/* implicit */long long int) var_2)), (var_4)))))));
}
