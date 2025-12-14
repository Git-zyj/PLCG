/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83950
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
    var_20 -= ((/* implicit */signed char) var_6);
    var_21 = ((/* implicit */signed char) var_19);
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(var_18)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_19)))))) > (max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)254)) ? (var_13) : (((/* implicit */long long int) 609268782))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_25 *= ((/* implicit */signed char) ((arr_5 [i_1] [i_1]) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)22])))))));
        var_26 += ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_2] [i_2]))) / (((arr_7 [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_3]))))))) : (((/* implicit */unsigned int) -609268783))));
            var_28 = ((/* implicit */unsigned long long int) -4LL);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                arr_17 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_5);
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 3633762776U))))))));
                var_30 = ((/* implicit */signed char) arr_11 [i_2]);
                var_31 = ((/* implicit */signed char) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))) : (var_14))))))))));
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                var_32 = ((/* implicit */int) max((var_32), ((~(((((/* implicit */int) (unsigned short)65532)) & (((/* implicit */int) arr_16 [11LL] [11LL]))))))));
                var_33 |= ((/* implicit */_Bool) (+((-(var_15)))));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((int) arr_7 [i_6] [i_6])) : (((/* implicit */int) ((var_14) >= (661204519U)))))))));
                var_35 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6))))));
            }
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) >> (((((/* implicit */int) arr_15 [8] [i_5 - 3] [i_5 - 3])) + (1875)))))) >= (arr_19 [i_5] [i_5 - 2] [i_2])));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -609268787)) ? (609268791) : (((/* implicit */int) arr_26 [i_2] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9]))))) ? (((/* implicit */int) arr_30 [i_2] [i_5 - 2] [i_5] [i_7] [i_8] [i_9 - 1])) : (((/* implicit */int) arr_14 [i_2] [i_9] [i_7] [i_2]))))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_5 - 2] [i_5 - 1])) : (((/* implicit */int) arr_16 [i_5 - 3] [i_5 - 2]))));
                            arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(609268782)));
                            var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 609268791)) ? (((/* implicit */long long int) 4098259181U)) : (var_13)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            arr_34 [i_10] [i_8] [i_7] [i_5 - 3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_10] [i_8] [i_7] [i_2]);
                            var_40 = ((/* implicit */unsigned char) var_10);
                        }
                        for (unsigned char i_11 = 1; i_11 < 8; i_11 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32759)))))));
                            var_42 = ((/* implicit */signed char) arr_2 [i_2]);
                        }
                    }
                } 
            } 
            arr_38 [i_5] = ((/* implicit */unsigned long long int) (~(var_8)));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_43 *= ((/* implicit */unsigned char) arr_22 [i_2]);
            var_44 = ((unsigned short) var_16);
            arr_42 [i_12] = ((/* implicit */int) ((unsigned int) (unsigned char)119));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    for (signed char i_15 = 2; i_15 < 8; i_15 += 4) 
                    {
                        {
                            arr_49 [i_2] [i_12] [i_12] [i_12] [i_15] = ((/* implicit */int) ((_Bool) arr_41 [i_12]));
                            var_45 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -18563478)), (3633762776U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-103)))))));
                            arr_50 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (arr_47 [i_2] [i_12] [(unsigned char)11] [i_14 + 1] [i_2])))) || ((!(arr_20 [i_14] [i_12]))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_26 [i_2] [i_2] [i_2] [i_2] [11U]))))))));
            /* LoopSeq 3 */
            for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    var_47 += ((/* implicit */int) arr_53 [i_17] [i_17] [i_17]);
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_48 *= ((/* implicit */unsigned int) ((unsigned char) arr_58 [i_19] [i_18] [i_2] [i_16] [i_2]));
                        var_49 = arr_28 [9ULL] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19];
                    }
                }
                for (unsigned short i_20 = 1; i_20 < 11; i_20 += 1) 
                {
                    var_50 *= ((/* implicit */signed char) ((unsigned short) arr_21 [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 1]));
                    var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) ((short) 23ULL))) ? (((/* implicit */int) (short)-15381)) : ((+(((/* implicit */int) arr_4 [i_16])))))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_52 = ((unsigned long long int) arr_66 [6U] [6U] [(unsigned char)7] [i_21]);
                    var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_68 [i_17])) ? (((arr_47 [i_21] [i_16] [i_17] [i_21] [i_21]) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65339))))))));
                    var_54 |= ((/* implicit */unsigned int) arr_3 [i_21]);
                }
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    arr_72 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_17])) * (((/* implicit */int) (signed char)(-127 - 1)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        var_55 *= ((/* implicit */signed char) var_13);
                        var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_2] [i_2] [i_17] [i_2] [i_23]))) : (var_17)))) - (18446744073709551606ULL))))));
                        var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((short) arr_10 [i_2] [i_17] [i_2])))));
                    }
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
                    {
                        var_58 = ((/* implicit */signed char) ((((/* implicit */int) arr_52 [i_24] [i_17] [i_2])) / (((/* implicit */int) arr_36 [i_2]))));
                        arr_79 [10] [10] [10] [10] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_16])) ? (arr_22 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    for (signed char i_25 = 0; i_25 < 12; i_25 += 1) /* same iter space */
                    {
                        var_59 = ((/* implicit */long long int) -2147483628);
                        var_60 |= ((/* implicit */unsigned char) ((_Bool) arr_3 [i_22]));
                    }
                    arr_83 [i_2] [i_16] [4U] [4U] = ((/* implicit */unsigned long long int) arr_48 [i_17] [7]);
                    var_61 ^= ((/* implicit */int) var_0);
                }
                var_62 = arr_57 [(unsigned short)5] [i_16];
            }
            for (signed char i_26 = 3; i_26 < 11; i_26 += 1) /* same iter space */
            {
                var_63 = ((/* implicit */_Bool) 1136258330U);
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (short i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        {
                            var_64 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [5ULL] [4] [i_26] [i_2] [7] [5ULL])) && (((/* implicit */_Bool) arr_2 [i_16]))));
                            var_65 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_4)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                            var_66 = ((/* implicit */unsigned int) max((var_66), (((/* implicit */unsigned int) arr_75 [i_26 - 1]))));
                        }
                    } 
                } 
                arr_90 [i_2] [i_16] [i_16] [i_26] = ((/* implicit */unsigned long long int) (~((-(arr_19 [i_2] [i_16] [i_26 + 1])))));
                var_67 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_78 [i_2] [i_26 - 3] [i_26] [i_2] [(signed char)0] [i_26 - 3] [i_16])) ? (((/* implicit */int) arr_73 [i_2] [i_2] [i_16] [i_16] [i_26 + 1])) : (arr_61 [i_2] [i_26 + 1] [i_26 - 3] [i_26 + 1] [i_26 - 2] [i_26 - 2])));
            }
            for (signed char i_29 = 3; i_29 < 11; i_29 += 1) /* same iter space */
            {
                var_68 = ((/* implicit */int) max((var_68), ((+(((/* implicit */int) (unsigned short)65346))))));
                var_69 = ((/* implicit */unsigned short) max((var_69), (((/* implicit */unsigned short) arr_16 [i_2] [(unsigned char)0]))));
            }
        }
        arr_94 [i_2] [i_2] &= ((/* implicit */int) ((long long int) (-2147483647 - 1)));
        var_70 = ((((arr_35 [i_2] [i_2]) << (((((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) arr_87 [i_2] [i_2])) : (-211591557))) - (46))))) % (((/* implicit */int) arr_86 [i_2] [2ULL] [(_Bool)1] [i_2])));
        var_71 = ((/* implicit */unsigned char) max(((unsigned short)36011), (((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [5])) != (((/* implicit */int) (signed char)35)))))));
    }
}
