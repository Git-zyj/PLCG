/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76355
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        arr_12 [i_3] [13] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_8)))), (max((((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_9 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        var_11 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) arr_2 [i_0])))) ? ((~(((/* implicit */int) ((unsigned char) (unsigned char)48))))) : (max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)224)))), (((/* implicit */int) min((var_7), (((/* implicit */short) (unsigned char)203)))))))));
                    }
                    arr_13 [i_1] [i_1] [(unsigned short)16] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)76)))))))), (min((min((1369276218U), (((/* implicit */unsigned int) var_9)))), (max((((/* implicit */unsigned int) (unsigned char)30)), (536870848U)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 17; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) ((short) max((((/* implicit */long long int) 1368627183U)), (((((/* implicit */_Bool) var_5)) ? (137304735744LL) : (((/* implicit */long long int) 2926340140U)))))));
            var_12 = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)220)))))), ((-((-(((/* implicit */int) arr_3 [(short)15] [i_4] [i_5]))))))));
            arr_19 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(max((((/* implicit */int) arr_11 [i_4] [i_5])), (arr_7 [20] [i_5]))))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned short i_8 = 4; i_8 < 19; i_8 += 1) 
                {
                    {
                        arr_26 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)63578)) : (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) ((unsigned short) arr_16 [i_6] [i_7] [i_4]))) ? (((/* implicit */int) arr_4 [i_4 + 3] [i_6])) : (((/* implicit */int) var_0))))));
                        var_13 ^= ((/* implicit */_Bool) min(((~(var_2))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4 - 1])))))));
                    }
                } 
            } 
        } 
    }
}
