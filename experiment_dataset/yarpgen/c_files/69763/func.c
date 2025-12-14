/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69763
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
    var_19 = var_2;
    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967294U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57449)))))) ? (var_16) : (((/* implicit */long long int) var_13))))) ? (var_15) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_17))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_6))))))))));
    var_21 = ((/* implicit */signed char) (unsigned short)45536);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3784)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) / (((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((unsigned int) (+(arr_1 [i_0])))))));
        var_22 = (unsigned short)65535;
        var_23 = ((/* implicit */short) var_10);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : ((((~(var_13))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20000)))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
        arr_7 [i_1] = var_15;
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) (unsigned short)65535);
            arr_11 [i_1] [3ULL] = ((/* implicit */unsigned int) arr_10 [i_1] [i_2 + 1]);
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1])) / (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1]))))))));
            arr_12 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_5)))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_15 [i_1] [i_1] [i_3] [i_1] = (~(arr_1 [i_3]));
                arr_16 [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1]))))));
                arr_17 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */short) min((arr_4 [i_1]), (arr_14 [i_3] [i_3])));
            }
        }
        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
        {
            arr_22 [i_4 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) arr_3 [i_4]))) ? (min((var_13), (20U))) : (((((/* implicit */_Bool) 2720061015U)) ? (4294967288U) : (1364870501U))))) + (((unsigned int) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) var_12)))))));
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_27 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (11U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */unsigned long long int) var_18)) / (arr_1 [i_7]))));
                            arr_32 [i_1] [i_5] [i_5] [(signed char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_14 [i_5] [i_7])) : (((/* implicit */int) arr_14 [i_5] [i_5]))))) ? (arr_21 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_23 [i_1] [i_4] [i_5])), (((signed char) arr_20 [i_4]))))))));
                            arr_33 [i_1] [i_4 + 1] [i_5 + 1] [i_5] [i_7] = ((/* implicit */unsigned int) arr_29 [i_5]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_5] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]))))) : (((((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 1])) / (((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 1]))))));
            }
            for (signed char i_8 = 2; i_8 < 10; i_8 += 3) 
            {
                arr_37 [i_1] [i_4 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((signed char) var_17))))));
                arr_38 [i_1] [i_4 - 1] [i_1] [i_4 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_30 [10U] [10U]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [6U] [i_1] [i_1])))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)19999)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_42 [i_1] [i_1] [i_4 - 1] [i_1] [i_1] &= ((/* implicit */signed char) ((min((((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_31 [(unsigned short)4] [i_4] [i_8] [(unsigned short)4] [(unsigned short)4]))), (((/* implicit */long long int) ((arr_30 [(short)10] [(short)10]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)177)))), ((~(var_2))))))));
                    arr_43 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65533))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_39 [i_1] [i_4] [i_8])))) + (var_7)))));
                }
                for (signed char i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    arr_46 [i_1] [i_4 + 1] [(short)2] [i_10 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_28 [i_1]), (((/* implicit */unsigned long long int) 0U))))))))) + (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_10]))) : (arr_41 [i_1]))) * ((-(4294967286U)))))));
                    arr_47 [i_1] [i_8 + 2] = ((/* implicit */_Bool) max(((~((~(18446744073709551596ULL))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_11)))))))));
                    arr_48 [i_1] [i_4] [i_1] [i_8] [i_10] [(signed char)11] = ((/* implicit */unsigned char) arr_10 [i_10 - 1] [i_4]);
                }
            }
            arr_49 [i_4 + 1] [i_1] = max((((((/* implicit */_Bool) (short)18661)) ? (arr_25 [i_4 - 1] [i_4 + 1]) : (arr_25 [i_4 - 1] [i_4 + 1]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) + (var_1))));
        }
        for (long long int i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
        {
            arr_52 [i_1] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_11] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (-8330868389745769067LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1])) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) / (((/* implicit */long long int) (((!(arr_18 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_11] [i_11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0))))) : (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967275U)))))));
        }
    }
}
