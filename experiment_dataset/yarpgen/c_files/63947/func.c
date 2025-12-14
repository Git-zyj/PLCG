/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63947
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) min((min((549226181), (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (short)-2696)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) : (min((((/* implicit */unsigned long long int) 549226181)), (9223372036317904896ULL))))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 1023670345))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
        {
            {
                var_18 += max((((/* implicit */int) ((((/* implicit */int) var_4)) <= (arr_11 [i_2] [i_2])))), ((-(((/* implicit */int) var_15)))));
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */int) var_7)), (((((((/* implicit */_Bool) var_8)) ? (-1023670346) : (1023670350))) | (((/* implicit */int) max(((short)-2696), (arr_7 [i_3]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */long long int) ((unsigned short) 10083768964841973070ULL));
                            arr_20 [i_2] [i_3] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_9 [(unsigned short)7]))))), (((((/* implicit */_Bool) arr_11 [i_2] [(unsigned short)13])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)48601))))))) & (((10083768964841973070ULL) << (((-310547334) + (310547391)))))));
                            /* LoopSeq 4 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_23 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((min(((+(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (short)32767)))) <= (((((/* implicit */int) ((arr_18 [(_Bool)1] [i_3 - 3] [i_3 - 3] [i_3] [i_3 - 3] [13ULL]) < (2064384)))) & (((/* implicit */int) arr_21 [0] [i_2] [i_2]))))));
                                var_20 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                                var_21 = (signed char)102;
                                var_22 *= ((/* implicit */unsigned char) ((max((arr_15 [(short)2] [i_3 - 3]), (((/* implicit */int) (short)-128)))) >= (((/* implicit */int) var_2))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-20391)) ? (((/* implicit */int) (short)-8150)) : (549226181)))) : (min((((/* implicit */unsigned int) -33554432)), (4294967290U))))), (((/* implicit */unsigned int) var_6)))))));
                                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_2 - 1])) / (((int) arr_15 [i_3] [i_3 - 1]))))), (5U)));
                            }
                            /* vectorizable */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                arr_30 [i_2] [i_2] [i_2 + 1] [(short)6] [i_2 - 1] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (arr_9 [i_4])));
                                var_25 = ((/* implicit */int) (!(((4294967294U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764)))))));
                                arr_31 [i_2 + 1] [i_3] [i_2 + 1] [8] [i_8] = ((/* implicit */_Bool) (short)32745);
                                arr_32 [i_3] [i_3] [i_4] [i_3] [11ULL] [i_4] [i_3] = ((/* implicit */unsigned char) arr_19 [i_2]);
                            }
                            for (short i_9 = 3; i_9 < 16; i_9 += 2) 
                            {
                                var_26 = max((((/* implicit */int) min((var_7), (((/* implicit */short) var_0))))), (max((max((arr_11 [i_5] [i_5]), (arr_11 [i_2] [i_2]))), (((/* implicit */int) (short)32750)))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_18 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 3]), (((/* implicit */int) ((unsigned short) -549226190)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_33 [i_4] [15] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_9)))))))) : (max((((/* implicit */int) (unsigned short)35637)), ((~(((/* implicit */int) (short)27167))))))));
                                arr_35 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (short)-256)))), (((/* implicit */int) arr_19 [i_3 - 3]))))) ? (max((((/* implicit */int) (short)928)), (-1023670359))) : (max((((/* implicit */int) ((unsigned char) (short)-32763))), ((-(((/* implicit */int) var_11)))))));
                            }
                        }
                    } 
                } 
                arr_36 [i_2 - 1] [i_3] = ((/* implicit */short) var_2);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)36651)) ? (((/* implicit */int) (unsigned short)29899)) : (549226181)));
        arr_39 [(signed char)5] [(signed char)5] = ((/* implicit */int) ((((/* implicit */_Bool) max((10083768964841973070ULL), (((/* implicit */unsigned long long int) 4294967284U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_38 [i_10]), (arr_38 [i_10]))))) : ((-(4294967290U)))));
    }
}
