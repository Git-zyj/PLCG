/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73016
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) 4859329129686229507LL)) ? (4859329129686229507LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))))) : (max((arr_8 [i_0] [i_1] [i_2 - 3] [i_0]), (arr_8 [(unsigned char)3] [i_1] [i_2 + 1] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-107);
                        arr_14 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_8 [i_2 + 2] [i_1] [i_2 + 2] [i_3 + 3])) ^ (((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */unsigned long long int) var_6)) : (3451535116282020603ULL)))));
                        var_11 = ((/* implicit */unsigned int) min((min((14340560211564345947ULL), (((/* implicit */unsigned long long int) 15332324U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)196))))) ? (((long long int) (unsigned char)196)) : (max((((/* implicit */long long int) (_Bool)1)), (-5694935630049160343LL))))))));
                        var_12 ^= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) -8785787969338252434LL)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)59839)))))) & (((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_3 + 3])))))) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-25611)) && (((/* implicit */_Bool) 4714546937434654870ULL)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_16 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_3 + 1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 5987022214761923541LL)))) <= (13732197136274896745ULL))))) : (((((arr_7 [i_0] [(_Bool)1] [(_Bool)1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) (unsigned short)62820))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((arr_11 [i_2 - 3] [i_3 + 3] [i_3]) && (((/* implicit */_Bool) var_6)))) ? ((-(arr_16 [i_2 - 3] [i_3 + 3] [i_2 - 3] [i_3 + 3] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))))));
                            var_15 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)205)) > (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_3 - 1])))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551593ULL))) << (((((((/* implicit */_Bool) 4714546937434654882ULL)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_1)))) - (145)))))) ? (((/* implicit */int) ((unsigned char) ((_Bool) arr_15 [i_0] [7LL] [7LL] [i_3] [i_5])))) : (((/* implicit */int) (signed char)50)))))));
                            var_17 = var_6;
                            var_18 = ((/* implicit */short) (unsigned short)51764);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_11 [i_3] [i_2 + 2] [i_0]), (arr_11 [i_2 + 3] [i_1] [i_2 - 2])))) == ((+(((/* implicit */int) (signed char)64))))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_10 [i_0] [(short)16] [i_1] [i_0])));
                        var_20 = ((/* implicit */_Bool) (~((+(arr_17 [i_2] [i_2] [i_2] [i_2 - 3] [i_2])))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) (~(-762353855)));
                            var_22 &= ((/* implicit */unsigned long long int) ((3647952548U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59)))));
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] [i_7] = min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (((-762353855) & (((/* implicit */int) (short)-32767))))))), (var_2));
                            var_23 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (short)6522)))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 16; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-12)) - (((/* implicit */int) arr_19 [3LL] [i_1] [i_1] [i_1] [i_1]))))), (1125899902648320ULL)));
                            arr_31 [7U] [i_2 + 1] [i_2 + 1] [i_2 - 4] [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) 4366263811815665287LL))), (((((/* implicit */int) (short)-30308)) * (((/* implicit */int) var_9))))))), (max((max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551603ULL))), (((var_4) ? (3155180807254702697ULL) : (1125899902648320ULL)))))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-97)) && (((/* implicit */_Bool) var_2)))))))) ? (min((((/* implicit */unsigned int) max(((unsigned short)9535), (((/* implicit */unsigned short) (unsigned char)211))))), (((((/* implicit */_Bool) (signed char)42)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
            } 
        } 
        var_25 *= ((min((((/* implicit */unsigned long long int) (unsigned char)27)), (13732197136274896734ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) max((max((-839148774458237873LL), (((/* implicit */long long int) 917224654)))), (((/* implicit */long long int) ((arr_22 [i_9 - 1]) / (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9])))))));
                    var_27 = ((/* implicit */int) ((_Bool) ((((int) var_1)) * (((/* implicit */int) min(((signed char)107), ((signed char)88)))))));
                    var_28 = ((/* implicit */long long int) arr_11 [i_9] [i_9 - 1] [i_9 - 1]);
                }
            } 
        } 
        arr_36 [(signed char)10] = var_2;
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) (~(max((8645653303162661430ULL), (((/* implicit */unsigned long long int) (unsigned char)191))))));
            var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (3588649259U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34665))))), (((/* implicit */unsigned int) var_7)))))));
        }
        for (long long int i_12 = 2; i_12 < 16; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_31 |= ((/* implicit */unsigned int) (signed char)-49);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        arr_49 [i_13] [i_12 - 1] [i_12] [i_12 - 1] [5LL] [i_12 - 2] [i_12] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_3 [i_15])) || (((/* implicit */_Bool) arr_0 [(unsigned char)4] [i_0])))));
                        arr_50 [i_15] [i_13] [i_13] [i_13] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [(short)15] [i_0]);
                    }
                    arr_51 [i_13] = ((/* implicit */_Bool) arr_35 [i_12] [i_12 - 1] [i_12 - 2] [i_12 - 1]);
                }
                for (long long int i_16 = 2; i_16 < 13; i_16 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_54 [i_16 - 2] [i_12 - 1] [i_12 + 1] [i_0]))), ((+(((/* implicit */int) (unsigned char)80))))));
                    var_33 = ((/* implicit */unsigned char) (short)13523);
                    /* LoopSeq 2 */
                    for (signed char i_17 = 3; i_17 < 16; i_17 += 2) 
                    {
                        arr_59 [i_0] [i_12 - 2] [i_13] [(signed char)10] [i_13] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_42 [i_13] [i_13]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))))))))));
                        arr_60 [i_0] [(unsigned short)9] [i_17] [i_16 - 1] [i_13] = ((/* implicit */_Bool) (unsigned char)57);
                        var_34 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-4395)), (((((/* implicit */_Bool) arr_58 [i_17 - 2] [i_13] [i_16 + 3] [i_13] [3U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((short) 3403730037U)), (((/* implicit */short) arr_0 [i_17] [i_17 - 1]))))) ? (((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), (var_9))), (((/* implicit */short) (unsigned char)112))))) : (min((((/* implicit */int) (unsigned char)164)), (((((/* implicit */int) (signed char)90)) & (((/* implicit */int) (_Bool)1))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_18 = 3; i_18 < 14; i_18 += 2) 
                    {
                        arr_63 [i_0] [i_13] [i_13] [i_16] [i_18 + 2] [13LL] = ((/* implicit */long long int) var_7);
                        arr_64 [i_13] [i_13] [i_13] [i_16 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_18] [i_18] [i_18 - 2])) ? (4430632829079040031LL) : (((/* implicit */long long int) 3738786638U))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2040862245)) ? (1710015785U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45727)))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)239)) / (53856359)));
                        var_38 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_43 [i_0] [i_12 - 1] [(short)5])));
                    }
                    var_39 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_25 [i_12] [i_12] [i_13] [i_13] [i_16 + 2] [i_12])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */long long int) 2076248671U)) : (8404577872246481252LL)))) && (((/* implicit */_Bool) ((unsigned char) arr_20 [i_16] [i_16] [(signed char)9] [i_12 - 1] [14] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 2) 
                    {
                        var_40 -= ((_Bool) ((max((((/* implicit */unsigned long long int) -53856376)), (11ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23786)))));
                        var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41074)))))) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_68 [i_13] [i_13] [8ULL] [i_16 + 1] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_19 + 1] [i_0]))))), (6528959369714639456ULL)));
                        var_42 |= ((/* implicit */_Bool) ((min((((/* implicit */int) var_0)), (-514722226))) | (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_12] [i_12 - 1] [i_19 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)29))))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((short) ((10384863663116620323ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                }
                var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_39 [i_12 - 1] [i_12 + 1])) <= (((/* implicit */int) arr_39 [i_12 + 1] [i_12 + 1])))) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) ((((/* implicit */_Bool) 8373270256458811478ULL)) || (((((/* implicit */_Bool) arr_10 [i_0] [i_12] [i_13] [i_0])) || ((_Bool)1))))))));
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) != (((/* implicit */int) arr_61 [i_12] [i_13] [i_12 - 2] [i_13] [i_12 - 1]))));
            }
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) var_7))))), ((~(18U))))))))));
        }
    }
    var_47 = ((/* implicit */unsigned long long int) max((var_47), ((-(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1939250038)) & (2602832091641112928LL)))) * (13197291480389569338ULL)))))));
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 19; i_20 += 2) 
    {
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 3; i_22 < 15; i_22 += 3) 
                {
                    for (unsigned short i_23 = 0; i_23 < 19; i_23 += 2) 
                    {
                        {
                            arr_80 [i_20] [i_21 - 1] [(unsigned char)13] [(unsigned char)13] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_74 [i_21 - 1] [3U]))))));
                            arr_81 [i_20] [i_22] [(unsigned char)14] [i_20] = ((/* implicit */int) (_Bool)0);
                        }
                    } 
                } 
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((signed char) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1))))))));
                arr_82 [i_20] [i_20] [i_20] = ((/* implicit */signed char) (-(((min((1510477677U), (var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1])))))));
            }
        } 
    } 
}
