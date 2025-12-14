/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85232
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_15 = ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) (short)15199)) ? (3712456058U) : (0U))) : (1274989489U)));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_4] [i_0] [i_1] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_14 [i_0] [i_0 + 1] [3] [i_1 + 2] [i_4 - 1] [i_4])))));
                                arr_18 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((short) (unsigned char)225)), (((/* implicit */short) min((arr_10 [i_3] [i_2] [8LL] [i_0]), (((/* implicit */unsigned char) (signed char)111))))))))));
                                arr_19 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((int) (unsigned char)31)) >> (((576460748008456192LL) - (576460748008456185LL)))));
                                var_16 = ((/* implicit */int) (-(((arr_1 [i_1 - 2]) - (arr_1 [i_1 + 1])))));
                                arr_20 [(_Bool)0] [i_1] [i_4] [i_3] [8LL] [i_2] [(_Bool)0] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                } 
                arr_21 [0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) & (4294967295U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (signed char)-112);
    var_18 = ((/* implicit */_Bool) (-(((((((/* implicit */int) (signed char)-103)) & (((/* implicit */int) (signed char)111)))) << (((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7))) - (146LL)))))));
}
