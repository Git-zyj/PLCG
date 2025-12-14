/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97642
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1]))))) * (((/* implicit */long long int) (+(((/* implicit */int) ((arr_3 [14U]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [(short)4] [i_0])) : (((/* implicit */int) (unsigned char)246)))) : ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [2] [i_2] [7LL])))))))));
                            var_14 = ((/* implicit */unsigned int) (unsigned char)218);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_1))))) < (((/* implicit */int) (!(var_7))))))));
}
