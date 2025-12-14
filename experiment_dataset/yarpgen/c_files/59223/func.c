/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59223
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [(short)12] [10] [(short)12] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned short)10670))))) < (var_10)));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)81);
                    var_11 += (-(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 2])));
                }
                var_12 = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54865)) & (((/* implicit */int) ((_Bool) var_9)))));
}
