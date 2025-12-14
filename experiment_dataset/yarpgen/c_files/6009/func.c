/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6009
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) (+(16737783336770089391ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_3);
        arr_6 [i_0] = ((/* implicit */long long int) var_1);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((unsigned short)9010), (((/* implicit */unsigned short) var_4))))) ? (((((/* implicit */int) (unsigned short)2061)) + (((/* implicit */int) (unsigned short)9010)))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) (_Bool)0)))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (-169864704) : ((-(var_3))))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) var_9);
        var_11 = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            arr_13 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 4; i_3 < 12; i_3 += 2) 
            {
                arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 3] = ((/* implicit */int) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_24 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_23 [i_3])), (arr_21 [i_1] [i_2 + 3] [i_3] [9ULL] [i_4] [i_5]))) - (((/* implicit */unsigned int) arr_3 [i_4]))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1]))))))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                            arr_25 [i_4] [2] = ((/* implicit */unsigned short) ((unsigned long long int) (short)-21839));
                            arr_26 [(short)1] [i_4] [i_3] [i_2 - 1] [i_1] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+((-(9842739197082920522ULL))))))));
            }
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_13 = min((arr_28 [i_8]), (arr_28 [i_8]));
                            arr_36 [3LL] [i_2] [i_2] [i_2 + 1] [i_2] [i_8] = ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_19 [i_2] [i_6])) << (((10669823) - (10669810)))))))) ? (min((((((/* implicit */_Bool) 1587744585U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14443))) : (var_2))), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_6] [i_7] [i_8] [i_2 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 3] [i_2 + 1])) : (((/* implicit */int) arr_33 [i_8] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 33554368)), (144115188075855870ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    var_15 = ((/* implicit */short) arr_17 [i_1] [i_2 + 4] [i_2] [i_1] [i_9]);
                    /* LoopSeq 1 */
                    for (int i_10 = 4; i_10 < 13; i_10 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */long long int) 10669823)), (9223372036854775807LL))))));
                        arr_42 [(short)2] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_20 [i_9 + 2] [i_9 - 2])) + (var_6)))) ? (((/* implicit */int) var_4)) : (arr_20 [i_2 - 2] [i_2 - 2])));
                        arr_43 [i_1] [(short)4] [i_9] [i_9] [i_9 + 1] [i_9] [i_10] = ((((int) (unsigned char)65)) == (((((/* implicit */_Bool) var_8)) ? (arr_20 [i_2 + 1] [i_9 - 2]) : (var_1))));
                        var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 33554368)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_41 [i_1]) || (((/* implicit */_Bool) arr_11 [i_2] [i_9] [i_10])))))) : (((((/* implicit */unsigned long long int) var_1)) / (6ULL)))))));
                    }
                    var_18 = ((/* implicit */int) (_Bool)1);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_10 [i_1] [i_1] [i_1])))));
                    arr_47 [4U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-19193)) : (-10669824))) | (((((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_2] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (2095177696)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15149))) : (868502673U)))) : (((442719175776768176ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))))));
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 22; i_12 += 2) 
    {
        arr_52 [i_12] = ((/* implicit */unsigned long long int) arr_50 [i_12]);
        var_20 = ((/* implicit */unsigned short) var_8);
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 21; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 2) 
            {
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)19173)))));
                        arr_61 [i_12] [i_14 - 1] [i_13 - 4] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)28672))));
                    }
                } 
            } 
        } 
        arr_62 [i_12] = ((((/* implicit */int) arr_48 [i_12 + 1])) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)226))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10672)) ? (var_1) : (((/* implicit */int) var_4)))))))));
    }
    for (short i_16 = 1; i_16 < 20; i_16 += 2) 
    {
        arr_67 [i_16] = ((/* implicit */int) var_0);
        /* LoopSeq 3 */
        for (signed char i_17 = 1; i_17 < 21; i_17 += 2) 
        {
            var_22 += ((/* implicit */int) (short)-32765);
            var_23 = ((/* implicit */int) (signed char)115);
        }
        for (int i_18 = 1; i_18 < 21; i_18 += 2) 
        {
            var_24 = ((/* implicit */signed char) arr_48 [i_18 + 2]);
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_16 + 3] [i_16 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned int) var_9)), (arr_2 [i_16 + 4] [i_16 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_56 [i_16 + 4]))))))));
            arr_73 [i_16] [i_18 + 3] [i_18] = ((/* implicit */unsigned char) arr_51 [i_16]);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) arr_53 [i_16 + 4] [i_16] [i_16 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_19])) || (((/* implicit */_Bool) (short)-19155)))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned int) (short)19158)))));
            arr_76 [i_16] = ((int) arr_2 [i_16 + 1] [i_16 + 4]);
        }
    }
    var_28 = var_1;
}
