/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78276
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
                            arr_11 [i_3] = (-((+((-(-1385944753))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)38047)))))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), ((+(2538886383U)))));
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_1] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
    var_19 &= ((/* implicit */long long int) (~((~((~(var_1)))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
}
