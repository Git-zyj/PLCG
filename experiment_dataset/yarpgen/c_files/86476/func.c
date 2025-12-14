/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86476
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
    var_17 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((int) 10802531412560055533ULL))) : (var_13))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) (short)19125)) - (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (!(((((/* implicit */int) var_8)) < (((/* implicit */int) (short)22686)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((int) min((min((((/* implicit */unsigned int) var_1)), (arr_7 [i_0] [i_0] [i_0] [17U] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (-1416810028) : (((/* implicit */int) arr_2 [i_0]))))))));
                                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((int) var_5)))) || (((/* implicit */_Bool) ((2147483647) << (((2498907326U) - (2498907326U))))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)19722)))))));
                                var_22 = ((/* implicit */signed char) (-(var_12)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
