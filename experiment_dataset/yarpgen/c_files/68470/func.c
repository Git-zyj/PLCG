/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68470
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
    var_17 = ((/* implicit */unsigned short) (unsigned char)129);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) arr_7 [8U] [i_1] [i_2] [i_3]))))), (max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) arr_9 [i_3] [i_0])), (arr_0 [i_3])))))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_3]))));
                            }
                        } 
                    } 
                } 
                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) var_10))))) ? (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (var_0)));
}
