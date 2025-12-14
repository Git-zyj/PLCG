/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73587
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)31))))))) / (var_6))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))) : (var_12)))) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_0] [i_3] [i_1 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                                arr_12 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(966419554)))) ? (((((/* implicit */_Bool) arr_5 [7] [i_4 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_1 + 1] [i_0])))) : (((/* implicit */int) arr_0 [2LL]))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~((~(((/* implicit */int) arr_0 [i_0 - 2])))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(0)))) ? (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5))) : (((/* implicit */unsigned long long int) (~(var_1)))))) : (((/* implicit */unsigned long long int) arr_2 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) - ((~(((/* implicit */int) var_4))))))) : ((~(((var_8) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                                var_18 = (~((+((~(((/* implicit */int) arr_0 [i_2])))))));
                                arr_18 [i_1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_8 [4ULL] [i_1] [i_2] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_15 [i_6] [i_5] [i_0] [i_0]) + (((/* implicit */int) var_7)))) <= (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_6 + 1] [i_1 + 1])))))) : (((((arr_2 [i_1 + 1]) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0]))))))))))));
                                var_20 = ((/* implicit */unsigned short) (~((+(((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1])))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */short) arr_5 [i_2] [i_2] [i_2]);
                    arr_20 [i_2 + 1] [i_1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (arr_15 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_21 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_21 [i_7] [i_7])))) ? (arr_23 [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 614915865)) ? (((/* implicit */int) (short)-4096)) : (23))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_22 [i_7] [i_9])))) && (((/* implicit */_Bool) arr_21 [i_9 + 1] [i_7 + 3]))));
                    var_23 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_28 [10] [20LL] [(unsigned short)20])) > (((/* implicit */int) arr_21 [i_8] [i_9 - 2])))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 18446744073709551593ULL)) ? (20) : (614915865)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    {
                        arr_41 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_39 [i_12] [i_13])) ? (((/* implicit */unsigned long long int) arr_39 [i_10] [i_10])) : (var_12)))));
                        arr_42 [i_10] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_22 [i_13] [i_12]))))))) : ((~(((12560092647671374095ULL) % (((/* implicit */unsigned long long int) -1LL))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_31 [i_10]))));
        var_26 = ((/* implicit */unsigned int) (!((!(arr_36 [i_10])))));
        var_27 += ((/* implicit */_Bool) arr_40 [i_10] [14LL] [i_10] [i_10]);
    }
}
