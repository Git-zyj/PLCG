/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91688
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
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((arr_0 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1])))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */int) var_10);
                                arr_14 [i_4] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_10) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_12), (((/* implicit */short) var_9)))))))) != (((((_Bool) 139958752906621528LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_1] [i_1]), (var_5))))) : ((+(15356269395980340185ULL)))))));
                var_16 = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_7), (((((/* implicit */_Bool) ((3090474677729211431ULL) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((var_7), (-4122219474849047387LL)))))));
}
