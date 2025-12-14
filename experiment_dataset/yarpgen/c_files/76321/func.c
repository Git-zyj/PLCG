/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76321
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
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [10] [i_1] [i_1] = ((/* implicit */long long int) ((min((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)0))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned short)57834)) : (((/* implicit */int) (unsigned char)0))))) && (((/* implicit */_Bool) arr_4 [i_1] [i_0]))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2 - 2] [i_0 - 2]))) >= (1256678683401606203LL)))), ((-(((/* implicit */int) arr_8 [i_1 - 1] [(unsigned short)9] [i_1 - 1]))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1910951026)) || (((/* implicit */_Bool) ((unsigned short) -832950941)))));
                    arr_12 [i_0] [i_1] [i_1] [i_2 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_0 [(_Bool)1])))) & (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) != (((/* implicit */int) arr_1 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) var_8);
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (832950940)));
    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_9))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
}
