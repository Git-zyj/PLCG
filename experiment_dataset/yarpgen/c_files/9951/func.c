/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9951
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-93))))), ((~(var_4))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-5061085609246116267LL)))) ? (((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_11 [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)4172)) : (((/* implicit */int) var_6))))) + (max((((/* implicit */long long int) arr_0 [i_0])), (var_10)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_6]);
                                arr_24 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_11 [i_2] [i_0]))))) : ((-(var_5)))))) - (arr_20 [i_0 - 2] [i_0] [i_0 - 3] [i_0] [i_0] [i_0 - 1])));
                                arr_25 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_5] [i_6] [i_0])) - (((/* implicit */int) arr_18 [(unsigned short)6] [i_1] [i_1] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            arr_35 [i_7] |= ((/* implicit */long long int) (+(min((((/* implicit */int) var_1)), (0)))));
                            arr_36 [i_7] [i_8] [i_7] [i_10] [i_9] [i_10] |= ((/* implicit */int) (_Bool)1);
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_32 [i_7] [i_7] [14ULL] [i_7])), (2147483647)))) & (((((/* implicit */_Bool) arr_34 [i_8])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_1))))) ^ (((unsigned long long int) arr_41 [i_7] [i_8] [i_11] [i_12]))));
                            arr_42 [i_7] [i_8] [i_11] [i_12] [i_8] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11782)))))));
                            arr_43 [i_7] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) arr_27 [i_12])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            {
                                var_24 = ((var_11) ? (max(((~(((/* implicit */int) var_13)))), (((int) arr_46 [i_7] [i_7] [i_14 - 1] [i_15])))) : (min((((int) arr_32 [i_7] [i_13] [i_7] [i_7])), (((/* implicit */int) ((_Bool) arr_30 [i_7] [i_8] [i_7] [i_14]))))));
                                var_25 -= (-(((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_7] [i_8] [i_13] [i_14] [i_15] [i_15]))) : (arr_27 [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_8] [i_13]))))));
                                var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)11782))));
                                arr_52 [13U] [i_14 + 2] [i_13] [13U] [i_14 + 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_41 [i_7] [i_7] [i_13] [i_7]))))) ? (((/* implicit */int) arr_50 [i_13] [i_14] [i_14 + 1] [i_14] [i_14 + 1])) : (((/* implicit */int) var_17)))) << (((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), ((-(18446744073709551615ULL))))) - (4203ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        for (int i_17 = 1; i_17 < 18; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            arr_64 [i_16] [i_17 + 2] [i_18] [i_19] [i_17 + 1] [i_17] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_32 [17] [i_17 + 2] [i_18] [i_17])), (var_14)))) ? (((/* implicit */int) arr_30 [i_17] [i_17 + 1] [i_17 - 1] [i_17])) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                            var_27 = ((/* implicit */unsigned short) var_3);
                            var_28 = ((min((arr_26 [i_17 - 1] [i_17 + 2]), (arr_26 [i_17 - 1] [i_17 + 1]))) + (((/* implicit */long long int) (+(((/* implicit */int) var_17))))));
                            arr_65 [i_16] [i_17] [i_18] [i_17] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) -721533487)) ? (arr_38 [i_16] [i_16] [i_18] [i_17 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (arr_38 [i_16] [i_17] [i_17] [i_17 - 1])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_29 -= ((/* implicit */unsigned long long int) (_Bool)0);
                                var_30 = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) arr_55 [i_16] [i_21] [i_22]))))))));
                                arr_74 [i_20] [i_17] [i_16] = ((/* implicit */int) ((_Bool) (short)30971));
                                arr_75 [i_16] [i_16] [i_20] [i_17] [i_22 - 1] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_46 [i_16] [i_16] [i_21] [i_22 - 1]))), (((/* implicit */unsigned long long int) (unsigned short)63734)))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_34 [i_20])) || (((/* implicit */_Bool) arr_45 [i_16] [i_16] [i_20] [i_21])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) var_9))))))));
}
