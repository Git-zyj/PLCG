/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82531
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
    var_17 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 -= ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : ((~(((/* implicit */int) (unsigned short)65535))))));
        var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) ((signed char) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((var_3) < (arr_5 [i_1] [i_1]))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))));
        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1356759939937191643LL)) ? (3207027063U) : (3207027063U))), (33552384U)));
        arr_9 [i_1] &= min((var_1), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) != (((/* implicit */int) arr_1 [i_1 - 2]))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((((((/* implicit */int) arr_4 [i_1 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1 - 2])) + (125))))), (((((((/* implicit */int) arr_4 [i_1 - 2])) + (2147483647))) >> (((arr_2 [i_1 - 2] [i_2]) - (1890530520358422972LL))))))))));
                    var_22 = ((/* implicit */unsigned short) arr_10 [i_1 - 2]);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
    var_24 = ((/* implicit */long long int) var_8);
    var_25 = ((/* implicit */unsigned short) max((3207027045U), (((/* implicit */unsigned int) (_Bool)0))));
}
