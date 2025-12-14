/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62501
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
    var_12 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(0U))), (4294967272U))))));
    var_14 ^= (+(((/* implicit */int) ((((/* implicit */int) (signed char)-122)) != (((/* implicit */int) (short)-26458))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_6))));
                            var_16 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967272U))));
            }
        } 
    } 
}
