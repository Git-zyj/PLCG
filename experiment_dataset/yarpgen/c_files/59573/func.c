/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59573
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967294U)) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2048))) : (arr_1 [i_0])))));
        var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1])))) - (((/* implicit */int) arr_5 [i_1])))))));
        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1])))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1763126888U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) : (4294967291U)))) == (arr_8 [i_2])));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_15 ^= ((/* implicit */int) max((((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) 4294967294U)) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [24ULL] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_4] [i_2]))) : (1U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4] [i_4]))))))))));
                            var_16 = ((/* implicit */unsigned int) (signed char)47);
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_7))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_3] [6U] [i_5])), ((-((-(((/* implicit */int) (short)-2046))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (short)2048))));
                            arr_22 [i_2] [i_2] [i_2] [i_6] = ((var_9) >> (((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_16 [(signed char)18] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)22219)))))))) - (17450773612826501014ULL))));
                            var_20 = ((/* implicit */unsigned char) ((((((4294967294U) << (((((/* implicit */int) (short)2048)) - (2039))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) >= (var_1))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (((-(arr_16 [i_3] [i_3] [i_6]))) != (((/* implicit */long long int) (+(((/* implicit */int) (short)-32761))))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_8 = 1; i_8 < 24; i_8 += 4) 
                            {
                                arr_27 [i_8] [i_6] [i_2] = ((unsigned int) 609908318U);
                                var_21 = ((/* implicit */unsigned short) 22U);
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((var_4), ((signed char)(-127 - 1))))) ? (min((((/* implicit */unsigned long long int) (short)-2053)), (var_5))) : (((/* implicit */unsigned long long int) ((4294967270U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))))), (var_0))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_20 [i_2] [i_6] [i_6] [i_8])), ((+(var_3)))))) ? (22U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_30 [i_6] [(unsigned short)4] [i_6] [i_3] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)33319))));
                                arr_31 [i_6] [i_7] [i_6] [i_2] [i_6] = ((/* implicit */short) (-(((int) (+(var_6))))));
                                arr_32 [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(2143289344U)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) % (arr_14 [i_3] [(signed char)3] [i_3]))))))) >> (((max((((/* implicit */unsigned long long int) max(((short)-2058), (((/* implicit */short) (unsigned char)243))))), (((((/* implicit */_Bool) 3526834198U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))))) - (18446744073709551485ULL)))));
                            }
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_17 [i_6] [i_6] [i_7])), ((unsigned short)1488))), (((/* implicit */unsigned short) arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6] [(signed char)5]))))) ? (max((((/* implicit */long long int) var_6)), (((((-638223239404506354LL) + (9223372036854775807LL))) << (((var_2) - (17450773612826501014ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_2] [i_6] [i_2]) >> (((var_9) - (6767030636022584075ULL))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (int i_11 = 3; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)10591)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7574))) : (var_8))) % (((2711794297U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_10] [i_3])))))))));
                            var_26 = ((/* implicit */signed char) max((max((var_9), (((/* implicit */unsigned long long int) arr_8 [i_3 - 1])))), ((~(3916674803852953578ULL)))));
                            /* LoopSeq 1 */
                            for (unsigned int i_12 = 1; i_12 < 24; i_12 += 1) 
                            {
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_12] [6U] [i_2] [i_2]))))) ? ((~(min((var_2), (arr_14 [i_12] [(unsigned short)0] [i_2]))))) : (((/* implicit */unsigned long long int) arr_10 [i_2] [11U]))));
                                var_28 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max(((short)2053), (((/* implicit */short) var_7))))), ((+(var_5))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_6) ^ (((/* implicit */int) arr_9 [17ULL] [i_12]))))), ((~(4294967291U))))))));
                                arr_42 [i_12] [i_10] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) max(((short)-5206), (((/* implicit */short) (unsigned char)249))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [16ULL] [16ULL] [16ULL]))) : (max((arr_6 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_3)))))) - (max((((var_2) / (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) (unsigned short)56869)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760)))))))));
                                var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(signed char)0]))) : (max((641936918161696311ULL), (((/* implicit */unsigned long long int) arr_24 [i_2] [i_3 + 2] [i_3 + 2] [8] [i_3 + 2] [i_10]))))));
                            }
                            var_30 = ((/* implicit */_Bool) ((signed char) min((max((((/* implicit */unsigned long long int) (signed char)126)), (var_5))), (var_2))));
                        }
                    } 
                } 
                arr_43 [i_2] [i_2] [i_3 - 1] = min(((-(max((var_5), (((/* implicit */unsigned long long int) arr_39 [i_3] [i_3 + 1] [i_2] [i_3] [i_2])))))), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))));
            }
        } 
    } 
}
