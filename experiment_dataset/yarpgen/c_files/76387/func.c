/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76387
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((67092480U), (max((max((((/* implicit */unsigned int) var_0)), (67092480U))), (((/* implicit */unsigned int) min((1670490841), (-1670490841))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_16 += ((/* implicit */unsigned short) 67092480U);
                    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)45781))));
                    var_18 = ((/* implicit */unsigned int) var_15);
                    var_19 = ((/* implicit */unsigned int) (-(1670490840)));
                }
                var_20 = ((/* implicit */long long int) max(((-(9127800008735329939ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_4))))), (var_5))))));
                var_21 = ((/* implicit */short) ((-1670490841) & (((/* implicit */int) (signed char)-13))));
            }
        } 
    } 
    var_22 |= ((/* implicit */long long int) min((9318944064974221676ULL), (((/* implicit */unsigned long long int) (unsigned short)45781))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned short)19785))));
}
