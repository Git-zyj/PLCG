/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94741
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) arr_3 [(_Bool)1]);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_8 [0])) * (((/* implicit */int) var_16))))))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((arr_3 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))) : (((((((((/* implicit */int) (signed char)-7)) + (2147483647))) >> (((var_10) - (756023765U))))) << (((/* implicit */int) (_Bool)1))))));
                        arr_10 [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) arr_2 [i_3] [i_3] [i_2]);
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1 - 1])))) >= (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */long long int) var_3)), (arr_2 [i_3] [i_1] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24050)))))))))));
                        arr_12 [(signed char)4] [i_3] = ((/* implicit */long long int) max((((((/* implicit */int) var_5)) << (((((arr_2 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_1]))))) - (7792307663670528625LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) (!(arr_1 [i_3] [i_3])))) : ((+(((/* implicit */int) var_5))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 825924937)) ? (825924937) : (((/* implicit */int) var_14))));
                            arr_16 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(var_4)));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)34983)) : (((/* implicit */int) (unsigned short)60030))))) ? (arr_13 [i_3] [i_1] [i_4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3003)))));
                            arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (arr_0 [i_1 - 1] [i_0]) : (((/* implicit */int) (signed char)-124))));
                        }
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_10);
}
