/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92011
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
    var_18 |= ((/* implicit */unsigned short) var_14);
    var_19 *= ((/* implicit */signed char) ((((((/* implicit */int) var_1)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) ? (((long long int) ((((/* implicit */int) (signed char)2)) != (((/* implicit */int) (unsigned char)54))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)51)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) >= (arr_5 [(unsigned char)7] [i_0]))))));
                    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (short)-32744))));
                    arr_10 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
}
