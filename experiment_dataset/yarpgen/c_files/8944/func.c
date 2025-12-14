/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8944
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) var_0))));
                var_12 = ((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0])), ((~(((/* implicit */int) var_10))))));
                var_13 = ((/* implicit */_Bool) var_8);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */short) (-(((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19597)))))));
                            var_15 = ((/* implicit */unsigned short) (((_Bool)1) ? (min((min((((/* implicit */unsigned int) (_Bool)1)), (var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) (_Bool)1))))))) : (((((_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(arr_5 [i_0] [i_1] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = 4294967278U;
}
