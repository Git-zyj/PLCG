/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73004
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13413190307753367611ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (6876243982196431014ULL))))));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) - (5837874243650737837LL)))))), ((((-(var_9))) | (var_11)))));
        arr_3 [i_0] [(short)1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) arr_0 [i_0]))))), (((unsigned long long int) max((0ULL), (((/* implicit */unsigned long long int) var_2)))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (15057104694171641177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) || (((((/* implicit */int) var_3)) > (((/* implicit */int) (_Bool)1)))))))));
        arr_6 [i_1] [1U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((unsigned char)123), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_0)) > (var_1))))))), (((max((var_8), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1] [i_1]), (var_6)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_13)) : (var_5)))) ? ((~(((/* implicit */int) (short)31)))) : (((/* implicit */int) ((unsigned short) var_6)))))) ? ((~(18446744073709551603ULL))) : (max((((/* implicit */unsigned long long int) (~(var_10)))), (((((/* implicit */unsigned long long int) var_12)) ^ (15057104694171641185ULL)))))));
        arr_8 [i_1 - 1] = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (var_11)))))), (((/* implicit */unsigned long long int) min((93882480U), (var_11))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) var_7);
                arr_16 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (_Bool)1)))), (min((-213001456), (((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                arr_26 [i_3] [i_2] = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))))))), (((/* implicit */unsigned int) ((signed char) ((signed char) var_4))))));
                                arr_27 [i_2] [i_4] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_3] [i_2] [i_3])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (min((((1443414411U) >> (((8996744054663163249ULL) - (8996744054663163230ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 213001455)))))))));
                                arr_28 [i_6] [i_2] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2] [i_3] [8U] [(short)4] [i_6]);
                                arr_29 [i_2] [(short)4] [2] [i_5] [(unsigned short)0] [i_4] [i_6] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) var_10)), (var_14))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                            }
                            for (signed char i_7 = 2; i_7 < 13; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10)))))) > (arr_31 [i_4] [i_2 - 1] [i_4] [i_2 - 1] [i_4] [i_4] [i_2 - 1]))))));
                                arr_34 [i_2] [i_4] [i_4] [(short)8] [i_2] = ((/* implicit */signed char) (+(arr_24 [i_7] [(_Bool)1] [i_5] [5] [i_3] [(_Bool)1] [i_2])));
                                arr_35 [i_4] [i_4] &= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(9223372036854775797LL))))))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4]))) > (var_9)))) >> ((((-(((/* implicit */int) (signed char)20)))) + (49)))))));
                            }
                            for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                            {
                                var_19 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15121))) : (min((var_14), (var_14))))) >> (((/* implicit */int) ((signed char) var_1)))));
                                var_20 *= ((/* implicit */short) (-(min((var_11), (((/* implicit */unsigned int) arr_11 [i_2 + 1]))))));
                                var_21 ^= ((/* implicit */signed char) ((((_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) arr_25 [8] [8] [i_3] [i_2]))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((((/* implicit */unsigned long long int) var_7)), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))));
                                arr_39 [i_2] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */long long int) var_12);
                            }
                            var_22 = var_6;
                        }
                    } 
                } 
                var_23 = (~(((((/* implicit */_Bool) ((signed char) (signed char)11))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)18832))))) : (4294967295U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_9 = 3; i_9 < 10; i_9 += 3) 
    {
        arr_43 [i_9 + 2] = ((/* implicit */signed char) var_5);
        var_24 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(signed char)8] [(signed char)8])) * (((/* implicit */int) var_6))));
    }
    var_25 *= min(((-(var_9))), (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
}
