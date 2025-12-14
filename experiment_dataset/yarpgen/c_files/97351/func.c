/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97351
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
    var_12 = ((/* implicit */short) ((((_Bool) ((6U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)63)) / (((/* implicit */int) (unsigned short)2863))))))) : (max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)2839)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) (((-((+(9U))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195)))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((9909947296294031878ULL) > (((/* implicit */unsigned long long int) 1073741823U)))) ? (var_0) : (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)255))))))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3339253365U))))) : (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [3] [i_1] [i_1]) : (arr_2 [11]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_4] [i_3] [i_1]))) ? (((arr_17 [i_5] [i_5 - 1] [i_5 + 1] [2ULL] [(unsigned char)10] [(unsigned char)10]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [9] [(signed char)4] [i_4] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [1LL]))) : (var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [i_5 + 1]))))));
                                var_15 = ((/* implicit */unsigned int) (unsigned short)62698);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((arr_18 [i_0] [i_1] [i_1] [i_6] [i_6]) >= (arr_18 [i_0] [i_6] [i_0] [(short)8] [11U])));
                    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62704)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) : (10425182631487559820ULL)));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [(signed char)13])) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (arr_18 [i_0] [9ULL] [i_1] [5] [(signed char)2])))) : (((long long int) (unsigned short)62693)))))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) var_11);
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_7] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_0]))) : ((-(2179567053U)))));
                    var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_7)))));
                }
                var_22 = ((/* implicit */long long int) min((arr_2 [i_0]), (((arr_2 [i_0]) << (((((/* implicit */int) var_5)) - (117)))))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_23 = ((((/* implicit */int) ((unsigned char) var_7))) >> (((max((arr_28 [i_0] [i_0] [12] [i_8]), (arr_28 [i_0] [i_0] [3U] [i_8]))) - (3759235857445721308ULL))));
                    arr_31 [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) > (7928525307400441605LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (-(min((279720670U), (((/* implicit */unsigned int) (unsigned char)176))))));
                                arr_37 [(unsigned char)12] [i_1] [i_8] = ((/* implicit */unsigned int) var_8);
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned char)45))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) min(((signed char)119), (((signed char) min((-5524183264816378300LL), (((/* implicit */long long int) -1)))))));
                }
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (11956586412599683636ULL)));
                    arr_40 [i_0] [i_1] [i_0] [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_11]), (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) arr_16 [(signed char)2]))))) : ((((_Bool)1) ? (((/* implicit */long long int) 1062581379U)) : (7514201799970595155LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1]))) + (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_27 [12U] [i_1] [i_11] [i_11])))))));
                    var_28 = arr_32 [i_1] [i_1] [i_11] [(unsigned short)14];
                    var_29 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((int) (unsigned char)226)))))));
                }
                var_30 *= ((/* implicit */unsigned int) (-(var_9)));
                var_31 = ((/* implicit */signed char) ((4121505408U) <= (3177663446U)));
            }
        } 
    } 
}
