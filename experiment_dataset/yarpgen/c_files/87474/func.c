/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87474
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
    var_18 = ((/* implicit */short) min((var_18), ((short)127)));
    var_19 = ((/* implicit */long long int) (unsigned short)12775);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */long long int) ((unsigned short) (signed char)15));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((long long int) (short)-47));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_13 [i_1 - 1] [i_3] = ((/* implicit */short) var_4);
                        arr_14 [i_3] [i_2] [i_2] [i_4 + 1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1435)) ? (((/* implicit */int) (short)-16280)) : (((/* implicit */int) (short)16279))));
                        arr_15 [i_3] [i_2] [i_2] [i_3] [i_4] [4U] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)16280)) ? (arr_1 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (((var_12) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3])))))));
                        arr_16 [i_1 + 2] [i_1 - 1] [i_3] [i_3] [i_3] [i_4 + 2] = ((/* implicit */short) max((max((var_4), (((/* implicit */long long int) var_7)))), (((((/* implicit */_Bool) ((short) var_10))) ? (min((((/* implicit */long long int) (short)0)), (var_0))) : (((((/* implicit */_Bool) (short)16289)) ? (((/* implicit */long long int) -1)) : (var_12)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) (short)16280)))));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13)))));
    }
}
