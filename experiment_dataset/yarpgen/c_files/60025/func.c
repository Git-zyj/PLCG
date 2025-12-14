/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60025
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)15351)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-272)))), (((/* implicit */int) (short)5))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4340145438900052369ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (1922941259U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) var_7)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) var_14))))), ((+(var_4))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_0 [i_0] [i_0]))))) <= (((((/* implicit */_Bool) arr_1 [(short)6])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5))))))));
        arr_2 [5U] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) 8216044572552221488LL)) : (8841773830262016777ULL))))))), (((((/* implicit */int) arr_0 [i_0] [7U])) % (((/* implicit */int) ((short) (short)-6)))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)6)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_4 [i_1])))) > ((-(((/* implicit */int) max(((short)-29668), (((/* implicit */short) arr_3 [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */short) arr_4 [i_1]);
        arr_7 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)-25420))))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        arr_11 [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((1U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1])))));
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [i_2])) <= (((/* implicit */int) (unsigned short)12429)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_14 [(signed char)3] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_2 - 1]));
            var_19 = ((/* implicit */unsigned int) min((var_19), ((+(3792835031U)))));
        }
        arr_15 [(short)3] &= ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_2 - 1]))));
    }
    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14))) != (3157302079U)));
        arr_18 [11LL] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (arr_1 [i_4])))))) && (((/* implicit */_Bool) 34091302912LL))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_4] [i_4 - 2])) | ((~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_4 [10U])) : (((/* implicit */int) arr_3 [i_4]))))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_22 += ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-10)), (arr_8 [i_5])))), (((((/* implicit */long long int) arr_16 [i_5])) ^ (((arr_20 [(unsigned short)5]) >> (((((/* implicit */int) (unsigned char)180)) - (126)))))))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-23800))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(_Bool)1]))) + (arr_1 [2])))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1366607702U)) ? (10750467339495695686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) != (arr_9 [i_5])))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) 1984U))));
        arr_23 [(short)4] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (signed char)-8)))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [6U] [6U]))) : (((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_13 [i_5]) : (((/* implicit */unsigned long long int) (~(arr_16 [i_5]))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_24 = ((/* implicit */short) (~(arr_25 [i_6])));
            arr_31 [(_Bool)1] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_6]))) > (4410399410782481715LL)))) ^ ((~(((/* implicit */int) (unsigned char)172))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned char)5]))) - (((3516003243U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))));
            var_26 = ((/* implicit */signed char) arr_26 [i_6]);
        }
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    arr_39 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_34 [i_9] [i_8]))))))) < (((unsigned int) min((arr_24 [i_8] [i_6]), (((/* implicit */unsigned int) arr_37 [i_6] [i_8])))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 4; i_10 < 19; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1989U)) ? (1989U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(signed char)11])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_38 [i_6] [i_8]))))))));
                        arr_42 [19LL] [17] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 2951190196U)) ? (arr_33 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6] [i_6]))))) - (((/* implicit */unsigned long long int) ((arr_32 [i_6] [i_9] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) (short)3)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (3777256075161584970ULL) : (((/* implicit */unsigned long long int) 1592363504U)))))))))));
                    }
                    var_28 = ((/* implicit */short) min(((-(((/* implicit */int) ((unsigned short) 471822151U))))), (((/* implicit */int) (short)-5507))));
                    arr_43 [i_6] [i_9] = ((/* implicit */_Bool) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) < (33292288U))), (min(((_Bool)0), ((_Bool)1))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_29 [i_6] [i_6])), (((unsigned int) 1984U))))) : (((arr_29 [i_6] [i_6]) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) - (2147483648U)))) : (((long long int) arr_33 [i_6]))))));
                }
            } 
        } 
        arr_44 [i_6] [(short)12] = ((/* implicit */unsigned long long int) 4177920U);
    }
    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 3) 
    {
        var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned short)28309)))), ((+(((/* implicit */int) (_Bool)1))))))), ((~(((arr_32 [i_11] [i_11 - 2] [i_11 - 1]) & (((/* implicit */long long int) 2013244412U))))))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) arr_17 [i_11 + 2] [i_11 + 2])), (arr_34 [i_11 - 2] [i_11 - 1])))) * (((/* implicit */int) arr_37 [i_11] [i_11]))));
        var_31 ^= ((/* implicit */unsigned short) (~(((long long int) arr_34 [i_11 + 1] [i_11 - 2]))));
    }
    var_32 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) == (((/* implicit */int) var_7))));
    var_33 = max((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) 13U))))) ? ((+(17074241029867121901ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)247)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483616)) ? ((~(-34091302912LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4294967288U))))))));
}
