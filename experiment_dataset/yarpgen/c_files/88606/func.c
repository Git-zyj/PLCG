/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88606
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned short)1] [i_1] = ((/* implicit */short) var_8);
                    var_11 = ((/* implicit */short) ((unsigned char) (+(arr_6 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((var_8) == (((/* implicit */long long int) var_2))))), (var_8))), (((/* implicit */long long int) ((unsigned short) var_1)))));
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)31598)) & (((/* implicit */int) var_3))))));
}
