/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74990
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_5);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_10 = ((/* implicit */short) ((arr_2 [i_0] [i_0]) && (((/* implicit */_Bool) 5868891915777520833ULL))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_12 [(unsigned short)13] [(_Bool)1] [i_3] [i_3] [i_3] = var_0;
                        var_11 = ((/* implicit */_Bool) min((var_11), (var_9)));
                        var_12 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                        var_13 = ((/* implicit */long long int) arr_10 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1]);
                        var_14 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (arr_11 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) arr_2 [i_2] [i_0]))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)85)) + (-471866578))) > (((/* implicit */int) arr_1 [i_5]))));
                        arr_18 [i_5] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) (signed char)-92);
                        arr_19 [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                        var_15 ^= ((/* implicit */unsigned char) (-((~(var_8)))));
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */int) var_6);
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_9 [7])) ? (((/* implicit */unsigned long long int) var_6)) : (var_7))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_6] [i_1])))))));
                        arr_22 [i_0] [i_0] [i_4] [(unsigned char)3] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(var_1))))));
                    }
                    arr_23 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) arr_3 [i_1] [i_1])) : (arr_14 [i_1] [(signed char)6] [i_4])));
                    arr_24 [i_1] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_0))) ? (((var_2) >> (((((/* implicit */int) arr_15 [i_0] [(signed char)4] [i_4] [i_4] [i_4] [i_4])) - (90))))) : (((/* implicit */unsigned int) ((arr_6 [i_0] [i_0] [i_1] [i_4]) ? (((/* implicit */int) arr_4 [1U] [i_1])) : (((/* implicit */int) (signed char)-99)))))));
                }
                arr_25 [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
            }
        } 
    } 
    var_19 ^= (_Bool)1;
}
