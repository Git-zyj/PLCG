/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9483
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_0)))))) && (((((/* implicit */_Bool) var_3)) || (((((/* implicit */_Bool) var_14)) && ((_Bool)1)))))));
    var_17 |= ((/* implicit */short) (-(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (arr_9 [i_1])))), (((int) (_Bool)1))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))) ? (min((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (732376125U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52090)) + (((/* implicit */int) arr_12 [i_0] [(signed char)11] [(unsigned char)1]))))))) : (((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) ^ ((-(((/* implicit */int) arr_0 [i_2] [i_1])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((6464072149821137555ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [(short)21] [i_3 - 1] [(short)21] [i_0 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_5)))))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_4] [i_0]))) ^ (var_1)))))))))));
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) var_12))))), (max((((/* implicit */long long int) var_13)), (arr_7 [i_0 + 3] [i_1] [i_3 + 3])))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)13459))))));
                    var_22 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) - (var_2)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (unsigned char)0)) >> (((var_14) - (778558186)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_5))))))));
}
