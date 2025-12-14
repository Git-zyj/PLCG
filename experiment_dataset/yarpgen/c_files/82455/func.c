/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82455
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
    var_15 += ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) min((((short) arr_2 [i_0])), (((/* implicit */short) var_13))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-48))));
                                var_17 = ((/* implicit */unsigned int) (~(arr_8 [i_0] [i_1] [i_1] [i_4 + 1])));
                                var_18 = ((/* implicit */_Bool) var_10);
                                var_19 = (-(1687509710));
                                arr_11 [i_0] [i_4] [i_0] [i_0] [i_4] = ((/* implicit */signed char) arr_4 [i_0 + 1] [i_0 + 1] [(short)0] [i_0]);
                            }
                        } 
                    } 
                    arr_12 [(short)7] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2084316629091994918ULL)) ? (((/* implicit */int) (short)-21014)) : (((/* implicit */int) var_0))))));
                }
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_5 - 1] [i_5 - 1])) != (((/* implicit */int) arr_14 [i_1] [i_5 + 2] [i_5 + 3] [i_5]))));
                    arr_18 [i_0] [i_1] [i_5 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9240332082660961006ULL)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_2)) % (((/* implicit */int) var_9))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_4 [i_0 + 2] [i_0 + 2] [i_5 + 1] [i_0]) > (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1]))))) ^ (((/* implicit */int) (!(arr_14 [13] [i_1] [i_0] [i_1]))))));
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_8))));
                }
                for (signed char i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-1461), (((/* implicit */short) (signed char)70))))) ? (((((/* implicit */_Bool) 16362427444617556698ULL)) ? (2240726457976880098LL) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_15 [i_0])), (arr_2 [2LL])))))))))))));
                    var_23 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67))))), ((+(((((/* implicit */_Bool) (short)1460)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)117))))))));
                    var_24 |= ((/* implicit */signed char) (-(((/* implicit */int) ((arr_0 [2ULL]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 1] [(signed char)6] [i_6] [i_6 + 4]))))))));
                    arr_21 [i_0 + 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) & (17527107438157321038ULL)))));
                }
                for (signed char i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)41)) | (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (signed char)47)), (arr_20 [i_0] [18ULL] [i_7] [i_0])))) == (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_3)))))))))))));
                                var_26 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])))), ((!(((/* implicit */_Bool) -735112039))))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_1] [i_7 + 1] = ((/* implicit */signed char) ((((((((/* implicit */int) (short)-1480)) % (((/* implicit */int) var_0)))) + (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (signed char)-73))))))) < (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_27 &= ((/* implicit */short) ((711609488) & (((/* implicit */int) ((short) arr_26 [i_10] [i_0 + 1] [i_7 + 4] [i_10] [(signed char)6] [14ULL])))));
                                var_28 = ((/* implicit */int) arr_35 [i_0 + 2] [19U] [i_0 + 2] [i_7 + 1] [i_10] [12LL]);
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */unsigned long long int) var_0);
                    var_30 -= ((/* implicit */short) min((arr_7 [i_0] [(signed char)16] [i_1] [i_1]), (max((arr_32 [i_0 - 1] [i_0 + 2] [(short)14] [i_7 + 4]), (arr_32 [i_0] [i_0] [4ULL] [i_0])))));
                }
                var_31 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)94))))));
            }
        } 
    } 
}
