/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78720
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [12U] |= ((/* implicit */unsigned int) (-(13608158030042934893ULL)));
        var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_12 = min((322019704U), (((/* implicit */unsigned int) -859234391)));
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)126)) < (4063232)));
                    }
                } 
            } 
        } 
        var_13 &= ((/* implicit */signed char) max(((-(2147483647))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17179738112ULL)) ? (((/* implicit */int) arr_9 [i_0])) : (4063207)))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_6 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        var_14 |= ((/* implicit */unsigned int) arr_9 [i_4]);
        var_15 = ((((/* implicit */unsigned int) 4063241)) / (var_6));
    }
    var_16 = min((3102071366U), (((/* implicit */unsigned int) -4063208)));
    var_17 = ((/* implicit */_Bool) var_9);
}
