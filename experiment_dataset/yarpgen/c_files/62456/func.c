/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62456
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) ((int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (arr_1 [i_0] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])), (arr_16 [i_1] [i_2 + 1] [i_1] [i_2])))) || ((_Bool)1)));
                        arr_18 [i_4] [i_2] [i_3 - 1] [i_4 + 2] |= ((/* implicit */signed char) min((((/* implicit */int) arr_12 [i_3] [i_3] [i_3 + 1] [i_3 - 1])), ((((_Bool)1) ? (1029068753) : (((/* implicit */int) (unsigned char)0))))));
                        var_14 = ((/* implicit */long long int) var_0);
                        arr_19 [i_4] [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_3] [(short)11])))))));
                        var_15 = ((/* implicit */unsigned char) (((+(1005221568U))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_20 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) max(((short)-12280), ((short)-1)))) ? (((/* implicit */unsigned long long int) var_4)) : (0ULL)))));
        var_16 *= ((/* implicit */unsigned short) var_13);
    }
    var_17 = ((/* implicit */_Bool) var_3);
}
