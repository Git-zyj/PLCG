/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65416
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
    var_16 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((_Bool) (short)-32087)))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(min((var_5), (var_3)))))), ((+(((((/* implicit */long long int) ((/* implicit */int) (short)-30165))) / (var_9)))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((var_9), (((/* implicit */long long int) (short)30165)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (790178023U) : (var_8)))))))) : (((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)13377))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30165)) ? (((/* implicit */int) (short)-13377)) : (((/* implicit */int) (short)-30165)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = max((((/* implicit */unsigned int) (short)-13378)), ((+(arr_3 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2665887395U)), (-6103504515314430570LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)30164))))) : (((arr_2 [i_0]) ? (var_0) : (((/* implicit */long long int) 4294967293U)))))));
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)30166))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
