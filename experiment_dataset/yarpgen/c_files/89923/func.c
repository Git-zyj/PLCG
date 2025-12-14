/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89923
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_13 |= ((/* implicit */unsigned int) min(((((-(arr_0 [(short)12]))) <= (var_11))), (((((/* implicit */int) (short)-29879)) == ((-(((/* implicit */int) (unsigned char)104))))))));
                        var_14 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (short)4924)) != (((/* implicit */int) arr_5 [3U] [3U])))));
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((long long int) 4294967295U))));
                        var_15 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-42))))) * (((/* implicit */int) (unsigned char)131))))) == (((arr_6 [i_2] [(signed char)8] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [10LL] [i_2] [i_3])))))));
                    }
                    var_16 |= max(((~(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (1970324836974592ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */short) var_4)), ((short)-3))), (((/* implicit */short) (unsigned char)128))))));
                }
            } 
        } 
    } 
}
