/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65028
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
    var_17 = ((/* implicit */short) max((((((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (62635))))) | (((/* implicit */int) min((var_13), (var_13)))))), (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) max((var_16), (var_13)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((long long int) ((((/* implicit */_Bool) arr_11 [14ULL] [14ULL] [(_Bool)1] [14ULL] [i_3 + 2] [i_3 + 2])) ? (var_5) : (((/* implicit */int) arr_10 [(unsigned short)10] [i_1] [i_2] [i_3] [i_1]))))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-15288))) + (-3LL)));
                                var_21 = (((((-(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3] [i_0])) ? (var_5) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2] [i_1] [i_4])))))) - (489881914))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
