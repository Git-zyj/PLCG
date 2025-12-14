/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8007
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(var_9))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] [i_1] = max(((short)22167), (((/* implicit */short) (!(((/* implicit */_Bool) var_10))))));
                arr_6 [7LL] [7LL] = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))));
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3]))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 1]))) : (arr_0 [i_1 - 1] [i_1 - 2])))) : (((((/* implicit */_Bool) 11505477629047152951ULL)) ? (871164027147273600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)32991), (((/* implicit */unsigned short) var_4)))))));
        var_21 = ((/* implicit */signed char) var_14);
        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned short)32985)) : (((/* implicit */int) arr_2 [i_2] [8ULL] [i_2]))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (short)4095);
    }
    var_23 = ((/* implicit */short) ((((unsigned int) min((((/* implicit */unsigned int) var_1)), (var_10)))) + (((((/* implicit */_Bool) var_7)) ? ((-(4294967286U))) : ((+(var_17)))))));
    var_24 = ((/* implicit */signed char) var_5);
}
