/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61170
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)19600)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) == (((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_4))))));
        arr_2 [i_0 - 1] [i_0 - 1] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_9)) / (var_0))) : (var_0));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        arr_5 [4LL] &= ((/* implicit */short) (_Bool)0);
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((min((var_0), (((/* implicit */int) var_6)))), (((((/* implicit */int) (short)31951)) - (((/* implicit */int) var_2))))))) >= (5913035194556232131LL)));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (short i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) (unsigned short)59032);
                        arr_19 [i_3] [i_2] [i_4] [i_2] [i_2] = max((((((var_0) + (2147483647))) << (((min((4011719751U), (var_8))) - (2793743735U))))), (((/* implicit */int) var_11)));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (short)6284)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-18753)) >= (((/* implicit */int) (unsigned short)33437))))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)82))))))))) : (((((((/* implicit */_Bool) (unsigned short)34453)) || (var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)))));
                        arr_20 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)31951)) + (((/* implicit */int) (short)-32763)))), (((/* implicit */int) (unsigned short)12336))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_6)))) << (((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_9))));
                        var_15 += ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (_Bool)1))))) >= (((((/* implicit */_Bool) -1978167956)) ? (-1870047827) : (-1870047826)))))), (min((max((var_8), (var_3))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-29260)), (-1978167956))))))));
                    }
                    for (short i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_16 = min((min((((/* implicit */unsigned int) (_Bool)1)), (934826760U))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -3069851346577883290LL)) ? (((/* implicit */int) var_9)) : (var_0))), (max((var_0), (((/* implicit */int) (unsigned char)195))))))));
                        arr_23 [i_3 - 2] [i_2] = ((/* implicit */unsigned char) max((3020544674U), (3543384023U)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_27 [i_6] [i_3 - 3] [i_3 - 4] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                            var_17 &= ((/* implicit */unsigned short) var_8);
                        }
                    }
                    /* vectorizable */
                    for (short i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            var_18 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (3400565504U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) << (((((((/* implicit */int) var_5)) << (((var_0) + (1885911183))))) - (88604670)))));
                            arr_32 [i_2] [i_2] [i_2] = ((/* implicit */short) var_1);
                        }
                        /* LoopSeq 4 */
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_19 ^= ((((/* implicit */int) var_6)) - (((((/* implicit */int) (short)1917)) + (var_0))));
                            var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_2] [i_2] [i_2] [i_11] [(unsigned short)0] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)0))))) % (var_1)));
                            arr_39 [i_2] [i_2] [i_2] [(unsigned short)20] [i_11] = ((/* implicit */unsigned char) (unsigned short)9629);
                            var_21 = var_3;
                            arr_40 [i_2] [i_2] [i_2] [i_2] [i_8] [i_11] [(short)6] = ((/* implicit */int) (_Bool)0);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (1870047826) : (((/* implicit */int) var_10))));
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5746))) - (((var_3) << (((((/* implicit */int) (short)23588)) - (23565)))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_46 [(unsigned char)18] [(unsigned char)18] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))));
                            arr_47 [i_13] [i_2] [(short)15] [i_2] [(short)15] = ((/* implicit */short) ((var_1) & (((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)0))))));
                            arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] [i_2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_4))))) && (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (5913035194556232131LL)))));
                            arr_49 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] [i_4] = var_1;
                        }
                        var_23 = ((/* implicit */unsigned short) var_2);
                        var_24 = ((/* implicit */int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        arr_53 [i_14] [i_3] [i_4] [(unsigned short)20] [i_14] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((-9044945052664460244LL) == (((/* implicit */long long int) var_0))))) << (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (-7916754958910571200LL)))));
                        arr_54 [i_14] [i_4] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))) == (((/* implicit */int) (short)-6616))));
                        arr_55 [i_2] [i_2] [i_2] [i_14] = ((/* implicit */unsigned short) -713937187);
                    }
                    arr_56 [i_2] [(short)11] [(short)9] [i_2] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18))) : (var_3))), (349912166U))) % (max((((/* implicit */unsigned int) var_7)), (min((var_3), (((/* implicit */unsigned int) (short)23643))))))));
                    var_25 = ((/* implicit */int) var_11);
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            arr_62 [i_2] [i_15] [i_15] [i_16] [i_16] [i_3] [i_2] = ((/* implicit */unsigned int) ((var_0) ^ (max((max((((/* implicit */int) (short)-23594)), (1370551999))), (((/* implicit */int) max((var_11), (var_7))))))));
                            arr_63 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */long long int) var_10);
                            arr_64 [i_2] [(_Bool)1] [i_15] [i_4] [(unsigned short)5] [i_2] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_2)) ? (-570292663) : (((/* implicit */int) var_5)))) - (((var_0) - (((/* implicit */int) var_10)))))), (-1870364207)));
                        }
                        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                        {
                            arr_69 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1370551979), (var_0)))) ? (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned short)28526)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-3200567224079162252LL))) == (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (unsigned short)18532)))))))) : (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_8)))), (max((((/* implicit */int) (short)25404)), (var_1)))))));
                            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2023227365)) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)0)) % (var_0))) * (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) var_7)))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28526)) / (var_1)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -205951371))))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_1))));
                        }
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                        {
                            arr_72 [i_2] [i_3] [i_2] [i_4] [i_15] [i_15] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-18437)) : (((/* implicit */int) (unsigned short)24443))));
                            var_28 ^= ((/* implicit */short) ((-628243094781714741LL) >= (((-339771689349544631LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37318)))))));
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-7272)) : (((/* implicit */int) var_10))))) ? (((2230038557U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (var_3));
                        }
                        var_30 *= ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) 1117213391)), (-3370105696069367860LL))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-30381)) + (2147483647))) << (((var_8) - (2793743735U))))))))) && (((((/* implicit */long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (16374))) - (28)))))) == (max((((/* implicit */long long int) 2064928738U)), (-3682489901621212104LL)))))));
                        var_31 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) (unsigned short)24457)) ? (2230038557U) : (2360712101U))))) % (((/* implicit */unsigned int) -1395528481)));
                    }
                    for (int i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
                    {
                        arr_75 [i_19] [12U] [i_2] [12U] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_0)) : (2064928759U))) > (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) <= (((((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned int) var_5)), (4294967295U))) : (min((((/* implicit */unsigned int) (unsigned char)192)), (2386509198U)))))));
                        var_32 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned int) var_10)), (var_3))), (((/* implicit */unsigned int) (unsigned short)57613)))), (((/* implicit */unsigned int) max((1636237446), (max((((/* implicit */int) var_9)), (765236244))))))));
                        var_33 = ((/* implicit */long long int) min((1370551999), (((/* implicit */int) (short)-213))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (2230038572U))) * (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (-1370552011)))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-197)), (max(((unsigned short)57629), (((/* implicit */unsigned short) (_Bool)1)))))))))))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) min((((/* implicit */unsigned int) max((-191186060), (((/* implicit */int) min(((unsigned short)992), (((/* implicit */unsigned short) var_5)))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (var_3)))) ? (((2297762543U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7922))))) : (min((((/* implicit */unsigned int) var_2)), (2334448603U))))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        var_36 ^= ((/* implicit */unsigned char) max((var_9), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)18432)), ((unsigned short)7922)))) && (var_9)))));
                        arr_79 [i_20] [i_2] [i_2] [i_2] = ((/* implicit */short) max((var_6), (((/* implicit */unsigned short) (short)-571))));
                        var_37 = ((/* implicit */int) ((-9223372036854775800LL) / (((/* implicit */long long int) ((16U) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        var_38 = max((((/* implicit */unsigned int) min(((short)16181), (((/* implicit */short) ((((/* implicit */_Bool) (short)6865)) && (((/* implicit */_Bool) (short)19697)))))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned int) max((-1281511663), (((/* implicit */int) (unsigned short)65385))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)13707))) - (2230038557U))))));
                    }
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        var_39 *= ((/* implicit */short) ((min((((((/* implicit */int) var_4)) / (var_0))), (((var_9) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2)))))) % (var_1)));
                        arr_83 [i_2] [i_21] = (short)0;
                        var_40 = ((/* implicit */int) 4294967295U);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_22 = 0; i_22 < 22; i_22 += 4) 
    {
        arr_86 [(short)3] [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((((/* implicit */int) (unsigned short)32704)) | (((/* implicit */int) var_10))))));
        arr_87 [(short)13] = ((/* implicit */short) var_3);
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1531309440)) / (var_8))))));
    }
    var_42 |= var_8;
}
