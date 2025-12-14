/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56422
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
    var_13 = ((/* implicit */short) (~(3553848824U)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((unsigned char) arr_1 [i_0]))))));
                    var_15 ^= ((/* implicit */long long int) arr_4 [i_0]);
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((741118472U), (((/* implicit */unsigned int) ((int) (~(13604885094057186952ULL))))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((int) var_9)) + (2147483647))) >> (((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))) - (105620390U)))));
                }
            } 
        } 
    } 
}
