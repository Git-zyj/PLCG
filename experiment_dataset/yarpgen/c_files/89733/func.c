/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89733
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((_Bool) (-(((long long int) (unsigned short)0))))))));
        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0 + 2])))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) >= (((((/* implicit */_Bool) -722954527)) ? (7923386897192545636LL) : (7923386897192545634LL))))))) : ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_1 [i_0])))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (_Bool)1))));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_3])) * (((/* implicit */int) arr_7 [i_1] [i_2]))))) ? ((-(((/* implicit */int) arr_7 [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_3] [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((unsigned char) arr_1 [i_1]))))));
                }
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~((-(((/* implicit */int) (unsigned char)235)))))) : ((+(((/* implicit */int) (_Bool)1))))));
                    var_25 = ((/* implicit */_Bool) (((-(arr_8 [i_1] [i_4 - 2] [i_4 - 2]))) & (((((/* implicit */_Bool) (unsigned short)51595)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [(unsigned char)10] [i_4 + 2] [i_4])))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [4LL] [6U] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7499))) : (3750416159U))))))) >> ((((!(((/* implicit */_Bool) arr_1 [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */_Bool) 1610919589U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [(short)11] [7LL] [i_4])))))));
                    var_27 = (-(((long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_13 [i_1] [i_2] [i_4])))));
                    var_28 = ((/* implicit */long long int) (unsigned short)51595);
                }
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) (-(arr_2 [i_5])));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_6))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(arr_1 [i_7])))))) || (((/* implicit */_Bool) (-(((((/* implicit */int) (short)-27069)) + (((/* implicit */int) (short)-14452)))))))));
                        var_32 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_5] [i_7]))) : (arr_9 [i_1] [i_5] [i_7])))));
                        var_33 = ((/* implicit */unsigned char) (unsigned short)24);
                        var_34 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)129)))))))));
                    }
                    var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(-1))))));
                }
                var_36 = var_5;
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        for (long long int i_10 = 1; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (((unsigned int) arr_26 [6U] [i_2] [(unsigned short)6] [i_9]))))));
                                var_38 &= ((/* implicit */long long int) ((((/* implicit */int) ((((_Bool) arr_9 [i_2] [i_9] [i_10])) && (((/* implicit */_Bool) arr_1 [i_1]))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [7] [i_9])) > (((/* implicit */int) (short)17511))))) == (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                                var_39 = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((unsigned short) var_12))))) / (((/* implicit */int) ((unsigned short) arr_12 [i_9] [i_9 - 3] [i_9] [i_9 - 1])))));
                                var_40 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [i_8])))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10]))) : (arr_10 [4] [i_1]))) - (172LL)))))), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_2]))) : (var_0))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (1857750234U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)129)))))) != (2871587578U)))))));
    var_42 = ((/* implicit */signed char) (~((~(var_11)))));
    var_43 = ((/* implicit */signed char) (-((-(var_1)))));
}
