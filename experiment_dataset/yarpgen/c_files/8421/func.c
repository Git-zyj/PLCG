/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8421
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
    var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-1354951266), (((/* implicit */int) (unsigned short)23))))))))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)0))) : ((~(var_5))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_7)), (15ULL))), (((/* implicit */unsigned long long int) ((1354951265) / (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_16 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((((/* implicit */short) (signed char)125)), (var_7)))))), ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) max(((~(18446744073709551601ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 2])))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 1354951280))));
                            var_18 = (-(((/* implicit */int) var_13)));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) ? ((+(var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                            arr_16 [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (12291036662885094966ULL))))) < (var_4)));
                        }
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) (-((+((+(var_6)))))));
                            var_20 = ((/* implicit */unsigned char) (signed char)-59);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_10)) ? (arr_18 [i_6] [i_3] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0])))));
                            var_22 = ((((/* implicit */_Bool) 1193819069)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_6 - 2]));
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [i_2 - 1] [i_3 - 1] [i_7] [i_2 - 1] [i_2 - 1]) >> ((((~(((/* implicit */int) (unsigned char)104)))) + (113)))))) ? ((~(2U))) : (max((((((/* implicit */_Bool) 6U)) ? (arr_7 [i_0] [i_1] [i_2] [i_2] [i_7] [i_1]) : (((/* implicit */unsigned int) -2147483638)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)6)))))))));
                            arr_26 [6U] [6U] [i_2] [i_2] [i_2] &= (!(((/* implicit */_Bool) ((-1354951272) / (((/* implicit */int) arr_1 [i_3 + 3] [i_3 + 3]))))));
                            var_24 = ((/* implicit */short) -2147483638);
                            var_25 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_3 - 1] [(short)6] [i_2] [(short)6] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) + (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_4)) ? (arr_21 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                        }
                        var_26 = ((/* implicit */unsigned short) (~(var_5)));
                        var_27 -= ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) ((unsigned short) 2U))))), ((!(((/* implicit */_Bool) 0ULL))))));
                        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) arr_10 [i_0] [i_1])))))) && ((!(((/* implicit */_Bool) min((4294967292U), (((/* implicit */unsigned int) arr_24 [i_3])))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) 31457280LL);
        var_30 = ((/* implicit */unsigned short) (unsigned char)108);
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_8]) ^ (arr_8 [i_8])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)29586)))) || (((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1567415095)))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)23))))), (2694966963664387849ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_28 [i_10]) : (arr_13 [i_10] [i_9] [i_9] [i_9] [i_10])))))))));
            arr_34 [i_10] &= ((/* implicit */int) max((((((/* implicit */_Bool) arr_30 [i_9] [i_10])) ? (9957136747883464733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9] [i_10]))))), (((((/* implicit */_Bool) 1354951280)) ? (130990122703094524ULL) : (130990122703094524ULL)))));
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9])) ? (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_9] [i_9] [i_9] [i_9])))))) ? ((-(5974392056765085620ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_18 [i_9] [i_10] [i_10] [i_10])))), (((unsigned long long int) (unsigned short)65524))))));
            var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52956)))))));
        }
        arr_35 [i_9] = (~(var_3));
        var_35 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) / (min((-9223372036854775792LL), (arr_9 [i_9])))))));
    }
}
