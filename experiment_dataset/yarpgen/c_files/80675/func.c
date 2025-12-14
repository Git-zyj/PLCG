/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80675
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
    var_16 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 3283749789U))) ? (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) 1011217507U))))) : (((/* implicit */int) (!(var_2))))))), (var_9)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned int) arr_4 [i_0] [i_2] [i_3])))));
                        arr_11 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) max((arr_3 [i_1]), ((signed char)24))))))));
                        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) var_13)), (var_1)))) > (((/* implicit */int) max((arr_9 [i_3]), (arr_9 [i_3]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 3283749760U))))), (max((var_1), (arr_3 [i_4])))))) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_14 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1]))))));
                                var_20 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_2)))) - ((~(((/* implicit */int) var_0)))))) > (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_2 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((signed char) var_2));
                                arr_21 [i_7] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1011217535U))));
                                arr_22 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max(((unsigned short)30777), (((/* implicit */unsigned short) arr_15 [i_1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((unsigned char) (((-(1011217507U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3283749796U)) && (((/* implicit */_Bool) var_12)))))))));
                }
            } 
        } 
        var_23 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)4])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [10])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                {
                    arr_30 [i_9] [i_9] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_23 [i_9]))))) | (((arr_24 [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                    var_24 += ((/* implicit */signed char) arr_26 [i_10] [i_10] [i_10]);
                    arr_31 [i_9] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((var_13) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8069202060290551306ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_37 [i_12] [i_9] [i_11] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */short) var_14);
                                arr_38 [i_9] [i_11] [i_10] [i_10] [i_12] = ((/* implicit */unsigned long long int) (((((~(1085403720))) + (2147483647))) << (((var_7) - (1060895138)))));
                                var_25 = ((/* implicit */short) ((unsigned char) var_9));
                                var_26 = ((/* implicit */_Bool) ((max((arr_29 [i_8] [i_10] [i_11]), (((/* implicit */unsigned int) 690053943)))) << (((((15998394851389828987ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) - (15998394851389829089ULL)))));
                                var_27 = ((/* implicit */int) (~((-(var_10)))));
                            }
                        } 
                    } 
                    arr_39 [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) max((max((3283749788U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18571)) ? (((/* implicit */int) (unsigned short)65280)) : (((/* implicit */int) (unsigned short)56782))))))), (((/* implicit */unsigned int) arr_28 [i_8] [i_9] [i_9]))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) var_11);
    var_29 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_2))))), (var_12)))) : (max((((/* implicit */int) var_13)), ((-(((/* implicit */int) (unsigned char)255)))))));
}
