/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89422
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] = max((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) (unsigned char)0)), (max((9134481690424250113LL), (((/* implicit */long long int) (unsigned char)242)))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)185)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (max((2600277121U), (((/* implicit */unsigned int) (unsigned short)65519)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (((unsigned short) (unsigned char)17)))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (_Bool)1);
}
