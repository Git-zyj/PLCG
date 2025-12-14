/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73125
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_10)))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3344651060U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_0 [i_0])))) : (min((var_9), (((/* implicit */unsigned long long int) arr_1 [(signed char)12]))))))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)18192)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (short)-23245)) : (((/* implicit */int) (unsigned char)108)))) : (((((/* implicit */_Bool) 1239554961)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) (+(((arr_1 [i_0 - 3]) ^ (((/* implicit */int) (signed char)-78))))))) : ((+((-(var_15)))))));
        arr_4 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)70)), (arr_2 [i_0 - 2])))) ? (((/* implicit */int) ((arr_2 [i_0 + 3]) == (((/* implicit */unsigned long long int) -6414466849809729926LL))))) : (((int) arr_0 [i_0 - 4]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 + 1]))));
                    var_22 = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (1099585464) : (((/* implicit */int) arr_5 [i_3]))));
        var_23 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_11 [13])))));
    }
    var_24 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_10)) ? (3104099411U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))))), (((/* implicit */unsigned int) var_10))))));
    var_25 = ((/* implicit */unsigned char) var_13);
}
