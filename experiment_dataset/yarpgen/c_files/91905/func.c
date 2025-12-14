/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91905
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
    var_18 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [(unsigned short)2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned char)25)))) / (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (unsigned char)18)))))))));
                    arr_7 [i_1] [3ULL] [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) var_1);
        arr_9 [i_0] = ((/* implicit */int) var_17);
    }
}
