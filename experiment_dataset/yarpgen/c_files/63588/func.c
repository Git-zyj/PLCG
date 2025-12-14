/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63588
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (unsigned short)8371))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) -321619424);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0] [i_3]);
                            var_16 = ((/* implicit */unsigned char) arr_7 [i_4] [i_2] [i_1] [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_7 [i_4] [i_3] [i_1 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_4])))));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) max((321619424), (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_3] [i_3] [i_2] [i_2]), (min((((/* implicit */unsigned short) arr_1 [i_2])), ((unsigned short)4092))))))));
                            var_21 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1955305835)) ? (((/* implicit */int) arr_4 [i_5] [i_2] [i_2] [i_0])) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))), (max((((/* implicit */unsigned long long int) -321619424)), (arr_5 [i_0] [i_1] [i_2]))))), (arr_5 [i_2] [i_2] [(_Bool)1])));
                            var_22 = ((/* implicit */int) (_Bool)1);
                            var_23 = ((/* implicit */signed char) max((arr_5 [i_1 + 4] [i_1 + 2] [i_1 + 3]), (((/* implicit */unsigned long long int) (~(arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_0] [i_2]))))));
                        }
                        for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((1914592622U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1)))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)163)), (arr_18 [i_6 + 1] [i_2] [i_1 + 2])))) >> ((((+(((/* implicit */int) arr_18 [i_6] [i_3] [i_1])))) + (21079)))));
                        }
                        var_26 = ((/* implicit */_Bool) (unsigned short)26080);
                    }
                    var_27 = arr_7 [i_0] [i_0] [i_2] [i_2];
                    var_28 ^= ((/* implicit */unsigned int) max((arr_7 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_13 [i_2] [i_1] [i_1] [i_0] [i_0] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_0])) - (56922)))))))))));
                }
            } 
        } 
    } 
}
