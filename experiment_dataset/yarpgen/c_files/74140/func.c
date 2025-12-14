/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74140
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [8U] &= ((/* implicit */signed char) var_11);
                /* LoopSeq 4 */
                for (int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_1] [(unsigned short)4] |= min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(short)11])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)10661)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3817869060U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))) ? (((/* implicit */unsigned int) -506727764)) : (((unsigned int) var_6)))));
                    arr_14 [(unsigned short)15] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) (~((~(((/* implicit */int) var_15))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                                arr_21 [i_4] [i_0] [i_2] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_5] [(short)12] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15972828603883928383ULL)) || (((/* implicit */_Bool) 2876778695U))));
                                arr_31 [i_7] [i_6] [i_5] [i_0] [i_1] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_28 [(unsigned char)4] [i_1] [i_1] [(short)8] [2LL] [i_6] [2LL]))))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = (!(((/* implicit */_Bool) var_10)));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_12))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
                }
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_8] = ((/* implicit */_Bool) var_2);
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) 506727731)), (1418188610U)))), (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 1] [i_8]))) : (var_11)))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_14))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)3] [i_0])) | (arr_2 [i_1] [i_1]))))))) / (((/* implicit */int) ((_Bool) arr_6 [i_0 + 2] [i_0 + 2])))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8])) || (((/* implicit */_Bool) 2353880738U)))) ? ((+(var_13))) : (((/* implicit */int) ((15220760244866031782ULL) > (((/* implicit */unsigned long long int) var_14)))))));
                    var_22 ^= ((/* implicit */unsigned short) var_6);
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_46 [i_1] [i_0] [11U] [i_10] = ((/* implicit */short) ((((unsigned long long int) var_6)) % (((/* implicit */unsigned long long int) min((max((-4111395044890734580LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) min((-506727753), (((/* implicit */int) var_5))))))))));
                            /* LoopSeq 2 */
                            for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                            {
                                arr_50 [i_10] [i_1] [i_12 + 3] [i_11] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_3 [i_1]))));
                                arr_51 [i_0] = var_15;
                                arr_52 [i_0] [3U] [i_0] = ((/* implicit */signed char) min((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(short)6] [i_11] [i_0] [i_11] [i_12] [i_10] [(signed char)2]))) | (var_8)))))))));
                            }
                            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                            {
                                arr_55 [i_13 - 1] [i_0] [i_11] [i_10] [14] [i_0] [i_0] = ((/* implicit */short) var_8);
                                arr_56 [i_0] [i_0] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_1] [i_10] [i_11] [14ULL]))) % (max((((/* implicit */long long int) max((arr_6 [i_0] [i_1]), (((/* implicit */unsigned int) var_6))))), (min((arr_53 [i_13] [i_10] [i_1] [i_0]), (((/* implicit */long long int) var_6)))))));
                            }
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-25437)))), ((-(((/* implicit */int) (short)-6898))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 1; i_14 < 22; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            {
                var_24 -= ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_4)), (arr_57 [i_15 + 1]))), (((/* implicit */long long int) var_0))));
                arr_61 [i_15] = ((/* implicit */long long int) ((((max((1418188596U), (((/* implicit */unsigned int) var_3)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) > (var_2))))))) ? ((~(((/* implicit */int) ((var_13) != (((/* implicit */int) arr_59 [i_14] [i_14]))))))) : ((-(((/* implicit */int) (short)16681))))));
                arr_62 [i_14] [i_15] = ((/* implicit */unsigned short) (-(min((17646973003900700531ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned char i_19 = 4; i_19 < 12; i_19 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (max((((long long int) 15693209093477200163ULL)), (((/* implicit */long long int) (-(var_14)))))))))));
                            arr_76 [i_18] [i_18] [(unsigned char)5] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 506727722)) ? ((-(var_11))) : (min((var_11), (((/* implicit */long long int) arr_16 [i_19 + 1] [i_18] [i_19 - 4] [i_19 + 1]))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_19 + 1] [i_19 - 4] [(signed char)16] [i_19] [i_19 - 4]))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) var_13);
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_7);
}
