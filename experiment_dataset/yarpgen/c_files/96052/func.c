/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96052
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (~(var_0)));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) >= (((unsigned long long int) arr_2 [i_1 - 2] [i_1 - 2]))));
                    arr_11 [i_0] [i_1 - 2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9260))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_12 ^= ((/* implicit */int) var_11);
                            var_13 = ((/* implicit */long long int) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9223372036854775807LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((var_3) + (2147483647))) >> (((((/* implicit */int) var_2)) - (30358)))));
}
