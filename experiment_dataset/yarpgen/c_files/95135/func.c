/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95135
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_15 &= min((4294967294U), (((/* implicit */unsigned int) arr_1 [i_0])));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967294U))));
            var_16 = ((/* implicit */long long int) ((short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1]) : (var_4))))));
            var_17 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) & (((/* implicit */int) ((short) (unsigned short)46291)))))) - (max(((+(1462927673313637484LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 8224108960988363911LL)) || (((/* implicit */_Bool) 524287LL)))))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 = ((short) arr_6 [i_0]);
            arr_8 [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_2 [i_2] [i_0])) >> (((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) 579433159)), (-4860584219036940248LL))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_2 - 1]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [17LL])) > (((/* implicit */int) (signed char)87)))))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                arr_11 [i_3] [i_3] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                var_19 |= (+(min((arr_7 [i_3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_3]))))))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_14 [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), (var_2))))) % (min((arr_13 [i_0] [i_2] [i_4]), (((/* implicit */unsigned long long int) 1U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_9) : (arr_9 [i_0] [i_0]))) / (((/* implicit */unsigned int) var_4)))))));
                var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_2)))))), (((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) + (((((/* implicit */long long int) 4294967295U)) / (4948993059936443602LL)))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_5] = ((/* implicit */long long int) ((int) var_2));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */long long int) (~(var_0)));
                    arr_21 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) var_7);
                    var_22 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                }
                var_23 = (-(var_9));
                arr_22 [i_0] [i_2] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -114461966929624206LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28866)))));
                arr_23 [i_0] [i_0] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) (unsigned char)121))), (((long long int) (-(-114461966929624206LL))))));
            }
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (var_0)))) ? (arr_13 [i_7 - 1] [i_7 - 1] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_7 - 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_15 [i_0] [i_7] [i_0] [(unsigned char)12]))))))));
            /* LoopSeq 4 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) 1U)) : (((7512405104545139799ULL) / (((/* implicit */unsigned long long int) 3567582984U))))))) ? (((arr_27 [i_8]) ? (((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_27 [i_8])))) : (arr_24 [i_7 - 1] [i_7 - 1]))) : (((/* implicit */int) (((-(((/* implicit */int) var_13)))) > ((+(((/* implicit */int) (short)687)))))))));
                var_26 &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_31 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                var_27 = ((/* implicit */short) (-(((/* implicit */int) var_14))));
            }
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_37 [i_11] [i_11] [i_11] [i_0] = ((signed char) 4294967294U);
                    arr_38 [i_11] [i_11] [13U] [i_11] [21ULL] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11] [i_10] [i_10] [i_0] [i_0]))) : (arr_25 [i_11])))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0]))) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_9 [i_7] [i_10]))))));
                    var_28 = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) 4294967294U)) && ((_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_7 - 1] [i_0]), (arr_29 [i_7 - 1] [i_11] [i_11]))))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)-38))))));
                    var_29 = ((/* implicit */long long int) arr_0 [i_0]);
                    var_30 = ((/* implicit */long long int) ((int) min((arr_13 [i_7 - 1] [i_7 - 1] [i_7]), (((/* implicit */unsigned long long int) arr_34 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1])))));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_3)), (var_10)))), (min((2219374809358279284ULL), (((/* implicit */unsigned long long int) arr_41 [i_0] [i_0] [i_10]))))))) ? (((((/* implicit */_Bool) min((114461966929624200LL), (((/* implicit */long long int) 1379993689U))))) ? (min((arr_13 [i_0] [i_7 - 1] [i_12]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))) : (min((((/* implicit */unsigned long long int) ((long long int) 1U))), (((((/* implicit */_Bool) 5810642131369625728LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (2986607025842231425ULL)))))));
                    arr_43 [i_0] [i_7] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (-(arr_19 [i_0])));
                    arr_44 [i_0] [i_10] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~((-2147483647 - 1))))))) ? (((int) (~(((/* implicit */int) (short)-25682))))) : (arr_24 [i_0] [i_0])));
                }
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_31 = ((/* implicit */short) -1);
                    arr_47 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_16 [(unsigned short)14] [i_7 - 1] [i_0])))));
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    var_32 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)253)), (2030127120377912587ULL)));
                    var_33 = ((/* implicit */signed char) ((short) ((arr_48 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) 3360258806U)) : (3604074712990632752LL))));
                    var_34 &= ((/* implicit */unsigned int) ((((int) arr_26 [i_14])) & ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                    var_35 ^= ((/* implicit */signed char) (+(((/* implicit */int) max(((signed char)-68), ((signed char)16))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    var_36 ^= ((/* implicit */unsigned short) ((long long int) ((signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3360258806U)))));
                    var_37 = ((((/* implicit */_Bool) 3360258806U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (1998369284616988228LL));
                    var_38 &= ((/* implicit */int) arr_46 [i_0] [i_10] [i_7] [i_0]);
                }
            }
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_2 [(unsigned char)15] [(unsigned char)15]))))) ? (((long long int) arr_29 [i_7 - 1] [i_0] [i_17])) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_17] [i_17] [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
                    arr_60 [i_0] [i_0] [i_16] [13U] = ((/* implicit */unsigned long long int) ((((var_6) <= ((~(arr_55 [i_0] [i_0] [i_16] [i_17]))))) ? (((/* implicit */int) (!(arr_58 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_36 [i_17] [(_Bool)1] [i_17] [i_17] [i_16] [i_7 - 1])) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [i_7 - 1] [i_7] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_54 [i_7] [i_7])))))))));
                }
                /* LoopSeq 1 */
                for (short i_18 = 1; i_18 < 18; i_18 += 3) 
                {
                    arr_64 [i_0] [i_0] [i_16] [12U] &= ((/* implicit */signed char) arr_0 [i_0]);
                    arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1])))) : (((arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1]) << (((arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1]) - (6167830673549940414LL)))))));
                    var_40 ^= ((/* implicit */unsigned int) (~(arr_35 [i_18] [i_16] [i_7] [i_0] [i_0])));
                    arr_66 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_25 [i_0]) & (((((/* implicit */_Bool) var_1)) ? (arr_32 [i_7 - 1] [i_18 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0] [i_16] [i_0])))))))));
                }
                arr_67 [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_50 [i_0] [6U] [i_0] [i_7] [i_7 - 1] [i_16])), (arr_35 [i_0] [i_0] [(short)8] [(_Bool)1] [i_16])))))), ((+(((((/* implicit */_Bool) (signed char)-1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        }
        var_41 = var_6;
        arr_68 [i_0] = ((/* implicit */_Bool) ((((-14) <= ((~(((/* implicit */int) arr_53 [i_0])))))) ? ((~((~(((/* implicit */int) arr_29 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) var_3))));
    }
    for (unsigned char i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */signed char) arr_35 [i_19] [i_19] [i_19] [i_19] [6LL]);
        var_43 *= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_19] [i_19] [i_19] [i_19])) ? (arr_5 [i_19]) : (arr_62 [i_19])))) ? (2914973607U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)14]))))));
        arr_72 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_19]), (((/* implicit */short) (_Bool)1))))) + (((/* implicit */int) var_8))));
    }
    for (int i_20 = 2; i_20 < 11; i_20 += 4) 
    {
        arr_77 [i_20] &= (-(((/* implicit */int) var_13)));
        var_44 = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) 776999620U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (-1925123122769085349LL))))) >> ((((((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [i_20])) ? (var_6) : (arr_25 [i_20 + 3]))) - (2616853541U))))) - (2147483588)))));
        var_45 = ((/* implicit */signed char) var_9);
        arr_78 [i_20 - 2] [i_20 + 2] = ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (max((((/* implicit */unsigned int) (short)32634)), (3088174858U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_7) & (((/* implicit */unsigned long long int) var_0))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_21 = 0; i_21 < 14; i_21 += 3) 
    {
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(1379993714U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (2130569741U) : (65528U))))))) : (((/* implicit */int) var_10))));
        arr_81 [i_21] = ((/* implicit */_Bool) arr_13 [i_21] [i_21] [i_21]);
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)22211))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) max((1379993708U), (((/* implicit */unsigned int) arr_10 [i_21]))))))) >= (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_12)) - (56)))))))));
            var_48 = ((/* implicit */unsigned int) var_1);
            var_49 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_21] [5])) ? (((/* implicit */int) arr_0 [i_21])) : (((/* implicit */int) (short)12044)))))))), (var_0)));
            arr_86 [i_21] [i_21] [(unsigned short)12] = ((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) arr_73 [i_21] [i_22])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_6))))) ? ((~(1978018535U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_22] [i_22] [(unsigned short)2] [i_21] [i_21] [i_21])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_27 [(_Bool)1]))))))))));
        }
        arr_87 [i_21] [i_21] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_5)))))), (var_7)));
    }
    var_50 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (-2147593519767405920LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) != (var_1))))));
    var_51 = ((/* implicit */long long int) (~(((((/* implicit */int) var_10)) + ((~(((/* implicit */int) var_13))))))));
    var_52 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (var_9))), (min((var_6), (((var_11) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44)))))))));
}
