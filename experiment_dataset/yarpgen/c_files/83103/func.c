/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83103
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((var_8) == ((-(((/* implicit */int) var_11))))))), (((unsigned char) min((var_15), (var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((int) (+((~(-1562304988))))));
                                var_22 = ((/* implicit */unsigned char) ((min(((+(arr_2 [i_1]))), ((~(((/* implicit */int) arr_0 [0] [(unsigned char)4])))))) <= (((/* implicit */int) arr_9 [i_0] [4] [i_2] [i_2]))));
                                var_23 += arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)150)) >= (1562304987)));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_15 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_5 + 1]) / (((/* implicit */int) var_1))))), ((-(arr_16 [i_2 + 1] [i_5 - 1] [i_2 + 1] [i_5 + 2] [i_5] [(signed char)0])))));
                        arr_17 [i_1] = ((/* implicit */unsigned char) ((((((int) -1562304988)) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_5 [2] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [(unsigned char)0] [i_2] [i_2 + 1] [i_5])) : (arr_3 [i_0]))) % ((+(arr_3 [i_0]))))) - (227)))));
                    }
                    arr_18 [i_0] [i_0] [i_1] [i_2] &= arr_0 [i_0] [i_0];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
}
