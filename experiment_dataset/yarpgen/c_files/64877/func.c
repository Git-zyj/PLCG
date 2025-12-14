/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64877
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
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4677920797262668510ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */short) (((((~(((/* implicit */int) var_16)))) < (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((signed char) var_6))) : (((((2147483647) / (var_10))) * (((/* implicit */int) var_15))))));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((2147483632), (((/* implicit */int) var_12)))) * (((var_15) ? (((/* implicit */int) (unsigned short)480)) : (1048575)))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) -1048594)))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((((((/* implicit */_Bool) 6405206327599593696ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((unsigned long long int) -2147483641)))), (((/* implicit */unsigned long long int) ((((-1048578) != (((/* implicit */int) (unsigned short)65045)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 2147483632)) : (4329327034368LL))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_10 [i_3] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (12041537746109957920ULL)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((var_6) && ((_Bool)1)))));
                        var_23 += ((/* implicit */short) (+(((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (_Bool)0)))))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) arr_7 [i_2]))));
                    /* LoopSeq 4 */
                    for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 3] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned short)65081))));
                        arr_13 [i_2] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2279357478U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_2] [i_0])))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                        arr_14 [i_4] [i_4] [0] [i_4] = ((/* implicit */short) 2147483625);
                        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned short)248))))) ? (((-2147483632) / (1048575))) : ((-2147483647 - 1))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_0]);
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (unsigned char)255)) : (-1048590)))));
                        arr_18 [i_0] [(signed char)0] [i_2] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216)))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (unsigned char)255))))));
                        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1048549)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) | (6390672864569044317ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483641)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                    }
                    for (long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        arr_21 [i_0] = ((/* implicit */short) var_4);
                        arr_22 [i_0] [i_1] [(signed char)12] [i_6] |= var_11;
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1])) || (((((/* implicit */_Bool) -268435456)) && (((/* implicit */_Bool) 1048549))))));
                        arr_25 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */short) 20LL);
                    }
                }
            } 
        } 
        arr_26 [i_0] [i_0] &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
    }
}
