/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81725
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) / (var_4)))) ? (((int) 28U)) : (((/* implicit */int) ((16072468485412203862ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_3) ? (var_4) : (((/* implicit */long long int) 28U))))))) : (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (3071905307U))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4521344060326744777LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_12 = ((short) (-(((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_9))))));
                    var_13 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (var_6)))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_2] [i_0]))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((signed char) arr_1 [i_2] [i_1]))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) ((var_6) - (((/* implicit */int) arr_4 [i_1] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) - (13010070939439718067ULL)))))));
                    var_15 = ((/* implicit */unsigned int) (-(13010070939439718067ULL)));
                }
                var_16 |= ((/* implicit */int) (((~(13010070939439718067ULL))) > (((/* implicit */unsigned long long int) ((((((int) var_8)) + (2147483647))) << ((((((~(var_6))) + (1536994979))) - (29))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((arr_5 [i_1] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))))) - (((/* implicit */unsigned long long int) (~(((arr_2 [i_0] [i_1]) | (-421579858))))))));
                var_17 = ((/* implicit */unsigned int) ((((((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))))) + (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [i_1]))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_0]))))))));
            }
        } 
    } 
}
