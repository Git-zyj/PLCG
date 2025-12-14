/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59229
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
    var_13 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)(-127 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) <= (var_6)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_1] [6U] = ((/* implicit */long long int) (unsigned char)76);
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) var_12))));
                    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)189))));
                    var_17 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                }
                arr_9 [i_1 + 2] [i_0] [i_0] = ((/* implicit */signed char) (short)-8693);
                arr_10 [i_0] [i_1] = var_8;
            }
        } 
    } 
}
