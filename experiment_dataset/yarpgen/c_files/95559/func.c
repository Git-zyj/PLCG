/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95559
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] |= ((/* implicit */int) ((unsigned long long int) (+(16388127882419898607ULL))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3]))));
                            var_19 = max((((/* implicit */unsigned short) (unsigned char)90)), ((unsigned short)42730));
                            var_20 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) * ((+(((/* implicit */int) arr_1 [i_0]))))));
                            var_21 |= ((4183059155478616945ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
}
