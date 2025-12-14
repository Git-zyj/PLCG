/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58145
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
    var_15 = ((/* implicit */short) (_Bool)1);
    var_16 |= var_1;
    var_17 = (_Bool)1;
    var_18 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((int) arr_0 [i_0 + 3]));
                    arr_9 [i_0] [i_1] [i_2] [7U] = ((/* implicit */long long int) (+(1910632697U)));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) < (arr_4 [(signed char)2] [i_1] [(_Bool)1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2]))) : ((+(arr_4 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
        arr_11 [i_0] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [11ULL]))))) + ((-(arr_4 [i_0] [i_0] [(_Bool)1])))));
    }
}
