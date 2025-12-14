/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90437
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
    var_10 = ((/* implicit */unsigned int) min((((unsigned char) var_4)), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 ^= (+(min((arr_3 [i_2] [i_1] [i_0]), (arr_2 [i_0] [i_0] [i_0]))));
                    arr_9 [i_0] [i_0] [5LL] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)100))))), (((unsigned char) (unsigned char)164))));
                }
            } 
        } 
    } 
}
