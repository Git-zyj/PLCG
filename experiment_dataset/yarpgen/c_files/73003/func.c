/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73003
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
    var_19 |= ((/* implicit */unsigned short) (-((-((-(9217205387883157689ULL)))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) 466186840U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)16032)) && (((/* implicit */_Bool) arr_4 [4U] [i_0] [5U])))))))) > ((+((+(arr_0 [i_0] [i_1])))))));
                var_22 = ((/* implicit */short) (+((((((~(var_12))) + (2147483647))) << ((((-(arr_4 [i_0] [i_0] [i_1]))) - (9163367458285506965ULL)))))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((3629238423U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (((~((-(var_6))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_25 |= (~(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */int) (-((-((+(arr_4 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
}
