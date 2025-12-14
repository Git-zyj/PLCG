/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93841
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_0])))))), (((/* implicit */int) ((_Bool) max(((_Bool)0), ((_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) var_4);
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((min((var_0), (((0LL) >> (((((/* implicit */int) (short)15241)) - (15240))))))) + (1868870934134199306LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) * (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) (+(1107809751))))))));
}
