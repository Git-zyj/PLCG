/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62058
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
    var_14 -= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6162)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)77))))) : (var_2))), (((/* implicit */unsigned long long int) min((1706741404), (((/* implicit */int) (short)-6160)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (short)-25095)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (unsigned short)32338);
                    arr_8 [i_0] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33198)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) > (9003271705187295566LL)))) : ((+((~(((/* implicit */int) (short)6161))))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (var_2))) / (((/* implicit */unsigned long long int) var_5)))))))));
                }
            } 
        } 
    }
    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) -3332647067340011827LL)) ? ((-(((/* implicit */int) ((signed char) arr_9 [i_3]))))) : ((-(((((/* implicit */_Bool) (unsigned short)33198)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (signed char)-50)))))));
        arr_11 [i_3] [i_3] |= ((/* implicit */unsigned int) (~(max(((~(15468578364346829611ULL))), (((/* implicit */unsigned long long int) 3525139832U))))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)-32757))) ? (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (short)19138)))))) : (((/* implicit */int) ((_Bool) arr_15 [i_4])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 8388576)) ? (((/* implicit */int) (unsigned short)40352)) : (2147483647)));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned char)118))));
                            arr_27 [i_4] [i_4] [i_6 + 1] [i_6 + 1] [i_8] = ((/* implicit */short) (+(160213219U)));
                            var_22 = ((/* implicit */unsigned int) (-(4LL)));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4050123609313372329ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (16056975658908801176ULL)));
                    var_24 -= ((/* implicit */short) -24LL);
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) 7864320U))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    arr_32 [i_10] [i_5] [i_6 + 1] [i_6 + 1] [i_10] [i_5] = ((/* implicit */long long int) ((((unsigned int) (unsigned char)192)) > (((/* implicit */unsigned int) (-(var_4))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        arr_36 [i_4] [i_4] [(unsigned char)12] [i_4] [(unsigned char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_4] [i_11] [i_6 - 2])) ? (var_4) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4]))))) : (((/* implicit */int) ((var_4) != (((/* implicit */int) arr_31 [i_4] [i_4])))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 142855012878414084ULL)) ? (((/* implicit */int) (unsigned short)52766)) : (((/* implicit */int) (short)30448))));
                        arr_37 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_6] [i_6] [i_6 + 1] [i_6 - 1]))));
                    }
                    arr_38 [i_6 - 1] [1U] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 9104713420047977953LL)) ? (-8388577) : (((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_27 *= ((/* implicit */signed char) min((max(((unsigned short)33190), (((/* implicit */unsigned short) (signed char)-112)))), ((unsigned short)33198)));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(7263148418348736406ULL))))));
                }
                for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), ((((!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_6 + 1]))))))) ? (max(((~(2343320498U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) (unsigned short)64512)) : (((/* implicit */int) (short)-12575))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)33198)))))))));
                    var_30 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_5] [i_6 + 3])), ((+(max((((/* implicit */unsigned long long int) (signed char)-23)), (10519215779711878976ULL)))))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        var_31 += ((/* implicit */signed char) arr_41 [i_5] [i_13] [i_14]);
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_33 [i_4] [i_6 - 1] [i_4] [i_13])), (arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17966))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)-109))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_4] [i_5] [i_6] [i_13]))))) : (2305834213120671744LL))))))));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        var_33 = (~(((/* implicit */int) max(((short)6411), (((/* implicit */short) min(((unsigned char)227), (arr_18 [i_4] [i_4]))))))));
                        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_4] [i_4] [i_6] [i_6] [i_15])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_39 [i_4]))))) ? (max((1586188795219795178ULL), (((/* implicit */unsigned long long int) arr_29 [i_4] [9] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50))))))))) ? (((((/* implicit */_Bool) (-(arr_46 [i_4] [6ULL] [6ULL] [6ULL] [i_4] [6ULL] [i_4])))) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (short)28294)) : (1706741415))) : (((/* implicit */int) arr_29 [i_4] [i_6 + 1] [i_6 + 1])))) : (max((2147483647), (((((/* implicit */_Bool) 2145386496LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-6402)))))));
                    }
                }
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) arr_10 [i_4] [i_17]))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (short)23927))))))));
                    var_37 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-28304)) / (((/* implicit */int) (_Bool)1))));
                    var_38 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 5169818555101324769ULL)) ? (((/* implicit */int) arr_18 [i_4] [i_4])) : (1706741415))));
                }
                /* LoopSeq 2 */
                for (int i_18 = 1; i_18 < 11; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        arr_60 [9] [i_4] [i_5] [i_16] [(signed char)4] [i_18] = ((/* implicit */short) 4011804982U);
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15427)) + (((/* implicit */int) arr_20 [i_16] [i_5] [i_18 + 1] [i_18]))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        var_40 += ((/* implicit */short) ((unsigned short) arr_16 [i_20] [i_18 + 1] [i_5]));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((long long int) (unsigned char)113)) : (((/* implicit */long long int) (-(((/* implicit */int) (short)15427))))))))));
                        var_42 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (arr_44 [i_4] [i_4] [i_16] [i_4] [i_16]) : ((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)31151)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_43 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [10LL] [10LL] [i_18 + 2] [i_18 - 1])) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (short)6391))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_65 [i_18] = ((/* implicit */unsigned short) arr_46 [i_4] [i_4] [i_4] [i_4] [i_18 - 1] [(signed char)0] [i_21]);
                        var_44 -= (+((-(((/* implicit */int) var_10)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) arr_25 [i_4] [i_4] [i_4] [i_4] [i_22] [i_4]))));
                        var_46 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_61 [i_4] [i_5] [i_5] [i_16] [i_16] [i_5] [7U])) ? (((/* implicit */int) (unsigned char)113)) : (var_5)))));
                    }
                    for (unsigned char i_23 = 1; i_23 < 10; i_23 += 4) 
                    {
                        var_47 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6385)) ? (arr_62 [i_16] [(short)8] [i_5] [i_18 + 1] [i_23 + 2]) : (((/* implicit */int) var_11))));
                        var_48 |= ((/* implicit */_Bool) ((unsigned char) arr_47 [i_4] [i_4] [i_4]));
                        var_49 = 13676972454363510700ULL;
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_50 *= ((((/* implicit */_Bool) 805306368U)) ? (2470353075259012913ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))));
                        var_51 = ((/* implicit */signed char) (short)6411);
                        arr_76 [i_5] [i_16] [i_24] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_23 [i_4] [i_16] [i_18] [i_24]))))) ? (((/* implicit */int) arr_66 [i_4] [i_16] [i_16] [i_18 + 2] [i_24] [i_18 + 2])) : (((/* implicit */int) (short)-32752))));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [(signed char)2] [i_4] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27124))) : (((((/* implicit */_Bool) (short)6381)) ? (arr_21 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220)))))));
                    }
                }
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    var_53 = ((/* implicit */unsigned int) min((var_53), (((((/* implicit */_Bool) ((arr_19 [i_4] [i_5] [i_16] [i_25]) ? (((/* implicit */int) arr_29 [i_5] [(unsigned short)3] [i_25])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned char)250))))) : (arr_73 [i_25] [i_25] [i_4] [i_5] [i_4])))));
                    arr_79 [i_4] [i_4] [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-24821)))) ? (((17114934714650249272ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_4] [i_4] [i_4] [i_4] [i_4] [i_25]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_5] [i_5] [i_16] [i_25] [i_25])))));
                    var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)29)))))));
                    arr_80 [i_4] [i_5] [i_25] = ((/* implicit */unsigned char) ((long long int) (short)32749));
                }
                var_55 = ((/* implicit */unsigned char) arr_20 [i_4] [i_4] [i_4] [i_4]);
            }
            for (unsigned char i_26 = 1; i_26 < 12; i_26 += 4) /* same iter space */
            {
                var_56 |= max(((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 16777216U)) ? (arr_69 [i_4] [i_4] [i_26] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)0)))) - ((~(((/* implicit */int) (_Bool)1))))))));
                var_57 &= ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned char)37)), (4278190080U))), (((/* implicit */unsigned int) arr_19 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (733089188055101952LL) : (((/* implicit */long long int) 884822473U))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_26 + 1] [i_26])), ((unsigned short)57125)))) : (((/* implicit */int) arr_50 [i_26 + 1] [i_26 + 1] [i_26 + 1]))))) : (max((min((-733089188055101960LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (short)-30289))))));
            }
            for (unsigned char i_27 = 1; i_27 < 12; i_27 += 4) /* same iter space */
            {
                var_58 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (~(arr_34 [i_4] [i_4] [5] [5] [i_27])))))));
                var_59 ^= ((/* implicit */unsigned char) 4294967295U);
                var_60 = ((/* implicit */unsigned short) arr_48 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
            }
            var_61 = ((/* implicit */unsigned int) arr_16 [i_4] [i_5] [i_5]);
        }
        for (unsigned int i_28 = 2; i_28 < 11; i_28 += 4) 
        {
            var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (arr_54 [i_4] [i_28] [i_4] [i_4] [i_28 - 2]) : (((/* implicit */int) (unsigned char)56))))) ? (((/* implicit */long long int) min((((536608768) + (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_6)) ? (2075437019) : (((/* implicit */int) (unsigned short)1016))))))) : ((+(arr_10 [i_4] [(short)6]))))))));
            /* LoopNest 3 */
            for (unsigned short i_29 = 1; i_29 < 9; i_29 += 4) 
            {
                for (unsigned short i_30 = 0; i_30 < 13; i_30 += 4) 
                {
                    for (unsigned int i_31 = 0; i_31 < 13; i_31 += 4) 
                    {
                        {
                            var_63 ^= ((/* implicit */long long int) max((17114934714650249274ULL), (((/* implicit */unsigned long long int) max((2791206646U), (min((2791206646U), (((/* implicit */unsigned int) (unsigned char)16)))))))));
                            arr_95 [i_4] [i_4] [i_4] [i_29] [i_30] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_81 [i_4] [i_28 + 1] [i_28 - 1] [i_30])))) ? ((-(arr_81 [i_4] [i_4] [1] [i_4]))) : (min((arr_81 [i_4] [i_28 - 1] [i_29 - 1] [i_30]), (((/* implicit */unsigned long long int) var_8))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240)))))));
            arr_98 [i_4] [i_4] = ((/* implicit */signed char) (~(1114018837U)));
            var_65 = ((/* implicit */signed char) ((arr_19 [i_4] [i_4] [i_32] [i_32]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) max((1972024986), (((/* implicit */int) arr_26 [i_4] [i_4] [12LL] [i_4] [i_4] [i_32] [i_32]))))) : (min((17114934714650249281ULL), (((/* implicit */unsigned long long int) var_4))))))));
        }
    }
    for (int i_33 = 3; i_33 < 12; i_33 += 4) 
    {
        var_66 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((arr_99 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_0 [i_33 - 1]))))));
        var_67 *= var_6;
        arr_101 [i_33] [i_33] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 733089188055101945LL)) ? (((/* implicit */int) arr_2 [i_33] [i_33] [i_33])) : (((/* implicit */int) (unsigned char)9))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-11720)), ((unsigned short)65535))))))));
    }
    var_68 = ((/* implicit */long long int) max((var_68), (max((((((/* implicit */_Bool) (unsigned char)14)) ? (max((((/* implicit */long long int) 2422178168U)), (7439805734451825704LL))) : (((((/* implicit */_Bool) var_8)) ? (-3549353441820197179LL) : (191371188141428214LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (-733089188055101972LL)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 3705675001066072042ULL)) ? (((/* implicit */int) (short)32752)) : (-493314685))))))))));
}
