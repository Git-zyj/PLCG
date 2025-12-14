/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80785
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
    var_17 = ((((/* implicit */_Bool) 14803797843001232398ULL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(15181246856709813784ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((long long int) (_Bool)1))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_2 - 1] &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(0ULL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        var_18 = (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_3 + 2] [i_2] [i_2 - 2])));
                        arr_10 [i_0] = ((/* implicit */unsigned char) (+(14803797843001232402ULL)));
                        var_19 |= ((/* implicit */unsigned char) ((int) (_Bool)1));
                        arr_11 [i_0] [(unsigned short)4] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11715))) % (18446744073709551615ULL))));
                        arr_12 [(unsigned char)8] [i_1] [(unsigned char)8] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -626134268)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_5 [8] [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
}
