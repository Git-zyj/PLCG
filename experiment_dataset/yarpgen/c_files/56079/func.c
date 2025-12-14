/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56079
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))) > (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))))))))) | (var_8)));
                    var_15 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_2] [i_0]))))))) <= (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (arr_5 [i_0] [i_1] [i_1] [i_2]) : (arr_5 [i_0] [(unsigned short)22] [i_1] [i_2])))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((var_0) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_5))))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-59)), ((unsigned char)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [(unsigned short)7] [(unsigned short)7])))) : (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_0]))))))))));
        var_18 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-47), (((/* implicit */signed char) var_11)))))) | (var_7)))));
    }
    var_19 = ((/* implicit */unsigned short) var_4);
}
