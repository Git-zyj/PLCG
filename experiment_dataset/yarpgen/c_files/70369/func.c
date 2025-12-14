/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70369
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
    var_16 &= ((/* implicit */long long int) ((unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) 5757463540756671347LL);
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_9 [i_3] [i_4] [i_2 + 1] [i_4] [i_4] [i_0]))));
                                var_19 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_3 [i_0] [i_1] [(unsigned short)14])), (((((/* implicit */long long int) ((/* implicit */int) (short)-27707))) % (-5757463540756671347LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
