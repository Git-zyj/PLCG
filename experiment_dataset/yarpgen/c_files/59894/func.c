/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59894
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0]))) >= ((((!(((/* implicit */_Bool) (unsigned short)50504)))) ? (var_4) : (((/* implicit */unsigned long long int) -1LL)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (min((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        var_12 = var_1;
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) 178417745U)) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_4 [i_1]))) : ((~(min((8792513651150951621LL), (((/* implicit */long long int) var_3)))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 4; i_2 < 8; i_2 += 1) /* same iter space */
        {
            var_14 += (-(min((((/* implicit */unsigned long long int) (unsigned short)24050)), ((-(var_9))))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 144115188075855872LL)) ? (arr_0 [i_2 - 1] [i_2 - 1]) : (arr_0 [i_2 - 4] [i_2 - 4])))) ? (arr_0 [i_2 - 2] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) arr_0 [i_2 - 4] [i_2 - 4]))))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) (-(arr_6 [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2 - 3])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (short)11634))))) : ((-(max((1721783366827227654ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]))))))))));
        }
        for (long long int i_3 = 4; i_3 < 8; i_3 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)17446)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11635))) : (3102635690U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-5779)))))));
            arr_11 [i_1] [i_3] [i_3] = ((long long int) ((((/* implicit */int) ((var_5) <= (arr_4 [i_1])))) < (((/* implicit */int) (short)11634))));
            /* LoopSeq 4 */
            for (unsigned short i_4 = 3; i_4 < 8; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) (+(4150178771177006407LL)));
                            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3512997205838399357ULL)) ? (((/* implicit */unsigned long long int) 1015808U)) : (2097151ULL)));
                        }
                    } 
                } 
                arr_21 [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-16851), ((short)-9341))))))))) ^ (((unsigned int) 16724960706882323962ULL))));
            }
            for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) /* same iter space */
            {
                arr_24 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(1919267355117844833LL)))) ? (max((max((-1LL), (arr_12 [i_1] [i_1] [i_1] [i_3]))), (max((((/* implicit */long long int) (short)16841)), (-5335940402269574380LL))))) : (((((/* implicit */_Bool) var_10)) ? (arr_13 [i_3 + 2] [i_3]) : (((/* implicit */long long int) 2164491566U))))));
                arr_25 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 2]))))), ((short)31979)));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-((((~(16724960706882323962ULL))) | (((/* implicit */unsigned long long int) (-(5650190685095523104LL)))))))))));
                var_20 = min((max((min((11452570139347513438ULL), (var_9))), (((/* implicit */unsigned long long int) (~(2108019140868200754LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1]))))) << (((8500622422898046017ULL) - (8500622422898045989ULL)))))));
            }
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) != (arr_23 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(144115187538984960LL)))) ? (arr_22 [i_1] [i_1]) : ((~(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(min((var_1), (((/* implicit */int) (short)14727)))))))));
            }
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) + (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(-1129984789018509821LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_11])))))))) ? (((/* implicit */long long int) ((((int) var_9)) ^ (((((/* implicit */int) (short)32767)) << (((var_8) - (17682278905421991195ULL)))))))) : (var_2))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) 2047U))));
                            arr_41 [i_3] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) var_7);
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned long long int) 0U)))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_14 = 2; i_14 < 8; i_14 += 1) 
        {
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned long long int) (~(-626241540)))))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (short)25275))));
        }
    }
    for (short i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        arr_48 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) var_10)) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31979))) : (min((1687651295U), (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */unsigned long long int) (+(((unsigned int) 4294967291U))))) : (((1870638066866042880ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4294967291U))))))));
        var_29 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) 13259407011746355972ULL)) ? (arr_34 [i_15] [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_15]))))) & (((/* implicit */long long int) arr_40 [i_15] [i_15] [i_15]))))));
        arr_49 [i_15] [i_15] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) arr_16 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14727)))))));
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 9; i_16 += 2) 
        {
            for (short i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_16 [i_16 + 1] [i_15] [i_15] [i_16 + 1] [i_15] [i_15]))));
                    arr_54 [i_15] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_15] [i_15])) ? (5187337061963195656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_15] [i_15] [i_16] [i_16]))))))));
                    var_31 *= ((/* implicit */short) max((min((((((/* implicit */_Bool) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (arr_43 [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62966))))), (((/* implicit */long long int) (unsigned short)4884)))), (arr_13 [i_15] [i_15])));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) min((var_32), ((-(((long long int) var_9))))));
    var_33 = ((/* implicit */long long int) var_8);
    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 5187337061963195644ULL)) ? (8708974077759535247ULL) : (5187337061963195644ULL))), (min((max((var_9), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) var_5)))))))));
    var_35 = (+(((((/* implicit */_Bool) var_1)) ? ((-(var_8))) : (((/* implicit */unsigned long long int) (~(var_10)))))));
}
