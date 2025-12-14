/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57862
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((signed char) -676612348));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)168))));
                    var_21 += ((/* implicit */unsigned int) max((max(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((signed char) 676612345))))), (((/* implicit */int) ((short) max((((/* implicit */long long int) 0)), (2995419753563706766LL)))))));
                }
            } 
        } 
    } 
    var_22 = var_2;
}
