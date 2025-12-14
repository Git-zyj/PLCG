/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59858
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
    var_14 &= ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) == (((/* implicit */int) (short)3238)))))))));
                var_15 = ((/* implicit */unsigned char) (((-((~(((/* implicit */int) (unsigned char)179)))))) + (((((1071525929) / (((/* implicit */int) (short)3255)))) >> (((((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (short)-4676)))) + (60884)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (unsigned char)86))));
                    arr_9 [i_2] [i_0 - 1] [i_2] |= ((/* implicit */signed char) (-(((((/* implicit */int) ((7259363445737179679ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) | ((-(((/* implicit */int) (short)0))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_17 *= ((/* implicit */int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)126)) >= (((/* implicit */int) (short)-3233))))) * (((/* implicit */int) (short)-4676)))))));
                            arr_14 [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))));
                        }
                        for (int i_5 = 1; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 11U))));
                            arr_17 [(_Bool)0] [i_2] [i_2] [i_3] [i_5] &= ((/* implicit */unsigned short) (short)8176);
                            var_20 -= ((/* implicit */int) (_Bool)1);
                        }
                        for (int i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) (short)4675);
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [i_6] = ((/* implicit */unsigned long long int) (((((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)63488)))) != (((/* implicit */int) ((((/* implicit */unsigned int) -1803293267)) >= (0U))))));
                            arr_21 [4ULL] [4ULL] [(_Bool)1] [4ULL] [i_0] = ((/* implicit */short) (-2147483647 - 1));
                            arr_22 [i_3] [i_0] [(unsigned short)2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                        }
                    }
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-2778)) == (((/* implicit */int) (unsigned short)0)))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (4294967295U)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (+(9223372036854775807LL))))))))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                arr_30 [i_0] = ((/* implicit */unsigned char) (+(19U)));
                                var_24 ^= (~((-2147483647 - 1)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_10 = 1; i_10 < 23; i_10 += 2) 
                    {
                        arr_33 [i_0] [i_0] = ((/* implicit */long long int) (-(4294967295U)));
                        arr_34 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */long long int) (((+(1366543543))) / (((/* implicit */int) (short)3238))));
                        arr_35 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % ((~(((/* implicit */int) (unsigned char)63))))));
                        /* LoopSeq 3 */
                        for (short i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            var_25 *= ((/* implicit */short) (!(((/* implicit */_Bool) -2147483633))));
                            arr_39 [i_1] [i_1] [i_1] [i_11] [i_11] |= ((/* implicit */unsigned int) (~(-240942032)));
                            arr_40 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (+((-(((/* implicit */int) (short)23957)))));
                            var_26 = ((((/* implicit */int) (short)32751)) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023))))));
                            arr_41 [i_0] [i_0] = ((/* implicit */_Bool) (+((-(4294967295U)))));
                        }
                        for (short i_12 = 2; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) -1169139196))));
                            arr_45 [i_0] [i_1] [i_0] [i_7] [i_1] [i_12] = ((/* implicit */unsigned char) (short)4108);
                            var_28 &= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_13 = 2; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            arr_49 [i_0] = (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (unsigned short)4997)));
                            arr_50 [i_0] [i_1] [i_7] [i_10] = ((/* implicit */unsigned char) (+(((1737725107U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63488)))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [21] = ((/* implicit */_Bool) (unsigned char)255);
                            arr_52 [i_0] [(_Bool)1] [i_0] [i_10] [i_0] = 2147483647;
                        }
                        arr_53 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1049060081342077311ULL)))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(2557242189U)))) || (((/* implicit */_Bool) (+(4294967295U))))));
                        arr_57 [i_14] [i_1] [i_0] [i_0 - 2] = ((/* implicit */long long int) (~(4294967295U)));
                    }
                    for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        arr_60 [i_7] [4LL] [i_15] &= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 1285248142807353582ULL)) || (((/* implicit */_Bool) -593352860))))));
                        var_29 += ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        /* LoopSeq 4 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_65 [i_0] [i_1] [i_7] [i_1] [i_16] [i_0] [4] = ((/* implicit */unsigned short) ((9223372036854775793LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-22745)))));
                            arr_66 [i_0] [i_1] [i_0] [i_0] [i_15] [4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 26U)) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_67 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-4104))))) | (14657561073127642635ULL)));
                        }
                        for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
                        {
                            arr_71 [14] [14] [i_7] [i_17] [i_15] |= ((((/* implicit */int) (unsigned short)1375)) + (((/* implicit */int) (unsigned short)32768)));
                            arr_72 [i_15] [i_15] [i_7] [i_0] [15U] [i_0] [(unsigned short)15] = ((/* implicit */unsigned short) 441195509509595309ULL);
                            arr_73 [i_0] [i_1] [(short)18] [(short)18] [20ULL] [i_15] [i_15] = (-(((/* implicit */int) (unsigned short)8192)));
                        }
                        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                        {
                            arr_77 [i_0] [i_1 + 1] [i_7] [i_0] [i_15] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)9808))));
                            arr_78 [(short)22] [(short)22] [i_1] [i_7] [(short)22] [i_7] [(short)22] &= ((/* implicit */_Bool) 919427444);
                        }
                        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(14657561073127642635ULL))))));
                            arr_81 [i_0 + 1] [i_1] [i_0 + 1] [i_7] [i_15] [i_1] [i_1] |= ((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))));
                        }
                        arr_82 [(signed char)16] [0U] [(signed char)16] [i_0] = ((/* implicit */int) (((~(4294967280U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))));
                    }
                    arr_83 [i_0] = ((/* implicit */signed char) (short)-20366);
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_87 [i_0] [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)255);
                        var_31 = ((/* implicit */signed char) (short)4108);
                        /* LoopSeq 3 */
                        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) (unsigned short)40186);
                            arr_90 [i_0] [i_0] [i_7] [(signed char)6] [i_21] [(unsigned char)6] = ((/* implicit */_Bool) (unsigned short)40186);
                        }
                        for (unsigned short i_22 = 0; i_22 < 24; i_22 += 3) /* same iter space */
                        {
                            arr_93 [i_0] [i_1] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)128);
                            arr_94 [i_0] [i_1] [i_1] [(_Bool)1] [(unsigned short)16] [(_Bool)1] [i_22] = ((/* implicit */unsigned short) (short)2649);
                            arr_95 [i_0] [i_0] = (short)20356;
                        }
                        for (unsigned short i_23 = 0; i_23 < 24; i_23 += 3) /* same iter space */
                        {
                            arr_99 [17LL] [i_1] [i_1] [(_Bool)1] [i_0] [(signed char)18] [i_1] = ((/* implicit */unsigned short) 218697117U);
                            var_33 = ((/* implicit */int) max((var_33), ((-(((/* implicit */int) (_Bool)1))))));
                            arr_100 [(_Bool)1] [(_Bool)1] [(signed char)8] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
                            arr_101 [(unsigned short)20] [(unsigned short)20] [0U] [i_7] [i_23] &= ((/* implicit */short) (unsigned short)34904);
                        }
                        arr_102 [i_1 - 1] [i_7] [i_7] |= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32764))) & (18446744073709551604ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2649)))));
                    }
                    for (int i_24 = 1; i_24 < 23; i_24 += 3) 
                    {
                        arr_105 [(unsigned short)1] [i_0] [(unsigned char)22] [i_7] = (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34908)) || (((/* implicit */_Bool) 14657561073127642635ULL))))));
                        arr_106 [i_0] = ((((/* implicit */int) (short)4670)) + (((-1) | (682119318))));
                        var_34 -= ((/* implicit */_Bool) 1228823029U);
                    }
                }
                arr_107 [i_0] [i_0] [(unsigned short)18] = ((/* implicit */signed char) (((-((+(((/* implicit */int) (_Bool)1)))))) ^ ((-(((/* implicit */int) ((((/* implicit */int) (short)-32756)) < (4194304))))))));
            }
        } 
    } 
}
