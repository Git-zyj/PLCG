/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74030
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-123))));
    }
    var_22 = ((/* implicit */long long int) 0U);
    var_23 = max((((/* implicit */unsigned short) (signed char)123)), ((unsigned short)36999));
    /* LoopSeq 1 */
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_24 += ((/* implicit */_Bool) arr_4 [i_1 + 1]);
            var_25 = ((/* implicit */_Bool) (-(max((max((((/* implicit */int) var_17)), (var_12))), (((/* implicit */int) (signed char)48))))));
            arr_9 [(short)6] [i_1] = ((/* implicit */_Bool) max((arr_0 [i_1]), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
            arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-126))))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-3684)), (1447740830U)))))))));
            var_26 = ((/* implicit */signed char) (((_Bool)1) ? (((4294967280U) | (25U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_1])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_3] [i_1 + 1] [i_1 + 1] = ((/* implicit */int) (_Bool)1);
            var_27 ^= ((/* implicit */_Bool) 2096640LL);
            arr_15 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)26504), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (max((10043020135450299005ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1]))))));
            arr_16 [i_1] [i_3] [i_1 + 1] = (_Bool)1;
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (1524010203U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))));
            arr_20 [i_1] [(short)4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8403723938259252611ULL)) ? (12818618695213873500ULL) : (((/* implicit */unsigned long long int) arr_19 [i_1 - 1]))))) ? (((unsigned int) (unsigned char)153)) : (max((arr_19 [i_1 - 1]), (((/* implicit */unsigned int) (unsigned short)15872))))));
            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_1] [i_4]))));
        }
        var_30 = (short)16384;
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
            {
                var_31 |= ((/* implicit */short) arr_19 [i_1]);
                arr_28 [i_6] = ((/* implicit */long long int) var_16);
            }
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
            {
                var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [i_1] [i_5 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_8 [i_7] [i_5]))))) : (var_15)));
                arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(12818618695213873500ULL)));
            }
            var_33 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1]))));
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(12818618695213873483ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_32 [i_1 + 1] [i_8]))))) ? (((/* implicit */int) ((signed char) arr_27 [i_1 - 1] [i_1 - 1] [i_1]))) : (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(arr_21 [i_1 - 1] [i_1 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)31032)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [7U])) ? (((/* implicit */int) (unsigned char)146)) : (1271034997)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (3452987583770795917ULL)))));
                        var_36 ^= ((/* implicit */unsigned char) (signed char)-72);
                        arr_41 [i_1] [i_1] [(unsigned char)6] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */int) var_13)) << (((6238971062632850871LL) - (6238971062632850861LL)))))));
                        arr_42 [(_Bool)1] [i_8] [i_9] [(_Bool)1] [i_11] [(unsigned char)3] = ((/* implicit */long long int) max(((short)-16379), (((/* implicit */short) arr_26 [i_11] [i_10] [i_9] [i_1]))));
                    }
                    arr_43 [i_9] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                    arr_44 [i_1] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) (unsigned char)108)) | (((/* implicit */int) (unsigned char)104)))), (((/* implicit */int) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) arr_22 [i_1] [i_1] [i_1 - 1]))))))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-126)), ((unsigned char)14))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                {
                    arr_47 [i_1] [i_1] [i_1 + 1] [4] = ((/* implicit */unsigned char) (~(8403723938259252610ULL)));
                    var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_12])) ? (576460683583946752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-15158))))), (5264875080380836501LL))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                {
                    arr_51 [i_1] [i_8] [i_13] [i_13] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((2147483633), (((/* implicit */int) (signed char)110))))) & ((+((-(12818618695213873483ULL)))))));
                    arr_52 [i_1 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)-121)) : (239188209)))) ^ (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (var_1)))))));
                    arr_53 [i_9] [(unsigned short)11] [i_9] [i_8] [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (short)32767)), (9230171126711630478ULL))) | (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_4)))))))));
                    arr_54 [i_8] [i_8] [i_9] [i_13] [8U] = ((/* implicit */long long int) 10043020135450299005ULL);
                }
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((12818618695213873517ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29625)))))) ? (((((/* implicit */int) arr_5 [i_1 + 1])) & (((/* implicit */int) (unsigned char)94)))) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1]))));
                var_39 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 3452987583770795935ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (max((var_19), (((/* implicit */unsigned long long int) 3995133586U))))));
            }
            var_40 += ((/* implicit */unsigned short) max((arr_33 [i_1 + 1] [(signed char)0] [i_8]), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), (min((var_4), (arr_3 [i_1 - 1]))))))));
        }
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
        {
            arr_57 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_34 [i_1 - 1])) ^ (14993756489938755713ULL)));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-16129), (((/* implicit */short) arr_12 [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_30 [i_1] [i_1 - 1] [i_14] [i_14])) : (((/* implicit */int) arr_30 [i_1] [i_1 + 1] [i_14] [i_14]))))) : (max((max((70368744177663LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((3452987583770795919ULL) != (var_19))))))));
            arr_58 [i_1] [i_1] [i_1] &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45344))))))))));
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((14050361869748534534ULL), (0ULL))), (((/* implicit */unsigned long long int) arr_35 [i_1 - 1]))))) ? ((+(((/* implicit */int) var_14)))) : (arr_0 [i_15]))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) / (max(((+(14993756489938755713ULL))), (5628125378495678113ULL)))));
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_26 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])), ((unsigned char)252)))) ? (((/* implicit */int) max(((short)-32266), (((/* implicit */short) arr_3 [i_1 + 1]))))) : ((+(((/* implicit */int) arr_26 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))))))));
                            var_45 = var_14;
                        }
                    } 
                } 
                arr_68 [i_14] [i_15] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_15])) ? (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1])) ? (5ULL) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (arr_64 [i_1] [i_14] [i_15] [5U])))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) || ((_Bool)1)))), ((signed char)127))))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_73 [i_15] [i_15] [5ULL] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1303808239)))) ? (((719664364) | (((/* implicit */int) (!(var_5)))))) : (((/* implicit */int) var_16))));
                            var_46 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_67 [i_1] [i_14] [i_1] [i_18] [i_19]))))), (min((((/* implicit */unsigned int) arr_38 [(unsigned char)1] [0U] [(short)0] [8ULL])), (2958595697U))))));
                            var_47 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)35)) ? (-1841582986540486531LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1])))))));
                        }
                    } 
                } 
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_48 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25439)) & (1988162869)))) ^ (max((((/* implicit */unsigned long long int) (signed char)14)), (18446744073709551615ULL)))))));
                arr_77 [i_1] [i_14] [i_20] = ((/* implicit */_Bool) max(((unsigned short)20198), (((/* implicit */unsigned short) (_Bool)1))));
                var_49 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5628125378495678145ULL)))))))) ? (max((1988162869), (((/* implicit */int) arr_3 [i_1 - 1])))) : (((/* implicit */int) arr_18 [i_14]))));
            }
        }
        for (unsigned int i_21 = 0; i_21 < 13; i_21 += 4) /* same iter space */
        {
            arr_82 [i_1 - 1] [i_1 - 1] [i_21] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(arr_19 [i_1 + 1])))), (((((/* implicit */unsigned long long int) arr_19 [i_1])) | (18446744073709551615ULL)))));
            /* LoopSeq 4 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_86 [(signed char)12] [(signed char)12] [i_22] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4064)) ? (-1919858137000282048LL) : (((/* implicit */long long int) 869634010))))) ? (((/* implicit */long long int) ((int) 1919858137000282067LL))) : (4396972769280LL))) ^ (((/* implicit */long long int) max((((/* implicit */int) arr_85 [i_1 + 1] [i_1 + 1])), (max((((/* implicit */int) (unsigned char)152)), (198784920))))))));
                var_50 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)100))))));
                var_51 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) 1195739624U)), (arr_33 [i_1 + 1] [i_1 - 1] [i_1 + 1]))), (((arr_33 [i_1 + 1] [i_1 + 1] [i_1 + 1]) | (arr_33 [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                var_52 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16531346501310155953ULL)))));
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_53 = ((/* implicit */signed char) (-2147483647 - 1));
                arr_89 [i_1] [i_23] = ((/* implicit */signed char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_59 [i_1 + 1] [i_21] [i_23]))));
            }
            /* vectorizable */
            for (short i_24 = 1; i_24 < 11; i_24 += 4) 
            {
                arr_94 [i_1 - 1] [i_1] [i_21] [i_24] = ((/* implicit */short) (signed char)-60);
                arr_95 [i_24] [i_24] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_1] [i_24 - 1] [i_21] [i_21] [(unsigned short)6] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_24] [i_24 + 2] [i_24 + 1] [i_24 + 1] [i_1] [i_1 - 1]))) : (692282979U)));
                arr_96 [i_1] [i_21] [i_24] [i_24] = ((/* implicit */signed char) arr_72 [i_1 + 1] [7] [i_21] [i_1 + 1] [i_24]);
                arr_97 [i_1] [i_1] [i_24] = ((/* implicit */short) 2097151);
            }
            for (unsigned int i_25 = 0; i_25 < 13; i_25 += 3) 
            {
                var_54 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) (short)-25052))))) ^ (max((((/* implicit */unsigned long long int) (_Bool)1)), (5628125378495678133ULL))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21680))) ^ (var_19))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_1])))))));
                arr_100 [i_25] [i_21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((short)1618), (((/* implicit */short) (signed char)78))))), (arr_56 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
            }
            arr_101 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_76 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_21]) ? (1919858137000282047LL) : (((/* implicit */long long int) 762638680U))))) ? (min((((/* implicit */unsigned int) (short)-1634)), (3532328616U))) : (min((max((((/* implicit */unsigned int) var_4)), (3532328616U))), (3532328616U)))));
            arr_102 [i_21] [(unsigned char)7] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)12985)) / (((/* implicit */int) arr_49 [i_1] [(signed char)2] [i_1] [i_1 + 1] [i_21] [i_1]))))));
        }
        arr_103 [(signed char)8] = ((max((-1919858137000282061LL), (((/* implicit */long long int) arr_39 [(short)6] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((-1507840083), (((/* implicit */int) var_11))))) != (var_10))))));
        arr_104 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_91 [i_1 + 1] [i_1] [(unsigned char)5] [i_1 - 1])) ? (((/* implicit */int) (short)22620)) : (((/* implicit */int) arr_91 [i_1 + 1] [(signed char)0] [i_1] [i_1]))))) & (((((/* implicit */_Bool) (short)32764)) ? (1919858137000282047LL) : (((/* implicit */long long int) 2047U))))));
    }
}
