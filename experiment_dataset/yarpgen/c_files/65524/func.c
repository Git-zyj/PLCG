/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65524
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) var_10))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_6)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)226)))) : ((~(var_5)))))));
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 ^= max((((/* implicit */short) (signed char)45)), (var_3));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_4 - 1] [i_4 - 1] [i_4])) && (((/* implicit */_Bool) arr_12 [(unsigned short)8] [(unsigned short)8] [i_3] [i_4 - 1] [i_4] [i_3] [i_4])))) ? (((((/* implicit */_Bool) arr_12 [14ULL] [i_3] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [(_Bool)1] [i_2] [i_4 - 1] [i_4]))) : (arr_12 [i_4] [i_4 - 1] [1U] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [20ULL] [i_4 - 1] [i_4]))))))));
                                var_17 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
