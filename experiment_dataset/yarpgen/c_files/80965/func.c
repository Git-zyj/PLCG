/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80965
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (-(arr_4 [i_2 + 3] [i_2 + 1]))))));
                    var_11 = ((/* implicit */long long int) (+(arr_5 [i_1] [i_1] [i_2 + 3])));
                }
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) | ((~(((/* implicit */int) (unsigned char)15))))));
                var_12 = ((/* implicit */unsigned short) ((long long int) 2102291875U));
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) % (((((/* implicit */_Bool) (~(var_5)))) ? (var_0) : (3394095903U)))));
}
