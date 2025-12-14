/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56876
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
    var_15 = ((/* implicit */int) (+(min((var_4), (var_4)))));
    var_16 *= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) 6895593360509926755ULL))))), (var_2)));
    var_17 ^= (unsigned char)207;
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) / (var_0)))))) ? (max((min((var_11), (1919236747U))), (((((/* implicit */_Bool) 6895593360509926759ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2405))))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 2375730549U)) ? (var_10) : (((/* implicit */unsigned int) var_6)))) : (var_5)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_19 += ((/* implicit */short) max((((((/* implicit */_Bool) -830617484)) ? (((/* implicit */unsigned long long int) 1303729575U)) : (12916525494635328908ULL))), (((/* implicit */unsigned long long int) ((short) arr_6 [i_2 - 1] [i_1 - 1] [i_0 - 1])))));
                            arr_10 [i_0 + 1] [i_0] = ((/* implicit */int) 1919236747U);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1484))) : (var_13)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_1])) ? (arr_4 [20U] [i_1] [20U] [i_0]) : (2141980470))) : (((((/* implicit */_Bool) var_7)) ? (var_1) : (2141980470)))))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_1 + 3] [i_0 - 2] [i_0 - 1] [i_0]), (arr_4 [i_1 + 1] [i_0 - 1] [17U] [i_0 - 2])))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_0 - 1])), (11551150713199624869ULL)))));
            }
        } 
    } 
}
