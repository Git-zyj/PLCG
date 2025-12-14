/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88398
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
    var_16 = ((/* implicit */unsigned long long int) (short)29394);
    var_17 = ((/* implicit */signed char) 766621380);
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((98304ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12747)) << ((((-(var_9))) - (867798559)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */short) ((signed char) ((short) arr_4 [i_0] [i_0])))), (arr_2 [i_0]))))));
                var_20 = ((/* implicit */short) -707827765);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2022654696) : (((/* implicit */int) ((short) (short)11449))))))));
                    arr_7 [i_0] [i_1] = (short)-4096;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_1] [(signed char)2] [i_3] [i_0] [(signed char)2] = ((((/* implicit */int) arr_1 [i_0] [i_1])) != ((((_Bool)1) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned short)37284)))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (((~(-766621351))) >> (((((/* implicit */_Bool) 1852963072)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (arr_5 [i_0] [i_1] [i_4])))));
                            }
                        } 
                    } 
                    arr_16 [(signed char)16] &= ((/* implicit */short) ((((((/* implicit */_Bool) -1852963072)) ? (((/* implicit */int) (signed char)120)) : (722853782))) & (((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_23 [i_1] = ((/* implicit */short) arr_5 [i_1 + 1] [i_1] [i_1]);
                                arr_24 [i_0] [i_1] [(unsigned short)10] [i_1] [i_6] = ((/* implicit */signed char) (_Bool)1);
                                arr_25 [i_0] [i_0] [i_1] [(short)13] [i_0] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_14)) ? (7035040773637379134LL) : (((/* implicit */long long int) var_9))))));
                                var_22 = ((/* implicit */short) ((long long int) ((var_6) - (2022654699))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (unsigned char)197)) : (-98571711))), (((/* implicit */int) ((short) arr_17 [i_0] [i_1 - 1] [i_7] [i_7]))))))));
                    var_24 = (signed char)61;
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_30 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) ((((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) (short)31)))) > (var_11)));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_36 [1LL] [1LL] [i_1] [i_9] [i_10] = ((/* implicit */signed char) (-(((long long int) var_5))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) -1663850264))));
                                var_26 -= ((/* implicit */short) (-(262143U)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_1))));
                    arr_37 [i_0] [i_1] [i_0] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)30))) + (arr_12 [i_1] [i_1 + 2] [13LL] [i_0] [i_1 + 2] [i_1 - 1]));
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)52))))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_0])) : (arr_28 [i_0] [i_1] [i_1])))) ? (arr_22 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-62)) + (((/* implicit */int) (short)-19830)))))));
                arr_38 [i_0] [i_1] [(short)11] = ((((/* implicit */_Bool) ((unsigned int) (signed char)-63))) ? (((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2])) / (28))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])));
            }
        } 
    } 
}
