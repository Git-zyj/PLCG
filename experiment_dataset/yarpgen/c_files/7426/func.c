/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7426
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
    var_20 = ((/* implicit */int) var_17);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 2707538499U))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (-(var_7))))) ? (((((/* implicit */_Bool) 2707538483U)) ? (4707003927515293556LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35137))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((157627460) | (((/* implicit */int) (unsigned char)35))))), (var_10))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_8 [i_3])))));
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (arr_6 [i_0] [i_1] [i_2]))))))), (((short) (unsigned char)220))));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_27 = ((/* implicit */short) arr_3 [i_1 + 1] [i_1 + 1] [i_2]);
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) min((-6194959390202197515LL), (((/* implicit */long long int) (unsigned short)30391)))));
                        var_28 |= ((/* implicit */long long int) var_12);
                        var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_4))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)-41)))))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_6])) : (arr_5 [i_6] [i_1 + 2] [i_6]))))) : (((/* implicit */int) ((unsigned short) max((var_5), (var_12)))))));
                        var_30 = ((/* implicit */long long int) var_8);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) ((((unsigned long long int) (-(arr_8 [i_0])))) == (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2707538489U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_7]))) : (var_2))))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */long long int) max((arr_4 [i_2]), (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_0]))))) <= (((((long long int) (_Bool)1)) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_1] [(unsigned char)1] [i_7] [i_7])) : (((/* implicit */int) (short)32767))))))))))));
                    }
                    for (int i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)13020)), (var_0)))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8] [i_2] [i_1]))) : (arr_6 [i_8] [i_2] [i_1 + 3]))))))))));
                        var_34 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (-1716643734496847763LL)))) ? (max((((/* implicit */long long int) (unsigned short)7)), (-1716643734496847763LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)127), ((signed char)30))))))), (((/* implicit */long long int) min((2707538493U), (((/* implicit */unsigned int) ((int) arr_19 [i_8] [i_0] [i_0] [i_0]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        for (signed char i_10 = 3; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_9 - 1] [i_2] |= ((/* implicit */unsigned int) ((short) min((arr_6 [i_9 + 2] [i_1 + 3] [i_10 - 1]), (arr_6 [i_9 + 2] [i_1 + 3] [i_10 - 1]))));
                                var_35 = ((/* implicit */int) (unsigned char)32);
                                var_36 = ((((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_10])) <= (((unsigned int) (unsigned short)31627)))) ? ((((!(((/* implicit */_Bool) arr_19 [(unsigned short)0] [(unsigned char)10] [i_2] [4U])))) ? (((var_18) | (arr_8 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1587428830U)))))) : (var_3));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_1)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)13)) ^ (((/* implicit */int) (signed char)-38))))))) : (((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
