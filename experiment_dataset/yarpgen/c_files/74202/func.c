/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74202
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_6))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-108)), (-6588357932690942496LL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63640)) && (((/* implicit */_Bool) (signed char)56)))))))) > (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) / (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)10392))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_1] [i_3] [i_1] = (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_0] [i_2 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))));
                        var_17 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_9 [(short)15] [(short)15] [i_2] [i_2])) || (((/* implicit */_Bool) (signed char)-41)))) ? (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) min((var_0), (((/* implicit */signed char) var_7))))))) > (((((/* implicit */_Bool) var_3)) ? (arr_9 [i_1 - 3] [i_1] [i_2 + 1] [i_3]) : (((/* implicit */int) (signed char)20))))));
                        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1 + 1] [i_2 + 1]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 469088829U)) : (var_13)))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((~(866396113U)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_4 [i_4] [i_4 - 2]))));
        var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) (unsigned short)30337)))));
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) - ((-(var_13))))))))));
}
