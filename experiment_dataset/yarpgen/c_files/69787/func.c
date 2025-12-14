/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69787
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
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_16))))), (((short) var_1)))))));
    var_19 = ((/* implicit */short) -1LL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (4LL) : (-13LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
            arr_6 [i_0] [6ULL] |= ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) -9LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL))))), (((/* implicit */long long int) ((-12LL) != (12LL))))));
            arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (unsigned char)16)))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(-3LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_6) - (var_6)))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((_Bool) (short)623)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)135))))) : (((((-32LL) + (9223372036854775807LL))) << (((49LL) - (49LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        arr_13 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((/* implicit */long long int) (-(var_4)))) : (-32LL)));
        arr_14 [i_2] = ((/* implicit */unsigned int) ((_Bool) var_13));
        arr_15 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) ((((long long int) var_16)) * (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)208)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
        {
            arr_22 [i_3] [16U] [i_4] = var_6;
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
            {
                arr_25 [i_3] [16] [i_3 + 1] [i_3] = var_16;
                arr_26 [i_5] [i_5] [i_5] [2U] = ((/* implicit */unsigned int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-50))))))), (-509451808)));
                arr_27 [i_3] [i_3] [2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-7174)))))))));
                arr_28 [(unsigned short)0] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)));
            }
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        {
                            arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_15);
                            arr_36 [i_3 - 3] = ((/* implicit */int) 0LL);
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_30 [i_3 - 3] [i_3 - 3] [i_3]);
                            arr_38 [i_3] [i_3] [i_3] [i_3] [i_3 - 2] = ((/* implicit */signed char) (unsigned short)5621);
                        }
                    } 
                } 
                arr_39 [i_3] [i_4] [i_4] [i_6] |= ((/* implicit */unsigned char) 920112343U);
            }
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_48 [i_10] [i_9] [(unsigned char)4] [i_9] [i_9] [i_9] [(signed char)0] = ((min((12LL), (((/* implicit */long long int) ((6U) & (((/* implicit */unsigned int) 2045890698))))))) & (((/* implicit */long long int) arr_29 [i_4])));
                            arr_49 [i_9] [7U] [i_10] [i_9] [13U] = ((/* implicit */unsigned char) arr_41 [i_9] [i_10] [i_11]);
                            arr_50 [i_10] [i_4] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-609)))))) : (((unsigned long long int) (unsigned short)9193)))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_14 = 1; i_14 < 16; i_14 += 3) 
                        {
                            arr_58 [i_4] [i_13] = ((/* implicit */unsigned int) 12LL);
                            arr_59 [i_3] [i_12 + 2] [i_12 + 2] [(signed char)16] = ((/* implicit */int) -1LL);
                            arr_60 [i_12] [i_12] [6] = ((/* implicit */unsigned long long int) (+(1425405494U)));
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
                        {
                            arr_64 [i_3] [i_4] [i_12] [i_13] [i_15] [i_15] [i_13] = var_4;
                            arr_65 [i_3 + 1] [i_13] [i_3 + 1] [i_13] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) (short)24568)) >> (((((/* implicit */int) arr_34 [i_3 - 1] [i_13] [i_15] [i_15])) - (116)))));
                            arr_66 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_13] [i_3] = ((/* implicit */int) 0LL);
                        }
                        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                        {
                            arr_70 [14LL] [14LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59918)) ? (((((/* implicit */_Bool) 2045890698)) ? (14357159682724901059ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5054508531059048583ULL)) ? (-37LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            arr_71 [i_3] [(unsigned char)10] [i_12] [i_12] [i_12] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((long long int) arr_54 [i_3] [i_3] [i_3] [i_3] [i_16]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)40123)))) : (((/* implicit */int) var_3))))));
                            arr_72 [i_13] [i_12] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59911))))) ? ((~(((/* implicit */int) arr_23 [i_13] [i_12 + 4])))) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        arr_73 [(unsigned char)16] [i_3] [i_3] [10ULL] [i_3] [(unsigned char)16] |= ((/* implicit */signed char) arr_47 [i_13] [i_13] [i_12] [7ULL] [i_3 + 1] [i_3 + 1]);
                        arr_74 [i_13] [i_4] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((long long int) (unsigned char)7))))) ? (-2782585343130639144LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
        {
            arr_78 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) 12LL);
            arr_79 [i_17] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_17] [i_17])) ? (((unsigned int) (~(((/* implicit */int) (unsigned char)84))))) : (((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59903)))))));
            arr_80 [i_3] = ((/* implicit */unsigned int) var_10);
        }
        /* LoopSeq 2 */
        for (unsigned char i_18 = 2; i_18 < 16; i_18 += 4) /* same iter space */
        {
            arr_83 [i_3] [i_18] = ((/* implicit */unsigned short) var_9);
            arr_84 [i_3 - 3] [i_3] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))))) ? (4311956969267831626LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned char i_19 = 2; i_19 < 16; i_19 += 4) /* same iter space */
        {
            arr_87 [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)25)), ((+(((/* implicit */int) var_2))))));
            arr_88 [i_19] = 4311956969267831634LL;
        }
    }
}
