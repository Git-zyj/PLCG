/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76278
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (unsigned short)0);
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) -1229685185)) : (-7235233541233485725LL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_14))))) ? ((+(var_10))) : (((/* implicit */int) var_6)))))));
}
