/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77352
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (((/* implicit */short) var_2)))))) : (((arr_0 [i_0 - 2]) % (arr_0 [i_0 - 2]))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == ((+(((long long int) (short)8191)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_1] [i_2 - 1] [i_2 + 2] [i_0 + 2])))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) ((unsigned char) arr_14 [i_0 - 2] [i_3] [i_1] [i_3] [i_4] [i_2 - 1])))))));
                                var_14 = ((/* implicit */_Bool) min(((((!(arr_4 [i_0 + 2] [i_2]))) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) ((short) var_5))))), (((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0]))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */int) (signed char)-121);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_12 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2]))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((var_9) && (((/* implicit */_Bool) (unsigned char)149)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_3)))))) : (min((var_1), (((/* implicit */unsigned int) (signed char)-121))))))));
}
