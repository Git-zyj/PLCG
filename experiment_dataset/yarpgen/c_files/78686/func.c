/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78686
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
    var_20 &= ((/* implicit */unsigned int) ((int) ((((unsigned int) 1238190526588326173LL)) != (((/* implicit */unsigned int) 992895526)))));
    var_21 = (!(var_4));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_22 ^= ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned int) (signed char)1)), (var_15))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)136)) < (((/* implicit */int) (unsigned char)119))))) >= (((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 1])))));
                                var_23 = (~(((/* implicit */int) (unsigned char)108)));
                                var_24 = var_6;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (unsigned char)118);
}
