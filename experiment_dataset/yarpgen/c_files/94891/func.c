/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94891
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_4 [i_0 + 2] = ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]));
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned int) ((short) arr_6 [i_0 - 1] [i_1] [i_1]));
            arr_9 [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */signed char) (-(((unsigned int) arr_5 [i_0] [i_0]))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (~(((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4164))))))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014398509481983ULL)) ? (2567056347U) : (((/* implicit */unsigned int) -1781088799))))) ? (((((/* implicit */unsigned long long int) 1U)) ^ (18014398509481983ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))));
        }
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) (-(min((((((/* implicit */_Bool) var_10)) ? (3934226074549745661ULL) : (2937720570526368688ULL))), (((/* implicit */unsigned long long int) ((((-1716008857) + (2147483647))) << (((var_18) - (13190797838943419279ULL))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_23 |= ((/* implicit */short) (signed char)-1);
            arr_15 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) (signed char)48)) : (var_14)))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_2 + 1]), (((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_2 + 1]), (arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 1])))) : (max((1099511627775ULL), (4097783026276693904ULL)))));
        }
        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            var_25 ^= ((/* implicit */signed char) 355091321);
            arr_20 [i_2] [i_2] [i_2] |= 665204597U;
            arr_21 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_2])) ? (-174278261) : (((/* implicit */int) var_3)))) != (((/* implicit */int) var_0))))), (var_12)));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (short)19747)) || (((/* implicit */_Bool) ((signed char) ((unsigned int) arr_11 [i_2])))))))));
            arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1781088794) : (((/* implicit */int) (short)27502)))))) ? (((((((/* implicit */_Bool) arr_14 [i_4] [i_2])) || (((/* implicit */_Bool) 10473869684493046815ULL)))) ? (arr_18 [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47617)) ? (1371547398U) : (((/* implicit */unsigned int) var_9))))))) : (((/* implicit */unsigned long long int) min(((-(952875831))), (min((-1781088813), (((/* implicit */int) (short)-19748)))))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_31 [i_7] [i_6] [i_5] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 1])))))));
                        arr_32 [i_6] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (1360388723) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1])))) < (((/* implicit */int) ((short) ((2567056367U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))));
                        arr_33 [i_2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1727910948U))))), (min((3688486978064571910LL), (((/* implicit */long long int) (signed char)7)))))))));
                        var_27 = ((/* implicit */short) max((min((arr_10 [i_2]), (arr_29 [i_2 - 1] [i_5] [i_5] [i_5] [i_6] [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16163)) ? (var_11) : (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) 17777135304908959385ULL)) ? (((/* implicit */int) arr_5 [(signed char)7] [(signed char)7])) : (((/* implicit */int) arr_30 [i_2 + 2] [i_2] [i_2] [i_5] [i_2 + 2] [i_7])))) : (((/* implicit */int) ((signed char) (signed char)111)))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 15509023503183182928ULL)) ? (((/* implicit */unsigned long long int) 263889238)) : (18014398509481983ULL))) : (0ULL))))));
                        arr_38 [i_5] [15] [i_8 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_2 + 2] [i_2 + 2] [i_6] [i_2 + 2] [i_8] [i_2 + 2])) | (((/* implicit */int) var_5))))) ? (arr_34 [i_5 + 1] [i_5 + 2]) : (((/* implicit */unsigned long long int) 1727910948U)));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) 2923419897U)) : (((3934226074549745661ULL) | (((/* implicit */unsigned long long int) arr_26 [i_8] [i_6]))))));
                        var_30 ^= ((/* implicit */unsigned int) ((signed char) arr_25 [i_5 - 1] [i_5]));
                    }
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_29 [i_2] [i_2] [i_6] [i_5 - 1] [i_2 - 1] [i_5 - 1])), (min((((/* implicit */unsigned long long int) 8697005133276149670LL)), (18446744073709551615ULL))))))));
                        var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_9])) ? (((/* implicit */int) ((signed char) 3906193019U))) : (((((/* implicit */_Bool) -8604071207673239611LL)) ? (arr_35 [i_9] [i_6] [i_5] [i_2] [i_2]) : (((/* implicit */int) arr_36 [i_2] [i_5] [i_6] [i_5]))))))), (arr_6 [i_6] [i_5 + 1] [i_2])));
                        arr_42 [i_2] [i_2] [i_5] [i_6] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_41 [i_2] [i_5] [i_6] [i_9]), (((/* implicit */unsigned long long int) arr_19 [i_9]))))) ? (((758998302195846994LL) | (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) (~(arr_1 [i_5] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4168330499067561897ULL)))))))) : (max((min((((/* implicit */unsigned long long int) 1226493374)), (15509023503183182927ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned int) var_6)) : (arr_27 [i_2] [i_2] [i_2] [i_2]))))))));
                    }
                    arr_43 [i_2] [i_2 + 2] [i_5 + 2] [i_6] = ((/* implicit */int) (-((-(max((15509023503183182908ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
}
