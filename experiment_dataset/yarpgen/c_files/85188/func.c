/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85188
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_10)) > ((-(((/* implicit */int) (unsigned short)65535))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (unsigned short)65535);
        var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (11568643717034614620ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)9)))))))));
    }
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((6878100356674936996ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        var_18 ^= ((/* implicit */int) (+(((36028794871480320LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (~(-1LL)));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)-1);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((long long int) 5535608280813295214ULL))) ? (((/* implicit */int) arr_13 [(unsigned short)21] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_10 [i_2]))))));
                    var_20 = ((/* implicit */unsigned int) (short)-5600);
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6144)) + (((/* implicit */int) var_4))));
                        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) != (var_11)));
                        arr_19 [i_1] [i_2] = ((/* implicit */unsigned int) var_1);
                        var_22 *= ((/* implicit */int) var_7);
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */int) (unsigned short)65535);
                        var_23 += ((/* implicit */unsigned long long int) var_1);
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */short) arr_9 [i_1] [i_1] [i_3]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_7] [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))));
                        var_26 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (586546339U)));
                        arr_28 [i_1] [i_1] [i_1] = ((/* implicit */short) var_1);
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) (unsigned short)65535);
                        var_28 += (unsigned short)65532;
                        var_29 = ((/* implicit */long long int) max((var_29), (((long long int) (unsigned short)65522))));
                    }
                }
            }
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                /* LoopSeq 4 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [(unsigned short)13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) * (12ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9)))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_23 [i_10 - 1] [i_1] [i_10 - 1] [(signed char)8] [i_10] [i_1] [i_1]))));
                        arr_39 [i_1] [i_1] [i_2] [i_1] [i_10] [i_11] = ((/* implicit */unsigned short) ((short) (unsigned short)65514));
                        arr_40 [i_9] [i_9] [i_9] [i_1] [i_9] = (~(var_2));
                        var_32 = (unsigned char)116;
                        var_33 -= ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                    }
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((long long int) (unsigned short)65513)))));
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_2])))))));
                    var_36 ^= ((/* implicit */unsigned char) var_12);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) ((int) (unsigned short)65526));
                    /* LoopSeq 4 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        arr_48 [i_1] [21ULL] [i_13] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))));
                        var_38 = ((/* implicit */_Bool) 4611686001247518720LL);
                    }
                    for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)12))));
                        arr_52 [i_1] [i_2] [(signed char)12] [i_1] [i_15] = ((/* implicit */_Bool) (unsigned short)32);
                    }
                    for (short i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        arr_57 [i_1] [i_1] [(unsigned short)16] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) var_5));
                        arr_58 [i_1] [i_1] = ((/* implicit */unsigned char) -3580923456658963741LL);
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        arr_61 [i_2] [i_1] [i_9] [i_1] [i_9] = ((/* implicit */_Bool) ((var_1) % (((/* implicit */int) arr_45 [i_1] [i_1] [i_1]))));
                        var_40 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-92))));
                        var_41 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) - (arr_4 [i_1])));
                    }
                    var_42 = var_9;
                    var_43 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */long long int) 0U)) >= (var_3)))) : (((int) (short)(-32767 - 1)))));
                    var_44 *= ((((/* implicit */int) var_13)) >> (((/* implicit */int) ((-3580923456658963741LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65513)))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    arr_64 [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_1])) ? (var_12) : (arr_55 [i_2])));
                    arr_65 [i_2] [i_2] [i_2] [i_9] [i_18] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_9] [i_18] [i_18])) ? (8768100095399838377LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113))))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)4))) : (var_6)))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_45 = var_11;
                        arr_70 [i_1] [i_2] [i_2] [i_2] [i_18] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                    }
                }
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (((~(var_6))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)192))))))));
                var_47 = ((/* implicit */long long int) (unsigned short)65535);
            }
            arr_71 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1722968882798839971LL)) ? (((/* implicit */long long int) arr_47 [i_2] [(signed char)15] [i_2] [i_1] [i_1])) : (var_3))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    for (int i_20 = 2; i_20 < 20; i_20 += 1) 
    {
        arr_76 [i_20] = ((/* implicit */unsigned int) var_10);
        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (unsigned short)448))));
    }
    var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) 18280883017269895585ULL))));
}
