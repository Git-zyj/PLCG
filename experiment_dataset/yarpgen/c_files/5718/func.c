/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5718
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [(short)5] [(signed char)3] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_1 [i_2 - 1] [i_1 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_7 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((int) ((((/* implicit */_Bool) arr_5 [(signed char)10] [i_0])) ? (((/* implicit */int) arr_14 [i_2 - 2] [i_1] [i_1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_3 - 2] [i_2 - 1] [11LL] [i_2 - 1] [i_1 - 2]))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_1 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])), (var_6)))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12013)) ? (((/* implicit */int) var_5)) : (var_6)))) || (((/* implicit */_Bool) arr_15 [i_1 - 2] [i_3] [i_3 - 1]))))));
                                var_13 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (short)32750)), (((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_15 [i_1 - 2] [i_2] [i_2 + 3])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (min((var_9), (((/* implicit */int) ((unsigned short) var_10)))))));
}
