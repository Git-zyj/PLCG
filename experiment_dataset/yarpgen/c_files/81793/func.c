/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81793
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2239660933275680202LL)) ? (17108389271151553044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [(short)9] [(unsigned char)2] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            arr_7 [i_0] = var_3;
            arr_8 [i_0] [(unsigned short)7] = ((/* implicit */unsigned long long int) var_13);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                {
                    {
                        arr_16 [i_0] [i_2] [(unsigned char)10] = ((((/* implicit */_Bool) ((short) 536862720U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [0] [0] [i_3 - 2] [i_3] [i_1 - 1] [i_0]))) : (16967434777978652815ULL));
                        arr_17 [4LL] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_3 + 3] [i_3 + 3] [i_3 - 1]))));
                        arr_18 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_0]))));
                        var_20 ^= var_1;
                    }
                } 
            } 
            arr_19 [i_0] [i_0] [i_1 - 2] = ((/* implicit */long long int) var_2);
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_23 [i_0] [i_0] [i_4]) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_23 [i_0] [i_4] [(unsigned short)1]))));
            arr_25 [i_4] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (unsigned short)44354)))));
            arr_26 [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (626185906U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_4] [i_4])))));
        }
        for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            arr_29 [i_5 - 1] = ((/* implicit */unsigned int) var_7);
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0)))))))));
        }
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */int) max(((signed char)80), ((signed char)80)))), (max((((/* implicit */int) (short)0)), (((((/* implicit */int) (unsigned char)1)) | (2147483647))))))))));
}
