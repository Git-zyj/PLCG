/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62379
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
    var_15 -= ((/* implicit */int) max((((long long int) max((((/* implicit */unsigned char) var_14)), (var_7)))), (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)160)) ^ (((/* implicit */int) (unsigned short)49152)))), (((/* implicit */int) ((_Bool) var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)4064))))), (arr_2 [i_1])));
                var_17 = ((_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_18 = var_1;
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) var_12);
                    var_20 = ((/* implicit */_Bool) ((unsigned char) (((+(((/* implicit */int) (unsigned short)49152)))) & (((/* implicit */int) (unsigned short)49143)))));
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
}
