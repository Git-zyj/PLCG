/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75439
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_4);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))))))) >> ((((~(((/* implicit */int) (unsigned char)16)))) + (42)))));
        arr_4 [(_Bool)1] &= ((/* implicit */unsigned long long int) ((arr_2 [(unsigned char)6] [i_0]) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [6] [6]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_11))) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-32592)) * (((/* implicit */int) (unsigned short)65489)))))))));
        var_20 = ((/* implicit */unsigned long long int) var_3);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((((long long int) -1LL)) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_7 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_1 [6LL]))))))))) : ((-(((arr_6 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(short)10])))))))));
        var_22 = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) arr_1 [i_3]);
                        var_24 = ((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 - 1]);
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17)))) * (((/* implicit */int) ((unsigned short) (_Bool)0)))))) >= (var_0)));
    var_26 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) + (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_2))));
}
