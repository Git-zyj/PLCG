/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59690
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-23223), (((/* implicit */short) ((((/* implicit */_Bool) (short)23235)) && (((/* implicit */_Bool) (unsigned short)1023))))))))) >= (((((/* implicit */_Bool) (unsigned short)64491)) ? (886627679U) : (2499656081U)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)23206)) ? ((-(2499656085U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3408339592U)) ? (886627676U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14453)))))) ? (((/* implicit */int) (short)6128)) : (((((/* implicit */int) arr_11 [i_2])) << (((((/* implicit */int) (short)4599)) - (4586))))))))));
                                var_18 = ((((/* implicit */_Bool) max((((short) var_9)), ((short)11397)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2499656068U)) || (((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */int) ((short) (unsigned short)10487))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] [7U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((((/* implicit */_Bool) (short)7610)) ? (((/* implicit */int) (short)11406)) : (((/* implicit */int) (short)-7610)))) & (((/* implicit */int) arr_10 [(short)6] [i_2] [i_3] [i_4])))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_8 [(short)4] [i_3 + 2])) : (((/* implicit */int) arr_8 [i_2] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (1795311211U)));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3408339620U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14956))) : (2499656068U)));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_8 [(unsigned short)4] [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-14956)) ? (((/* implicit */int) arr_8 [8] [i_5])) : (((/* implicit */int) (unsigned short)65520)))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_19 [(short)8] [i_1] [i_0] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) 3408339624U)) && (((/* implicit */_Bool) 886627671U)))) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
                    var_22 = var_6;
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        for (short i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            {
                                arr_24 [i_8] [i_6] [i_6] [i_1] &= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)4612)), (((((/* implicit */_Bool) (short)-5648)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))) : (3016428334U)))))) ? (886627671U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13U)) ? (1073741823) : (1073741823)))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((arr_21 [i_0] [(_Bool)1] [i_6] [i_8] [i_8 + 3]), (min((((/* implicit */unsigned int) max((((/* implicit */short) arr_9 [i_1] [(short)5] [(short)5] [i_1])), (var_2)))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1278538953U))))))))));
                                var_24 = ((/* implicit */unsigned short) ((((1001078142U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 2] [i_7 - 2] [i_8 + 1] [i_7 - 2]))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7598)) ? (-16146489) : (((/* implicit */int) arr_17 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 3; i_9 < 11; i_9 += 3) 
                    {
                        arr_28 [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((/* implicit */short) ((_Bool) (unsigned short)57395))), (((short) 3293889164U)))))));
                    }
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    arr_33 [7U] [7U] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_9))));
                    arr_34 [i_0] [i_0] [i_0 + 2] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3293889179U))))), (((((/* implicit */_Bool) (unsigned short)8116)) ? (arr_5 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_39 [i_0] [i_0 + 1] [(short)3] [(short)9] [i_0 + 1] [i_0 + 1] [i_0 + 2])) : (2147450880U)));
                            arr_41 [(short)6] [(short)4] [i_10] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_0] [i_11 - 1] [i_0] [6U] [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_0 + 1] [5U] [i_10] [(unsigned char)4]))));
                        }
                        for (short i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            arr_44 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_12 [i_0 + 1]))));
                            arr_45 [i_0] [(_Bool)1] [i_0] [i_10] [i_11 + 1] [i_11] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [0]))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65502)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
                            var_28 = ((short) var_16);
                        }
                        for (short i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */short) 2147516404U);
                            var_30 = ((/* implicit */short) max((var_30), (var_13)));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6904)) ? (1001078117U) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11 - 2]))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (2147450892U))))))));
                            arr_49 [i_0] [i_10] [(unsigned char)4] [i_11] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (unsigned char)33)))));
                        }
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) (short)7577)) << (((((/* implicit */int) var_9)) + (18540))))))));
                        var_33 = ((short) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned short)8140))));
                        arr_50 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)212))));
                        arr_51 [(short)8] [i_0] = ((/* implicit */_Bool) var_0);
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    arr_55 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(1177419653)))) ? (((/* implicit */int) min((arr_53 [i_0 + 2] [i_1] [i_1]), (var_7)))) : (((/* implicit */int) (short)-14306))));
                    arr_56 [7U] [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (1890998292U))), (((((/* implicit */_Bool) (unsigned short)57408)) ? (2045702011U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23908))))));
                }
            }
        } 
    } 
}
