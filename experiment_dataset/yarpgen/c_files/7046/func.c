/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7046
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4395)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) != (((/* implicit */int) (short)25140))))), (19U)));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_1 [i_0]))));
                var_13 &= ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (3580875352019642420LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((~(4294967277U)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) var_9);
                            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_11)), (var_7)));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 = ((/* implicit */unsigned int) var_2);
}
