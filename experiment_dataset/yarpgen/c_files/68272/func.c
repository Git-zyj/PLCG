/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68272
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((long long int) (unsigned short)18126))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_12 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)224)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (var_4)));
            var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)6827))));
        }
        arr_6 [i_0] [i_0 - 1] &= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
        var_15 += ((/* implicit */unsigned long long int) ((long long int) -7816736274133103025LL));
    }
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) -7816736274133103026LL)) & (4149342654778347940ULL))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7816736274133103024LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (var_3)))) ? ((+(var_4))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18130)))));
            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28652)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_25 [i_2] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(6U))))));
                            arr_26 [i_2] [(unsigned char)1] [i_5] [(unsigned short)1] [i_2] [i_5] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_2] [i_2] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (-9223372036854775807LL - 1LL)));
                            var_18 = ((/* implicit */_Bool) (unsigned short)0);
                            var_19 = ((/* implicit */_Bool) ((short) ((_Bool) (short)-21961)));
                            var_20 = ((/* implicit */long long int) ((unsigned long long int) 204004305892326830LL));
                        }
                        arr_31 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10523)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10061))));
                        arr_32 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (unsigned short)39330)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43480)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)38))))) : (((((/* implicit */_Bool) (unsigned short)18108)) ? (((/* implicit */unsigned long long int) var_3)) : (2963942797595102250ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            var_22 = (+((-(((/* implicit */int) (unsigned char)94)))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (short)6271)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)212)))))));
                            var_24 = (unsigned char)31;
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0))));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                var_26 = (+(((/* implicit */int) (_Bool)1)));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(-2147483645)))) >= (((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21340))) : (4149342654778347942ULL)))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1600854959006765344ULL)) ? (-7816736274133103036LL) : (8462951510222595623LL)));
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (8799690255017179637LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                arr_46 [i_2] = ((/* implicit */unsigned short) (~(var_4)));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_50 [i_14] [i_2] [(unsigned char)6] = ((/* implicit */unsigned int) 14087794237202519541ULL);
            /* LoopSeq 4 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8462951510222595591LL)) ? (((/* implicit */int) var_7)) : (946961064)))) ? (((/* implicit */int) ((_Bool) 15482801276114449366ULL))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8))))), (((((/* implicit */_Bool) -7816736274133103014LL)) ? (((/* implicit */unsigned long long int) 5858746180428079097LL)) : (13441083604687379507ULL)))))));
                var_31 = ((/* implicit */unsigned short) (+(((unsigned long long int) var_6))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_16 = 4; i_16 < 13; i_16 += 2) 
                {
                    var_32 = ((/* implicit */_Bool) ((long long int) 2963942797595102250ULL));
                    var_33 = ((/* implicit */_Bool) ((unsigned short) (short)(-32767 - 1)));
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    arr_58 [i_2] [6U] [i_2] [i_14] [6U] [12U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)5277)))) : (var_8)));
                    arr_59 [(_Bool)1] [i_14] [(_Bool)1] [i_2] [i_17] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4229))) : (-8462951510222595606LL)))));
                    arr_60 [i_2] [i_14] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5277)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)65535))));
                }
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        {
                            arr_65 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)194))))), (min((((/* implicit */long long int) (unsigned short)8537)), (-1064343589305974858LL)))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((unsigned long long int) (+(min((((/* implicit */long long int) (unsigned short)8537)), (var_4)))))))));
                            arr_66 [i_19] [i_14] [i_14] [i_14] [i_14] [i_14] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8799690255017179623LL)) ? (((/* implicit */int) (short)-14542)) : (((/* implicit */int) var_6))))) ? (((unsigned int) (unsigned char)240)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) var_7)))))))) ? (((long long int) (unsigned char)81)) : (((/* implicit */long long int) (+((+(623206935))))))));
                            var_35 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 15482801276114449365ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6647))) : (13441083604687379514ULL)))));
                            arr_67 [i_2] [i_14] [(signed char)5] [i_18] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) (unsigned short)59327)), (((/* implicit */long long int) ((((/* implicit */_Bool) -8799690255017179614LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (1580825719513746823LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min((-2147483645), (((/* implicit */int) (unsigned char)164)))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_20 = 1; i_20 < 11; i_20 += 2) 
            {
                arr_72 [(signed char)9] [i_2] [i_20] [i_20] = ((/* implicit */short) (unsigned short)65530);
                var_36 -= ((/* implicit */unsigned char) min(((+(((/* implicit */int) (short)-29797)))), (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) | (-3880871021002177757LL)))))));
            }
            for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 14; i_22 += 4) 
                {
                    for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (unsigned short)51139))));
                            var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-95)))), (((/* implicit */int) ((short) (_Bool)0)))))), (min((((/* implicit */long long int) (signed char)2)), (max((((/* implicit */long long int) (_Bool)1)), (6210761401581625193LL)))))));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */_Bool) min(((~(min((7425406682336744873LL), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) max((min(((unsigned short)59327), (((/* implicit */unsigned short) (short)28497)))), (((/* implicit */unsigned short) min(((unsigned char)138), ((unsigned char)222)))))))));
                var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)59340))));
            }
            /* vectorizable */
            for (int i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned char i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20751))) : (2057946570U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18)))));
                            var_43 = ((/* implicit */_Bool) var_9);
                            arr_91 [i_2] [i_14] [i_24] [i_2] [i_26] [i_26] = ((/* implicit */unsigned long long int) var_6);
                            arr_92 [i_2] [i_2] [i_14] [i_24] [i_2] [(unsigned char)7] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)61))));
                            arr_93 [i_2] [i_2] [i_26] = ((/* implicit */int) var_2);
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)-3))));
            }
        }
        var_45 = ((/* implicit */unsigned long long int) (+(min((2147483644), (((/* implicit */int) (unsigned char)85))))));
        arr_94 [i_2] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) - (((((/* implicit */_Bool) (unsigned char)215)) ? (((((/* implicit */_Bool) (unsigned short)31015)) ? (17091713316770714492ULL) : (((/* implicit */unsigned long long int) -2147483645)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        var_46 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) -1447838223)), ((((_Bool)1) ? (2743141048U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
}
