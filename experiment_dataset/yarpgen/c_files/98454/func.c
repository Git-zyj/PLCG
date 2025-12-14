/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98454
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_4 [i_0 + 1]))))));
                            arr_11 [i_0] [(signed char)11] [i_1] [i_2] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) var_13)), (var_0)))));
                            arr_12 [i_3] [(unsigned char)1] [i_2] [(unsigned char)1] [(unsigned short)5] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)31520)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (max((arr_0 [(unsigned short)10]), (arr_5 [i_0 + 1] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)172))));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)12])) || (((/* implicit */_Bool) -8853336)))))))) <= (max((((var_8) << (((((/* implicit */int) (unsigned char)255)) - (255))))), (arr_15 [i_6] [i_6] [i_6] [(signed char)10] [i_6])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */int) max(((unsigned short)19074), (((/* implicit */unsigned short) arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_3)))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_7] [i_9] [i_9])))))));
                            arr_31 [i_8] [i_8] [i_10] [i_8] [i_8] = ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_8))), (max((arr_15 [i_9] [(signed char)8] [(signed char)8] [i_9] [15]), (((/* implicit */int) (unsigned short)3))))))) ? ((-(((/* implicit */int) (unsigned short)19081)))) : (min((((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [(_Bool)0])), ((-(((/* implicit */int) var_15)))))));
                            var_21 = ((/* implicit */short) (-(((arr_28 [i_10] [i_10]) >> (((((/* implicit */int) (unsigned char)76)) - (66)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((unsigned char) ((max((((/* implicit */int) (unsigned short)19074)), (arr_35 [i_7] [i_7] [i_7] [i_12]))) << (((((/* implicit */int) ((signed char) arr_6 [i_7] [i_8] [i_11] [11ULL]))) - (30))))));
                            arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] = min((max(((-(var_8))), (((((/* implicit */int) arr_18 [i_7] [i_7] [i_7])) >> (((((/* implicit */int) (unsigned char)76)) - (67))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_27 [i_12] [i_11] [(unsigned char)5]) << (((2400157810683995416ULL) - (2400157810683995416ULL))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) arr_35 [i_7] [i_7] [2ULL] [i_7]);
                                arr_47 [i_7] [i_7] [8] [i_7] [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)19074)) ? (((/* implicit */int) arr_9 [i_7] [i_7])) : (((((/* implicit */int) (unsigned short)46463)) - (((/* implicit */int) var_4)))))), (((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)65535)))) ^ (((/* implicit */int) max(((signed char)-89), ((signed char)11))))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_7] [i_8] [10])) ? (((/* implicit */int) ((unsigned short) arr_30 [i_7] [6LL] [6LL] [i_7] [i_7] [i_7]))) : ((+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        for (signed char i_17 = 3; i_17 < 19; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (int i_19 = 2; i_19 < 18; i_19 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((((((/* implicit */int) arr_48 [i_17])) * (((/* implicit */int) arr_51 [5] [i_16] [i_16])))), (((((/* implicit */int) arr_55 [10LL] [i_17 - 3] [i_17] [i_17 + 2] [i_17 + 1])) + (((/* implicit */int) arr_55 [i_17] [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 3]))))));
                            arr_57 [i_19] [i_16] [i_17] [i_17 + 2] [i_16] = ((/* implicit */long long int) (+((~(((/* implicit */int) max(((unsigned short)16529), ((unsigned short)46462))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 21; i_20 += 4) 
                {
                    for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)192)) | (arr_60 [i_20] [i_20] [i_20] [i_20])))))), (min((((/* implicit */long long int) min((arr_51 [i_21] [i_20] [i_16]), (((/* implicit */unsigned char) var_10))))), (((long long int) (unsigned short)65510))))));
                            arr_62 [i_20] [4] [i_20] [i_20] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_16] [i_17] [17] [i_21])))))))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9223372036854775802LL))))), ((unsigned char)89))));
                            arr_63 [i_20] [i_21] = ((/* implicit */int) (signed char)93);
                            arr_64 [i_16] [i_16] [i_16] [i_20] = ((/* implicit */signed char) ((unsigned short) (+(arr_53 [i_20] [(unsigned char)20] [i_20] [i_20]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_22 = 1; i_22 < 20; i_22 += 4) 
    {
        for (short i_23 = 0; i_23 < 22; i_23 += 4) 
        {
            for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_25 = 0; i_25 < 22; i_25 += 4) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 22; i_26 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned char) ((long long int) ((arr_75 [i_22] [i_22 + 1] [i_22 - 1] [i_22] [i_22 + 1]) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_58 [i_26] [i_25] [i_24] [i_22 + 1])))))));
                                var_29 ^= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_27 = 3; i_27 < 18; i_27 += 4) 
                    {
                        for (unsigned short i_28 = 2; i_28 < 20; i_28 += 4) 
                        {
                            {
                                arr_83 [i_22] [i_24] [i_22] [i_27 - 2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_28 + 1] [i_23]))) >= (min((-1639905182663758364LL), (((/* implicit */long long int) arr_68 [i_23] [2]))))));
                                var_30 = ((/* implicit */int) min((((unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (16095871023305859719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))), (((/* implicit */unsigned short) max((var_15), (arr_82 [i_22] [i_22] [i_22 + 1] [12] [i_22] [i_22 + 1] [i_22 + 1]))))));
                                var_31 -= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))), (arr_53 [14LL] [19ULL] [i_22 + 1] [i_22]))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(min((arr_78 [i_28] [i_27] [i_23] [i_23]), (((/* implicit */long long int) arr_71 [i_22] [i_23] [i_24] [i_28]))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_22] [i_22 + 1]))) * (((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9855))) : (13419570590349752148ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_29 = 3; i_29 < 21; i_29 += 4) 
                    {
                        for (unsigned long long int i_30 = 0; i_30 < 22; i_30 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((signed char) ((unsigned short) (_Bool)0)))), (min(((unsigned char)83), (arr_82 [i_30] [i_29 - 1] [i_30] [i_30] [i_30] [i_29] [i_29 - 1])))));
                                arr_88 [i_22] [7ULL] [i_22] = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
