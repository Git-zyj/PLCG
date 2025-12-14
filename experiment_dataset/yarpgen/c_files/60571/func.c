/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60571
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0 - 1]);
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_1 [i_0] [i_0]))));
        var_21 |= ((/* implicit */unsigned int) ((((long long int) (unsigned short)17082)) + (((arr_0 [i_0 + 2] [i_0 - 1]) - (arr_0 [i_0 + 2] [i_0 + 1])))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                arr_9 [i_1] [i_1] [i_1] [i_3] = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)48453)) << (((arr_3 [i_1]) - (10700600934198091569ULL))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)48453)) << (((((arr_3 [i_1]) - (10700600934198091569ULL))) - (15583889004684498519ULL)))))));
                var_23 |= ((/* implicit */unsigned int) ((long long int) var_2));
            }
            for (short i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                var_24 += ((/* implicit */unsigned short) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) (unsigned short)46794))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [2LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2678483541780623684ULL)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17082))) / ((-9223372036854775807LL - 1LL)))))))))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (15768260531928927931ULL)));
                    var_27 = ((/* implicit */long long int) max(((+(2678483541780623685ULL))), (((/* implicit */unsigned long long int) (+(4611686018426863616LL))))));
                }
                arr_15 [i_1] = ((/* implicit */unsigned short) 15768260531928927931ULL);
                arr_16 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((long long int) ((long long int) arr_3 [i_1]))) | (((/* implicit */long long int) (~((~(0))))))));
                arr_17 [(unsigned short)4] |= ((/* implicit */long long int) var_14);
            }
            arr_18 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (((((/* implicit */_Bool) -4611686018426863608LL)) ? (15768260531928927932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31268))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) -7416653561433621676LL)) ? (2678483541780623701ULL) : (((/* implicit */unsigned long long int) 2482441955U)))))) << ((((-(((((/* implicit */_Bool) 16446411983755312811ULL)) ? (((/* implicit */int) (unsigned short)6251)) : (2147483641))))) + (6278)))));
            arr_21 [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) (~(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1651107976))))));
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (max((((/* implicit */unsigned long long int) ((unsigned int) -3037035216306070758LL))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9345))) : (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_14 [i_1] [i_1]) * (2000332089954238804ULL))))))));
            var_30 += ((/* implicit */unsigned int) max((((/* implicit */long long int) -582274836)), (((((/* implicit */_Bool) ((var_18) >> (((15768260531928927925ULL) - (15768260531928927901ULL)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14952))) : (var_8))) : (max((((/* implicit */long long int) arr_4 [i_6])), (arr_12 [i_1])))))));
            /* LoopSeq 3 */
            for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                arr_25 [i_1] [i_6] [i_1] [i_7] = (!(((/* implicit */_Bool) var_5)));
                /* LoopSeq 4 */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    arr_28 [i_1] [6ULL] [14LL] [(short)6] &= ((/* implicit */long long int) (short)16721);
                    arr_29 [i_1] = (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_19)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_6])) ? (((/* implicit */unsigned long long int) 281474976710655LL)) : (var_18))))))));
                }
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    arr_32 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)9] [(short)9])) ? (var_18) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56519)))))) : (13171699496597509515ULL));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) 16446411983755312789ULL))));
                    var_32 = var_13;
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (15768260531928927931ULL) : (((/* implicit */unsigned long long int) 2083520085))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2243099935U) != (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9]))) + (arr_3 [12LL]))))))));
                }
                for (long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    var_34 = ((int) arr_24 [i_1] [6LL] [i_1]);
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((~(-519273565))) - (((var_9) ? (arr_24 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_13 [i_1] [i_7] [i_7 + 2]))))))) != (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned long long int) 7915089916381599149LL)) : (18446744073709551605ULL)))));
                }
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    var_36 = ((/* implicit */int) 7915089916381599160LL);
                    var_37 = ((/* implicit */int) (short)12017);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 4; i_12 < 14; i_12 += 3) 
                    {
                        var_38 -= ((/* implicit */short) arr_3 [i_11]);
                        arr_41 [i_1] [i_1] [i_11] [i_1] [i_1] |= ((/* implicit */unsigned short) var_11);
                        var_39 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_19 [i_7] [i_6]) : (arr_7 [i_11] [i_12] [i_12] [i_12 + 2])))), (arr_36 [i_11])));
                    }
                    arr_42 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (arr_40 [i_1] [i_6] [i_7 + 2] [(unsigned short)1] [i_1]) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned long long int) 1420491207U)), (var_15)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_1])))))) : (2678483541780623705ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4629355264303611599ULL)) ? (-858535796) : (((/* implicit */int) (short)-19878))))) < (((((/* implicit */_Bool) -2526111560475672477LL)) ? (743042913212014056LL) : (4832171674921318040LL))))))));
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_11] [i_7] [i_7] [i_6] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-6440788391209088582LL)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_7 + 1] [i_11])) ? (var_19) : (var_18))))) : (15768260531928927889ULL)));
                }
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7 + 2] [i_7] [i_7 + 2] [i_7] [i_7 + 2]))) : (1586073395U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2] [(short)3])) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) arr_30 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 3] [i_7 + 2])) ? (arr_34 [i_7 + 2] [i_7] [i_7 + 2] [i_7] [10ULL]) : (268435456))))))));
            }
            for (int i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                var_42 += ((/* implicit */unsigned short) var_0);
                var_43 &= ((/* implicit */long long int) arr_44 [i_1] [i_1] [(unsigned short)8]);
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        var_44 = max((((unsigned long long int) ((unsigned long long int) 9223372036854775807LL))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned short) arr_44 [i_1] [i_6] [i_1])), ((unsigned short)58751))))));
                        var_45 += ((/* implicit */unsigned short) (((_Bool)1) ? (7915089916381599149LL) : (9223372036854775807LL)));
                    }
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((9ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) ((var_8) >> (((1874812148U) - (1874812094U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(unsigned short)14] [(short)10] [i_13] [i_14] [i_16]))) : ((-(var_15)))))));
                        var_47 += ((/* implicit */long long int) var_7);
                        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13] [i_13])) ? (((/* implicit */int) arr_4 [8U])) : (arr_49 [i_1] [i_6] [i_14] [i_14] [i_1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31122))))) : (((((/* implicit */_Bool) 7077413834277239328LL)) ? (((/* implicit */unsigned long long int) 1895908162U)) : (arr_3 [i_14])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)2), (var_16))))) : (((((/* implicit */_Bool) ((arr_33 [(unsigned short)10] [i_6] [i_6] [i_6] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30070)))))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_6])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2051867377U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))))))));
                    }
                    for (int i_17 = 2; i_17 < 15; i_17 += 3) 
                    {
                        var_49 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)60605)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) ? (((/* implicit */int) arr_13 [i_14] [i_13] [i_17 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_1] [i_6] [i_13] [i_14] [i_17]))))))))));
                        var_50 += ((/* implicit */int) ((((/* implicit */_Bool) (~(-139608911035803421LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-4096)) && (((/* implicit */_Bool) (short)-8994)))))) & (((((/* implicit */_Bool) var_5)) ? (2965005067159829528ULL) : (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) min((arr_48 [i_17 - 1] [(unsigned short)0] [i_17] [i_17] [i_17] [(unsigned short)0] [i_17 + 2]), (((/* implicit */int) var_2)))))));
                        var_51 = ((/* implicit */unsigned short) min((var_51), (var_4)));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((long long int) (-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7077413834277239328LL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32765)), (arr_6 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) -1623539707011321918LL)) ? (((/* implicit */int) arr_45 [i_17] [i_14] [i_6] [i_1])) : (arr_24 [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (2399059124U)))));
                    }
                    var_53 = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (10943884897873564991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_1] [15LL] [i_1]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_20 [i_13] [i_6] [(unsigned char)16])))))))));
                    arr_54 [i_14] [i_13] [i_14] [i_6] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_50 [i_1] [i_14] [i_1] [i_1] [i_1]))) ? (max((((/* implicit */long long int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])), (131071LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) >= (-7077413834277239329LL)))))));
                    var_54 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_13 [i_14] [i_6] [i_6])), (1794344315)))), (((unsigned long long int) var_18))))) ? (((/* implicit */int) (short)26730)) : (min(((-(((/* implicit */int) (unsigned char)25)))), (((/* implicit */int) arr_47 [i_1] [i_1] [i_13] [i_14] [i_13]))))));
                    arr_55 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_34 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_13 [i_1] [i_13] [i_14])) : (((((/* implicit */int) arr_47 [(unsigned char)2] [i_6] [2ULL] [0] [i_14])) << (((((((/* implicit */_Bool) -7077413834277239329LL)) ? (arr_14 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) - (8607859905010721154ULL)))))));
                }
            }
            /* vectorizable */
            for (long long int i_18 = 3; i_18 < 13; i_18 += 3) 
            {
                var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) var_19))));
                /* LoopSeq 1 */
                for (long long int i_19 = 4; i_19 < 14; i_19 += 1) 
                {
                    var_56 = ((/* implicit */short) var_0);
                    var_57 = ((/* implicit */unsigned long long int) var_12);
                }
            }
        }
        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((unsigned int) arr_40 [14LL] [i_1] [12LL] [6LL] [14LL])))));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 17; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                {
                    var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_20] [i_1])) ? (((/* implicit */long long int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])) : (arr_60 [15] [i_21])))) ? (((((/* implicit */_Bool) arr_33 [i_1] [0U] [i_20] [i_1] [3U])) ? (((/* implicit */long long int) arr_33 [i_21] [i_20] [i_1] [i_1] [i_1])) : (arr_60 [i_1] [i_20]))) : (min((arr_60 [i_20] [i_21]), (arr_60 [i_1] [i_21]))))))));
                    var_60 -= ((/* implicit */unsigned long long int) 2147483647);
                }
            } 
        } 
        var_61 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_58 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (15696325162907226398ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_39 [i_1])))))));
    }
}
