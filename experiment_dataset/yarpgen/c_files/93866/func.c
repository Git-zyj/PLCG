/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93866
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(short)6])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (min((arr_3 [(unsigned short)8] [(_Bool)1] [(unsigned short)8]), (((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_0] [i_0]))))))), (((((((/* implicit */unsigned long long int) var_2)) + (2824249671194539506ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_2 + 1] [(unsigned char)0])))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */long long int) (+(((((var_2) / (((/* implicit */int) (signed char)-114)))) % (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_4 [i_2 + 1] [i_0] [i_0] [i_0]))))))));
                    arr_8 [i_0] [(_Bool)1] &= ((/* implicit */unsigned char) (((~(max((arr_3 [i_2] [i_2] [8U]), (((/* implicit */unsigned int) arr_1 [i_0])))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2 + 1] [i_2] [i_2]))))))));
                    var_13 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) var_6)), (var_11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((max((max((-122328698), (((/* implicit */int) (signed char)127)))), ((+(((/* implicit */int) var_4)))))) > ((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [(signed char)4] [(short)6] = ((/* implicit */long long int) ((arr_11 [i_0] [i_1] [i_0] [(short)15]) ? (((/* implicit */int) (unsigned short)32767)) : ((((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_4 [i_2 - 1] [i_0] [i_0] [i_1 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_1)), (arr_9 [i_6] [i_6] [i_5] [i_5])))));
                var_15 = ((((/* implicit */int) max((arr_0 [(unsigned short)2] [i_6]), (((/* implicit */unsigned short) arr_13 [i_5] [i_5] [12LL] [2] [i_5]))))) <= ((+(((var_9) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)126)))))));
                arr_21 [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)18080)) : (((/* implicit */int) arr_6 [(signed char)5] [i_6] [(signed char)5] [i_5]))))) ? ((~(((/* implicit */int) (signed char)-97)))) : (((/* implicit */int) arr_11 [i_5] [i_5] [4LL] [i_6]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65514)), ((~(((/* implicit */int) var_10))))))), (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)27538))))) | (var_3)))));
    var_17 = ((/* implicit */unsigned int) var_2);
}
