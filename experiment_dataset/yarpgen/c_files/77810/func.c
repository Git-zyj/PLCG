/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77810
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
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_5)) + (28191))))) == (((((/* implicit */int) (unsigned char)97)) >> ((((((-2147483647 - 1)) - (-2147483625))) + (37)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_8 [i_0 + 1] = ((/* implicit */unsigned int) var_9);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [11U] [i_1] [i_0 - 2])) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 25165824U)))) : (var_4)));
                        var_13 *= ((/* implicit */short) var_1);
                        arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [11U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (arr_12 [i_0 - 1] [i_0] [i_0 - 4])));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (signed char)105)) - (103)))));
        }
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (unsigned short i_5 = 4; i_5 < 19; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        arr_27 [i_6] [i_5 - 4] [i_4] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_12 [i_0 - 2] [i_0 - 2] [i_5 - 2])));
                        var_14 *= var_11;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
            {
                {
                    arr_34 [i_0] [i_0] [i_0] [i_0 - 3] = ((/* implicit */signed char) ((var_10) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))));
                    arr_35 [i_7] [i_7] = ((/* implicit */short) ((unsigned char) arr_21 [i_0 - 1]));
                    var_15 = ((/* implicit */signed char) ((arr_6 [i_0] [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)10] [i_7] [i_0])))));
                }
            } 
        } 
    }
    var_16 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (signed char)-14)) < (((/* implicit */int) (unsigned short)0)))));
    var_17 = ((((((/* implicit */int) (short)-1049)) <= (1811631025))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_0))))) & (((/* implicit */int) var_1)))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)105), (((/* implicit */unsigned char) (signed char)-55))))) ? (((/* implicit */int) ((signed char) 268173312))) : (((/* implicit */int) var_11))))) || (var_2)));
}
