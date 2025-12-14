/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84624
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) var_5);
                    arr_8 [i_1] [i_2] = ((/* implicit */long long int) (+(arr_2 [i_1] [i_2])));
                    arr_9 [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3629979038167464094LL) : (-3629979038167464094LL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0 - 1] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */_Bool) var_10);
                        arr_13 [i_0 - 2] [(signed char)5] [i_2] [i_0 - 2] [14U] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 3893672394U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))));
}
