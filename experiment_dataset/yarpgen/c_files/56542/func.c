/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56542
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
    var_15 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)26), ((unsigned char)69)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) max(((unsigned char)255), (var_8)))) > (((/* implicit */int) var_13)))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)123)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((max((((/* implicit */long long int) arr_4 [i_0])), (var_4))) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 2]))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)7] [i_2] [i_3] [i_2])) ? (((/* implicit */int) min((max((arr_9 [i_0] [i_4]), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) ((unsigned char) var_6)))))) : (((/* implicit */int) (unsigned char)255)))))));
                                var_20 ^= ((/* implicit */long long int) min((((((/* implicit */int) max((var_12), (var_12)))) ^ (((/* implicit */int) (unsigned char)17)))), ((~(((/* implicit */int) ((var_14) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                                var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))) - ((-(((/* implicit */int) ((unsigned char) var_10)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [(unsigned short)12] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) (~((~(((/* implicit */int) var_13))))))) != (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1 - 1]) : (arr_5 [i_0])))));
            }
        } 
    } 
}
