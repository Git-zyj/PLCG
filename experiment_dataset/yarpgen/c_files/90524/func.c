/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90524
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */short) 31ULL);
                            var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (3ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)114), (arr_3 [i_1] [i_2])))))))));
                            var_15 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) : ((+(arr_8 [i_0] [(short)8] [i_1] [i_2] [i_2]))))));
                        }
                    } 
                } 
                arr_10 [i_1] |= ((/* implicit */unsigned int) (signed char)112);
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_16 = ((/* implicit */int) (signed char)114);
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((arr_5 [i_1] [i_4]), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_0] [i_0])) || (((/* implicit */_Bool) var_7))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) arr_17 [i_0] [(short)8] [i_4] [i_5 - 2] [i_6]);
                                arr_20 [i_0] [i_1] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (unsigned char)231);
                            }
                        } 
                    } 
                    arr_21 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 20);
                    arr_22 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) var_13);
                }
                arr_23 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-113)), ((unsigned char)252)))) : (((/* implicit */int) (signed char)-115))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) arr_27 [i_9] [i_7]);
                    var_20 = ((/* implicit */int) arr_29 [i_7] [i_7] [(short)8]);
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_33 [i_7] [(short)24] [i_7] [i_10] = arr_28 [i_7] [24ULL] [i_10];
                        var_22 = ((/* implicit */short) arr_31 [i_7] [i_8] [i_7] [i_7]);
                        arr_34 [i_7] [(unsigned short)11] [i_7] [i_7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)-121))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2816)) ? (arr_25 [i_7] [15U]) : (((/* implicit */int) (unsigned short)215))))) >= (arr_32 [15U] [i_9] [15U])))) : (((/* implicit */int) var_0))));
                    }
                    var_23 &= ((/* implicit */int) 18446744073709551613ULL);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_10);
    var_25 = ((/* implicit */short) var_8);
}
