/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57077
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_16)) ? (max((((/* implicit */long long int) var_16)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_9)))))))) ? (var_8) : (((/* implicit */long long int) min((((/* implicit */int) var_10)), (((int) (unsigned char)86)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (~((+((+(((/* implicit */int) (unsigned short)0))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), ((+(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_15))) >> (((((((/* implicit */int) var_9)) << (((var_15) - (2326326315U))))) - (237166577)))))))));
                        var_19 = (unsigned char)84;
                        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0])), (((((/* implicit */_Bool) arr_9 [2U] [i_3])) ? (var_15) : (((/* implicit */unsigned int) var_16))))))) ? (((/* implicit */long long int) (-(3545109663U)))) : (arr_7 [i_0] [i_1] [i_2] [i_3])));
                    }
                    arr_13 [i_2] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)189))))));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14325890251803505328ULL)) ? (7609669715798444106LL) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)23949)) ? (((/* implicit */int) (unsigned short)24172)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)171)))))));
                    arr_18 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) == ((~(var_11))))) ? ((+(((((/* implicit */_Bool) var_16)) ? (arr_2 [(unsigned char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)107)))), (((/* implicit */int) ((unsigned char) var_0)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)255)))))))) : ((-(arr_1 [i_4] [i_5]))))))));
                        var_22 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)89))));
                        arr_21 [i_0] [i_1] [i_4] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_5)))))) ? (((var_6) / (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (var_16)))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    arr_22 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned char)98), ((unsigned char)255)))), ((~((~(((/* implicit */int) (signed char)25))))))));
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 + 2] [(short)4] [i_0] [6U])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) (-(16583285049226970541ULL))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_31 [i_8] [i_8] [i_1] [i_6] [i_1] [i_0] [i_0] |= ((((/* implicit */_Bool) arr_25 [i_1] [i_6] [i_6] [i_1] [i_8])) ? (arr_29 [i_8] [(signed char)18] [i_6] [i_7] [i_0] [i_6 + 2] [i_0]) : (arr_29 [(unsigned char)8] [i_7] [i_6] [i_7] [i_1] [i_6 + 1] [i_6]));
                            arr_32 [i_0] [i_1] [i_0] [i_1] [i_8] |= ((/* implicit */unsigned int) ((arr_28 [i_0] [i_1] [i_6] [i_7] [i_6 + 2] [i_6]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_6] [i_6] [i_6 - 1] [i_0]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_25 -= ((long long int) arr_16 [i_9 - 1] [i_6 - 1] [i_0] [i_0]);
                                arr_39 [i_0] [(signed char)6] [i_6] [i_9 + 2] [i_10] |= ((/* implicit */signed char) var_6);
                                var_26 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_0))))));
                                arr_40 [i_0] [i_0] [i_9] [i_1] [i_6] [i_9] [i_6] = ((/* implicit */unsigned short) (-(var_13)));
                            }
                        } 
                    } 
                }
                arr_41 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_35 [i_0] [i_0])) : (((/* implicit */int) arr_35 [i_1] [i_0])))))));
            }
        } 
    } 
}
