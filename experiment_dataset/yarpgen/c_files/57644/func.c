/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57644
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) -9223372036854775806LL))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (-2147483647 - 1))) == (9219159988660129250LL)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned short) var_4);
                            var_19 += ((/* implicit */unsigned char) (unsigned short)24576);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17201)) && (((/* implicit */_Bool) (signed char)-101)))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) -2147483629))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17215)) > ((-2147483647 - 1)))))));
                                var_23 -= ((/* implicit */unsigned short) -7145236201625856529LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
