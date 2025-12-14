/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91369
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
    var_13 |= ((/* implicit */unsigned char) (+((~((~(var_9)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [4U] [i_1] [(unsigned char)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_9))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [(signed char)4] [i_3] [i_2] [i_3] [(signed char)4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (8969046020091809315ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((+(var_7))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2309459586400434088ULL))))) + (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                        var_14 = ((/* implicit */unsigned int) ((((arr_11 [i_0] [i_3] [i_1] [i_1 + 3]) / (((/* implicit */int) var_5)))) * (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 2] [i_1 - 2])) + (6513)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_2] [16ULL] [i_0] [(_Bool)0] = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_3 [i_0 + 1] [i_1 - 1]))));
                        arr_16 [(unsigned short)1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [(unsigned short)7] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0 - 1] [(unsigned char)12] [i_0 - 1])) >> (((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_7 [12ULL] [i_0] [i_0])))) - (29813)))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) ((unsigned int) var_0))) | (var_9))) : (var_7)))));
}
