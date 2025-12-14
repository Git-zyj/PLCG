/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91953
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (short)-7111);
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)-7111)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [11U])))))), (arr_0 [5LL] [15ULL])));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 4; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [i_1] [i_1] [i_1] = min((((/* implicit */unsigned int) var_17)), (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))))), (((unsigned int) arr_9 [2] [i_1] [i_1])))));
                    arr_14 [(unsigned char)8] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) var_10);
                    arr_15 [i_1] [(unsigned char)18] [(unsigned char)18] = arr_10 [i_3 + 1] [(unsigned short)0];
                }
            } 
        } 
        arr_16 [(unsigned short)8] = ((/* implicit */long long int) (short)-7090);
    }
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) var_12)), (var_3)));
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
    var_21 = (-(((/* implicit */int) var_1)));
}
