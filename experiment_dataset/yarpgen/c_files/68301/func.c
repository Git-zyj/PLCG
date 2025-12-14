/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68301
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
    var_12 = var_10;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((852745615U), (((/* implicit */unsigned int) (unsigned char)183))))) ? (((/* implicit */long long int) arr_4 [i_0] [i_1])) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [3] [i_2]))) / (var_9)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) 852745615U)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (_Bool)1))))));
                                var_14 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                                arr_14 [i_3] [i_1] [i_1] [i_1] [10U] = max((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) / (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), ((~(852745615U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (((arr_7 [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0])))))))));
    }
}
