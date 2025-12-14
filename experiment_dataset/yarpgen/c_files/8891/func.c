/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8891
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
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) ((short) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0]));
        var_21 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_22 &= ((/* implicit */unsigned short) ((int) arr_1 [i_0]));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((short) arr_4 [i_1]));
        var_23 = ((/* implicit */_Bool) ((short) ((unsigned int) ((long long int) arr_0 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) ((long long int) arr_3 [i_1] [i_1]))));
        arr_7 [i_1] = ((/* implicit */short) arr_3 [i_1 + 1] [i_1]);
    }
    for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 4) 
    {
        arr_10 [i_2] [4] = ((/* implicit */int) arr_4 [i_2]);
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_22 [i_2] [i_2] [i_3] [i_2] [i_2] &= ((/* implicit */signed char) arr_8 [i_4 + 1] [i_4 + 1]);
                        var_25 = ((/* implicit */unsigned short) arr_3 [i_2] [i_5]);
                        var_26 = ((/* implicit */unsigned char) arr_8 [i_3 - 3] [i_4]);
                    }
                } 
            } 
            var_27 -= ((/* implicit */int) ((unsigned int) ((long long int) ((unsigned long long int) arr_2 [i_3]))));
            var_28 = ((/* implicit */unsigned short) ((int) arr_0 [i_2]));
        }
        arr_23 [i_2 + 2] [i_2] = ((/* implicit */_Bool) arr_8 [7U] [i_2]);
        var_29 = ((/* implicit */short) ((unsigned int) ((unsigned char) ((unsigned long long int) arr_15 [i_2]))));
        var_30 = ((/* implicit */unsigned char) ((unsigned int) arr_16 [i_2] [i_2 - 4] [i_2 + 2] [i_2]));
    }
    var_31 = ((/* implicit */short) ((int) var_7));
}
