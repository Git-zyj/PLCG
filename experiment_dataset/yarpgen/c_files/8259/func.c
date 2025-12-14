/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8259
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_1] [9U] [i_0 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) <= (var_2))))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((max(((~(((/* implicit */int) var_13)))), (var_6))) ^ (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1])))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min(((unsigned char)48), ((unsigned char)211))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_20 = arr_3 [i_2 + 1];
                    arr_9 [i_1] [i_0 - 1] [i_1] [i_0] = ((/* implicit */short) var_13);
                    var_21 = max((min((((/* implicit */long long int) var_3)), (var_9))), (((arr_7 [i_2 + 1] [i_2 + 1] [i_1 - 3]) | (arr_7 [i_1 - 2] [i_2 + 1] [i_1 - 2]))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) -1414502801);
                    var_22 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_14)) ? (arr_8 [i_1] [i_1] [i_1 - 3] [(unsigned char)7]) : (((/* implicit */unsigned long long int) var_7))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned char)2] [i_0]))) - (var_5))))) == ((-(arr_0 [i_0] [i_0 - 1])))));
                        arr_18 [i_0] [i_1] [7U] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))));
                        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                        arr_19 [i_0] [(unsigned short)10] [i_1] [i_0] [1ULL] [5ULL] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_13 [12] [i_4 - 1] [i_4 - 1] [i_4 - 1])) != (((((/* implicit */_Bool) 1414502800)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)29)))))));
                    }
                    var_25 = ((/* implicit */short) min((1414502800), (((/* implicit */int) arr_1 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1] [i_6]);
                                var_27 = ((/* implicit */unsigned char) min((1U), (((/* implicit */unsigned int) (short)-29975))));
                            }
                        } 
                    } 
                }
                var_28 |= ((/* implicit */int) ((unsigned short) (-(((unsigned long long int) (unsigned char)26)))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) var_9);
}
