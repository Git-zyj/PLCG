/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85108
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
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1)))))), (max(((+(-542383666))), (((/* implicit */int) max(((signed char)-28), (((/* implicit */signed char) (_Bool)1)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((_Bool) ((signed char) (_Bool)1));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max(((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)99)))), (((int) (_Bool)1)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)45416))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((unsigned int) var_4));
    var_18 = ((/* implicit */unsigned char) (short)(-32767 - 1));
}
