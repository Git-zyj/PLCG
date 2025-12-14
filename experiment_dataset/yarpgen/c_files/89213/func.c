/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89213
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [6U] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) min(((unsigned short)51832), (((/* implicit */unsigned short) (_Bool)1)))))))), (min((((((/* implicit */int) (signed char)18)) ^ (((/* implicit */int) arr_1 [i_1])))), ((~(((/* implicit */int) (signed char)-117))))))));
                arr_6 [i_0] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) ((signed char) (_Bool)1))))));
            }
        } 
    } 
    var_18 += ((/* implicit */int) min((max((14LL), (((/* implicit */long long int) (~(1197727841)))))), (((/* implicit */long long int) var_11))));
}
