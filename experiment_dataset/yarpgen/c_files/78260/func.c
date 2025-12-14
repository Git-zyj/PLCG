/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78260
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
    var_13 = ((/* implicit */signed char) var_10);
    var_14 = ((var_10) <= (((int) ((int) -4415128810617282773LL))));
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned short)33435))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 4415128810617282793LL))));
                                arr_13 [i_3] [i_3] [(unsigned short)1] = ((/* implicit */signed char) ((unsigned int) -4415128810617282762LL));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((short) max((722722919), (-133929437))));
                }
            } 
        } 
    } 
}
