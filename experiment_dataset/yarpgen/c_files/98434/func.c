/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98434
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((int) ((long long int) ((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) (_Bool)0)))))))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) -4220445363285747479LL))), (arr_0 [i_0] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_2))));
}
