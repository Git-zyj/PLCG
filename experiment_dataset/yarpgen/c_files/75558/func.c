/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75558
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned char) max((arr_2 [i_0]), ((+(((/* implicit */int) arr_1 [i_2]))))));
                        var_12 = ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)66)), (((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (arr_2 [i_0]))))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) : (((((/* implicit */_Bool) (short)-1499)) ? (3435356221U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_0 [i_0]))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_10 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_4]);
                        arr_11 [i_0] [i_1 - 3] [i_1 - 3] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        var_15 = var_10;
                    }
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        arr_15 [i_0] [i_1 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5 - 1] [i_2 + 1] [i_1 - 2]))) ^ (arr_5 [i_0 + 3] [i_2 + 2] [i_2 + 2]))))));
                        var_16 = ((/* implicit */int) var_5);
                        var_17 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) <= (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) ((arr_7 [i_1 - 3] [i_2 + 3] [i_5] [i_0]) != (arr_7 [i_1 - 2] [i_5] [i_5] [i_0])))));
                        var_18 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (arr_4 [i_0] [i_1]))))))));
                    }
                    var_19 = ((((((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [(_Bool)1] [i_1 - 2] [i_1 - 2])) | (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 2])))) / (((/* implicit */int) max((arr_10 [i_1] [i_1] [i_1 + 1] [i_2 - 1]), (((/* implicit */short) var_5))))));
                    arr_16 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_20 = (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 - 3] [i_1 + 1] [i_2 + 1] [i_2 + 3])) == (((/* implicit */int) arr_10 [i_0 - 3] [i_1 - 1] [i_2 - 1] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) (short)19169)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) : (3849455870U)))))) - (((int) (unsigned char)66))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (1231950726U)))))));
}
