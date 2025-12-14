/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91638
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
    var_17 |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10)))))))));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)68))))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) (unsigned short)29026))))))));
                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_16)))))))));
            }
        } 
    } 
}
