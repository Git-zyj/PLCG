/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80558
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((arr_0 [i_1]) - (((/* implicit */int) var_14)))) ^ (arr_0 [i_3])));
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_2 [i_0 + 1]) / (((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_4 + 2] [i_0 - 1])))) : (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 1])))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(signed char)13] [i_0] [i_2] [i_2] [i_2]))) : (var_10)))) ? (3133720679U) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [(_Bool)0])))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-8393)) + (2147483647))) >> (((3133720679U) - (3133720677U)))))) ? (((((/* implicit */_Bool) arr_4 [12] [i_0])) ? (((/* implicit */long long int) 3133720679U)) : (arr_14 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)1]))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)86))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4 - 1] [1] [i_4] [i_4] [i_4])))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 1568466129116658631LL);
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 - 3] [i_0] [i_1]))) + (var_10)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_15 [3U] [i_0] [3U] [9LL] [9LL] [i_0 + 1] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0])))) : (((/* implicit */int) arr_11 [i_0] [i_0 - 3] [i_1] [i_2]))));
                }
            } 
        } 
    } 
}
