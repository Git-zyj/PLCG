/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88001
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
    var_16 |= ((/* implicit */long long int) (short)-15043);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~((((~(((/* implicit */int) (short)-15043)))) & ((~(((/* implicit */int) var_2))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    var_17 |= ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) (short)-15043)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-15043)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)96)) : (min((((/* implicit */int) (unsigned short)0)), (var_14)))))));
                    var_18 += ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_2))))));
                    arr_8 [i_0] [i_0] [i_0] = (unsigned char)96;
                }
            }
        } 
    } 
}
