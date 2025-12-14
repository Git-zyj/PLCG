/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90480
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)-85)) == (((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [15LL] [i_2 + 1]) << (((((/* implicit */int) var_4)) - (25709)))))) ? ((-(((/* implicit */int) arr_6 [i_2 + 1])))) : (((((/* implicit */int) (signed char)-85)) / (((/* implicit */int) var_3))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_2 + 1] [i_1] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))))))) - ((+(5438024545156860160LL)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_3] [i_3] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) | (((((/* implicit */_Bool) 1930931422393901398ULL)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75)))))));
                        arr_15 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-2985)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)30767))))));
                        arr_16 [i_0] [i_0] = ((/* implicit */short) var_8);
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_20 [i_4] [i_2 - 2] [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)74))))));
                        arr_21 [i_0] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) (unsigned char)27)));
                        arr_22 [(unsigned char)6] [(short)0] [i_2] [i_1] [i_2] [(unsigned char)6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32766))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        arr_26 [i_5] [i_2 - 2] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)4096))));
                        arr_27 [i_5] [i_5] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 8367414487864145363LL)))) * (4856070579994736413ULL)));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_31 [i_5] [i_1] [i_1] = ((4829778613359853324ULL) * (4152338160428812591ULL));
                            arr_32 [i_6] [i_5] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */short) (+((-(var_2)))));
                            arr_33 [i_5] [i_1] [i_2 - 1] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)112)) ? (((arr_9 [i_0] [3LL] [3LL] [3LL]) ? (12703826646547287452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (short)32767)) ? (arr_4 [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_2 + 1] [i_5] [i_6] [i_0])))))));
                            arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (short)9969);
                        }
                        arr_35 [i_0] [i_1] [i_5] [(unsigned short)17] [(unsigned char)0] = ((/* implicit */signed char) ((13616965460349698291ULL) * (9223372036854775817ULL)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_39 [i_7] [i_7] [i_2] [i_7] [(unsigned short)4] = ((/* implicit */_Bool) ((18444492273895866368ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)210)) : (arr_12 [i_0] [i_0] [i_1] [i_2] [i_7]))))));
                        arr_40 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_2 - 1] [i_7] [i_7]))))), (((((/* implicit */_Bool) (signed char)-119)) ? (((((/* implicit */_Bool) (unsigned short)40805)) ? (16443083871138066170ULL) : (9223372036854775807ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099511627775ULL)) ? (-3080190256456525052LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))))))))));
                        arr_41 [i_0] [i_1] [i_2 - 1] [i_2] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)32760)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (18444492273895866368ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -45039582166695764LL)) ? (9223372036854775807LL) : (-8005428643713553022LL))))))));
                        arr_42 [i_7] [i_1] [i_1] [(_Bool)1] [(unsigned short)13] [i_0] = ((/* implicit */long long int) (+(var_12)));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    arr_46 [i_0] [i_1] [i_8] = ((/* implicit */short) (((~(arr_7 [i_0] [i_8 + 1] [i_8 + 1]))) > (((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_1] [i_1] [i_8 + 1] [i_8]))))));
                    arr_47 [i_0] [i_0] [i_1] [11U] = ((/* implicit */long long int) var_10);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_50 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (8537491117382977721LL))))));
                        arr_51 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_8] [i_8] [(unsigned short)4] [i_8 + 1]))));
                        arr_52 [(unsigned short)2] [i_0] [(short)2] [i_9] = ((/* implicit */unsigned char) var_3);
                        arr_53 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)125)) | (var_10))) / (((/* implicit */int) var_14))));
                        arr_54 [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) (signed char)-85);
                    }
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_57 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)-85))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            arr_60 [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1216298000)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (315511719030970447LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_10] [i_0] [i_11])) + (((/* implicit */int) (unsigned short)59769))))) : (min((((/* implicit */unsigned long long int) -5396601349382352632LL)), (18446744073709551615ULL))))) | (((((/* implicit */_Bool) 4829778613359853328ULL)) ? (((/* implicit */unsigned long long int) arr_55 [i_0] [i_8] [i_8 + 1])) : (arr_25 [i_8] [i_8] [i_8] [i_8] [11] [i_8 + 1])))));
                            arr_61 [i_11] [i_10] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8268208414070171822LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)147)) ? (8268208414070171814LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((+(var_12)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)236))))) : (7336097971137504695LL)));
                            arr_62 [i_11] [i_10] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(17602220499031573089ULL)))) ? (((/* implicit */int) (unsigned short)43429)) : (((/* implicit */int) (unsigned char)147))));
                        }
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_65 [i_0] [i_10] [i_0] [5LL] [i_0] = ((/* implicit */_Bool) ((short) 6414557881284746273ULL));
                            arr_66 [i_10] [i_8] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)19466))))) ? ((((~(var_2))) - (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)73))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((unsigned char)182), ((unsigned char)73)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7583130229084127127ULL))))))))));
                        }
                        arr_67 [i_1] [i_0] [i_0] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)0))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_71 [i_13] [i_8] [i_1] [i_13] [i_1] [i_1] = ((/* implicit */_Bool) var_13);
                        arr_72 [i_0] [i_0] [6ULL] [i_0] [i_13] = ((/* implicit */signed char) (+(-1599687424)));
                        arr_73 [i_8] [i_8] [i_8] [(signed char)20] = ((/* implicit */unsigned long long int) var_2);
                    }
                    arr_74 [i_0] [i_1] [i_8 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)168)) & (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_0] [i_1] [i_8 + 1])) ? (((/* implicit */int) (short)448)) : (((/* implicit */int) (unsigned char)232))))) : (((10144487359588597370ULL) * (((/* implicit */unsigned long long int) -3104973492093736622LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3104973492093736621LL))))));
                }
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 1; i_15 < 20; i_15 += 3) 
                    {
                        {
                            arr_81 [i_15] [i_15] = ((((/* implicit */_Bool) arr_36 [i_1] [i_15])) ? (((7565843758269605667ULL) & (((/* implicit */unsigned long long int) -3104973492093736622LL)))) : (((((/* implicit */_Bool) ((var_8) ? (4625463607896773079ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183)))))) ? (arr_7 [i_15 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 12032186192424805348ULL)))))));
                            arr_82 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)31744)) : ((-(((/* implicit */int) (unsigned char)112))))))));
                            /* LoopSeq 2 */
                            for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                            {
                                arr_86 [i_0] [i_0] [i_0] [i_15 - 1] [i_16] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)512))) == (7336097971137504695LL)))) * (((/* implicit */int) ((((/* implicit */int) arr_45 [19LL])) >= (((/* implicit */int) arr_56 [i_0] [i_1] [i_14 - 1] [i_0] [i_15 - 1] [i_16])))))))));
                                arr_87 [i_15] [i_0] = ((/* implicit */_Bool) (+((~(((6414557881284746267ULL) ^ (((/* implicit */unsigned long long int) 4294967295U))))))));
                                arr_88 [i_0] [i_15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)64))) ? (max((((unsigned long long int) (unsigned short)43429)), (((/* implicit */unsigned long long int) (unsigned char)192)))) : (((/* implicit */unsigned long long int) (+(var_6))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                            {
                                arr_93 [i_0] [i_14] [i_17] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_75 [i_0] [18LL] [i_14])) ? (arr_75 [i_0] [i_0] [i_0]) : (216160281256355511LL)));
                                arr_94 [i_15] = ((/* implicit */long long int) (((-(10863613844625424466ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)-17750)))))));
                                arr_95 [i_0] [i_14] [i_15] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_0] [i_1] [i_0] [i_17])) ? (216160281256355507LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned char)255))))) : (18446742974197923842ULL)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
    var_16 = ((/* implicit */_Bool) (+(9412882606350028828ULL)));
}
