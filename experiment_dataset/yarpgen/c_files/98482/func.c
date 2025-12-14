/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98482
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
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_2))))) : (max((((4294967293U) / (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) / (var_3))))))));
                var_17 += ((/* implicit */short) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */_Bool) ((unsigned char) max((arr_6 [i_1] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0]))));
                            var_19 *= (~(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) ((var_13) > (var_13))))))));
                            var_20 *= ((/* implicit */short) (-(((/* implicit */int) min((max(((unsigned short)0), (var_9))), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
