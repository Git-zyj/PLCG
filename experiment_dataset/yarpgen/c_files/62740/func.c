/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62740
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
    var_14 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-94)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
    var_15 = ((/* implicit */int) var_9);
    var_16 = ((/* implicit */short) var_6);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)81)) > ((-(((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned char) (signed char)31))))), (9223372036854775783LL))), (((/* implicit */long long int) var_5))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0 - 1] [i_0 - 1]));
                    arr_8 [i_1] [i_0] [i_1] [i_2] &= ((arr_7 [i_0] [i_1] [i_0] [i_0 + 1]) + (arr_7 [i_0] [i_1] [i_1] [i_1]));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((unsigned int) ((arr_11 [i_1]) != (653274308)))), (((unsigned int) min((((/* implicit */unsigned long long int) (signed char)42)), (10384710943104923449ULL)))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_1);
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_4 + 1] [(short)3] = ((/* implicit */short) ((signed char) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]));
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] [i_5] = ((/* implicit */int) ((arr_1 [i_4]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
                                arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((~(1694945970))) != (((((/* implicit */int) (unsigned short)62971)) + (((/* implicit */int) var_8)))))))) * (max((((long long int) var_0)), (((/* implicit */long long int) ((-1694945971) <= (((/* implicit */int) var_6)))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(arr_2 [i_4]))))))) ? (((/* implicit */long long int) var_10)) : ((~(2147483648LL))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        for (int i_8 = 4; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(653274308))))));
                                var_24 = ((/* implicit */long long int) var_3);
                                arr_29 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */short) 8062033130604628197ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_8)))), ((~(((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) var_13)))))))));
                        arr_33 [i_1] [(unsigned char)2] [i_9] [i_1] [i_0] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((-366443093) + (((/* implicit */int) arr_6 [i_1]))))), (((((/* implicit */_Bool) (~(var_10)))) ? (10384710943104923449ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_22 [i_0] [i_0] [(short)8] [i_0 + 1]))))) && ((!(((/* implicit */_Bool) var_9))))));
                    }
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))))) ? (max((((((/* implicit */unsigned long long int) -8633376437434919398LL)) + (var_0))), (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)28))))), (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))))))))));
                var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) (_Bool)1))), (max((((/* implicit */unsigned int) var_8)), (var_10)))))) ? ((+(arr_11 [i_1]))) : (min(((~(-11))), (((/* implicit */int) arr_21 [i_0 - 1] [i_1] [i_0 - 1]))))));
            }
        } 
    } 
}
