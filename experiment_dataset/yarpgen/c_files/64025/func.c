/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64025
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
    var_13 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) var_3);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_1))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)65535))))))) ^ (((/* implicit */int) ((unsigned char) ((unsigned long long int) var_8))))));
                arr_6 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) | (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((signed char) max((var_6), (((/* implicit */int) var_7))))))));
                arr_7 [i_0] = ((min((((/* implicit */unsigned int) var_2)), (((unsigned int) arr_3 [i_1])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(arr_2 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((_Bool) arr_9 [i_2 - 3] [i_0] [i_2 + 1]));
                            var_14 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_3 + 3])) ? (((arr_2 [i_1] [i_1]) >> (((((/* implicit */int) var_5)) - (46535))))) : (arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_3 + 2]))) >= (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_10 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_10 [i_3 + 3] [i_1] [10U] [i_3] [i_2])))));
                            var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_3] [i_1])) : (arr_9 [i_3] [i_1] [i_0 + 1]))), (((/* implicit */unsigned int) arr_11 [i_1] [i_2 - 3] [i_3 + 3]))))) ? (max((((/* implicit */unsigned int) ((signed char) var_7))), (min((var_4), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) (unsigned short)65508)))), (arr_11 [i_3] [i_1] [i_2]))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_9)))) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((unsigned long long int) var_0)) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_2))), (((unsigned short) var_7)))))))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_6))));
    var_19 -= var_9;
}
