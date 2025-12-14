/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85958
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_15 += ((/* implicit */_Bool) (~(arr_4 [i_0 - 3] [i_2 - 2] [i_2 - 2])));
                            var_16 = ((/* implicit */short) ((((unsigned int) arr_6 [i_2] [i_1])) << (((arr_4 [i_0] [i_2 + 1] [i_4]) - (12381748471261751209ULL)))));
                        }
                        arr_12 [7] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_5);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_2 - 1])) ? (arr_5 [i_0 - 3] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) -2147483646))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_5);
                    var_19 = ((((/* implicit */_Bool) ((unsigned int) 761372788U))) ? (arr_2 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) arr_14 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_5 - 1]))) : (761372786U)));
                    arr_17 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_14 [i_0] [i_5 + 1])))) << (((((/* implicit */int) (short)-32757)) + (32773)))));
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */_Bool) (short)-6731);
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_22 [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (short)-32761))))) ? (((((/* implicit */_Bool) arr_19 [i_7])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7]))))) : (((/* implicit */long long int) (-(arr_20 [5]))))));
        arr_23 [(short)20] [i_7] = ((/* implicit */_Bool) (short)-6709);
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) arr_21 [i_7]))));
            var_22 = ((/* implicit */short) ((int) var_12));
            arr_26 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_8])) ? (((/* implicit */int) arr_19 [i_7])) : (((/* implicit */int) arr_19 [i_7]))))) && (((/* implicit */_Bool) arr_24 [i_8] [i_8]))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (short)6730)) * (((/* implicit */int) (short)-17298)))))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 3; i_10 < 21; i_10 += 2) 
            {
                {
                    arr_32 [i_9] = ((/* implicit */unsigned short) arr_25 [i_7] [i_10]);
                    var_24 = ((/* implicit */unsigned char) arr_30 [i_7] [i_10 + 1] [i_7] [i_9]);
                    var_25 = ((/* implicit */int) ((_Bool) arr_30 [i_10 - 3] [i_10 + 1] [i_10 - 3] [i_9]));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) arr_19 [i_7]);
    }
    var_27 += ((/* implicit */int) var_12);
    var_28 = ((/* implicit */int) ((max((max((var_10), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (unsigned short)43907)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
