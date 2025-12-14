/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80500
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (signed char)-10))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) (unsigned char)48)))))) == (((((int) arr_0 [i_0])) ^ (((/* implicit */int) var_1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 |= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-87)) > (((/* implicit */int) (signed char)-28))));
            arr_5 [i_0] [14LL] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))));
        }
        var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) <= ((~(((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_14 = (~(((int) (~(1133650291)))));
        var_15 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (782461663U))) ? ((~(var_10))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_2])) + (2147483647))) << (((9U) - (9U)))))))) >= (max((((/* implicit */long long int) ((unsigned int) 1965025919))), (min((var_3), (((/* implicit */long long int) (_Bool)1))))))));
    }
    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) ((long long int) (+(arr_9 [i_3 + 2]))));
        arr_12 [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) var_8)), (arr_10 [i_3 + 1])))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (min((((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((-175069631) + (175069644))) - (13)))))), (((long long int) (_Bool)1))))));
    }
}
