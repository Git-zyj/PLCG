/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94838
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0] [(signed char)18])) ? (((/* implicit */int) (short)14314)) : (((/* implicit */int) (short)14314)))), (((/* implicit */int) ((signed char) (short)14314))))));
        var_18 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */int) (unsigned short)192)))))) >= (((unsigned long long int) 4811689451569483619ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_19 += ((/* implicit */_Bool) (short)14314);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4811689451569483618ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) (short)511)) ? (2800323683U) : (4294967288U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)32753)) + (1140335437))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (short)-21903)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) >= (13635054622140067985ULL)));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1233745333462612164LL)) ? (((/* implicit */unsigned int) arr_0 [i_1] [i_2])) : (4294967295U)));
                    var_23 = (~(arr_0 [i_3] [i_1]));
                    var_24 = ((int) (signed char)-31);
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) arr_7 [i_4] [(unsigned char)18]);
        var_25 = ((/* implicit */long long int) arr_2 [i_4]);
    }
    var_26 = ((/* implicit */unsigned char) ((short) min((max((((/* implicit */unsigned int) var_2)), (var_11))), (((/* implicit */unsigned int) var_2)))));
}
