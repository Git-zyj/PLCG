/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73570
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) (unsigned short)14);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_12 [14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((((/* implicit */int) (unsigned short)65521)), (-1))) >= ((-(((/* implicit */int) (unsigned short)65535))))))) % (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) || (((/* implicit */_Bool) var_2))))), (((unsigned short) var_7)))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_7 [i_0] [(short)15] [i_2] [i_3]), (arr_7 [(signed char)9] [8] [(signed char)9] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_17 [6LL] = ((/* implicit */unsigned char) var_10);
        arr_18 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127)))))));
        arr_19 [i_4] = ((/* implicit */int) ((arr_16 [i_4] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_11)) + ((-2147483647 - 1)))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [i_4] [(unsigned char)5] [i_5] [i_6])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), (arr_22 [i_5] [i_5] [i_4]))))) : (min((((/* implicit */long long int) arr_26 [i_4] [i_4] [i_5] [i_6])), (arr_24 [i_6] [i_6] [i_4] [i_4]))))))));
                    arr_28 [i_6] [12ULL] [i_5] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((var_0) / (((/* implicit */int) (unsigned short)14)))))) ? (min(((-(9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (signed char)-1))))))) : (((/* implicit */long long int) min((arr_23 [i_6]), (arr_23 [(short)3]))))));
                }
            } 
        } 
    }
}
