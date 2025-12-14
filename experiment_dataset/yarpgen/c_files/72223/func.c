/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72223
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */signed char) ((max((var_9), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) >> (((((/* implicit */int) var_10)) - (72))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((var_0) ? (((/* implicit */long long int) arr_3 [i_0])) : (max((var_12), (((/* implicit */long long int) (~(arr_3 [i_0]))))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((short) arr_1 [i_0] [i_1]))) * (((var_11) ? (((/* implicit */int) (unsigned short)7059)) : (((/* implicit */int) (unsigned short)0))))))), (-1121080903380201710LL)));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (var_3) : ((~(((/* implicit */int) var_11))))))) ? (((((long long int) (unsigned short)0)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -1890403990)) ? (((/* implicit */int) arr_5 [i_1])) : (arr_3 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_1 + 3] [i_1 + 3]), (arr_0 [i_1 - 1] [i_0])))))));
                arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)65535);
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_19 = arr_0 [i_4] [i_0];
                        arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) max(((-(var_3))), (max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_1] [i_3] [i_4] [i_4]))))), (var_3)))));
                        var_20 = ((/* implicit */unsigned long long int) ((short) max((((arr_3 [i_4]) / (((/* implicit */int) arr_2 [i_3] [i_4])))), (((((/* implicit */_Bool) -1680518928)) ? (-1999669106) : (((/* implicit */int) var_4)))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) var_11);
                    var_22 *= ((/* implicit */short) ((((((/* implicit */int) arr_14 [i_0] [i_1] [i_1 - 1] [i_3] [i_3 + 1] [i_3])) & (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_1 + 1] [i_3] [i_3 - 1] [i_3])))) | (((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1] [i_1 + 1] [i_3] [i_3 + 2] [i_1])))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0]);
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_8)) != (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) - (var_6)))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) var_14));
                }
                arr_20 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) arr_11 [i_2])))) >= (((/* implicit */int) (signed char)44))))) >> (((/* implicit */int) ((_Bool) ((unsigned int) -48269761089551832LL))))));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_24 [(_Bool)1] [i_1] [(_Bool)1] &= ((/* implicit */long long int) max((((arr_16 [i_0] [i_0] [i_6] [i_1 + 1]) + (arr_16 [i_0] [i_1] [i_1] [i_1 + 1]))), (((/* implicit */unsigned long long int) 1890403979))));
                arr_25 [i_0] [i_0] [i_0] = max((max((((int) var_7)), (((/* implicit */int) ((((/* implicit */_Bool) 1890403989)) && (((/* implicit */_Bool) (short)29233))))))), (((/* implicit */int) (short)-9953)));
                arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_6] [i_1]))) / (arr_6 [i_0])))) && (((/* implicit */_Bool) var_9))))), ((-(((arr_0 [i_0] [i_0]) ? (13780570204849898486ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29233)))))))));
            }
            for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1 + 3] [i_0] [i_1 - 1] [i_0] [i_1 + 1])) / (((/* implicit */int) arr_17 [i_1 + 2] [i_0] [i_1 + 1] [i_0] [i_1 + 2]))))) ? (((/* implicit */int) (short)29233)) : (((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_25 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_1 + 2]), (arr_9 [i_1] [i_1 + 3])))) ? ((~(5232383031542720254LL))) : (((/* implicit */long long int) arr_9 [i_7] [i_1 + 1]))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((_Bool)1) ? (((long long int) ((((/* implicit */long long int) arr_3 [i_9])) >= (-9148742618278365420LL)))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105)))))))))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_7] [i_1] [i_0]))) : (var_8))) - ((-(var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((var_14) ? (643137953) : (((/* implicit */int) var_0))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) var_11)))))))))))));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 3; i_10 < 14; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((short) ((int) arr_12 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1])))));
                    arr_39 [i_11 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) (unsigned short)2));
                }
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    arr_42 [i_0] [6ULL] &= ((/* implicit */long long int) (+(max((4828984418710103295ULL), (arr_33 [i_12] [i_12] [i_10 - 2] [i_10 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 3])))));
                    arr_43 [i_0] [i_0] = ((/* implicit */signed char) ((var_3) < (((/* implicit */int) ((short) var_13)))));
                    var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(arr_2 [i_10 - 2] [i_10])))), (max((var_4), (((/* implicit */short) arr_2 [i_10 - 3] [i_10]))))));
                }
                var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_10 - 2])) ? (((((/* implicit */_Bool) var_12)) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_10 - 3] [(signed char)10] [i_10 + 1] [(signed char)10] [i_1 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [2LL] [2LL] [i_10 - 2])), (arr_17 [i_10 - 2] [8] [i_10 - 3] [8] [i_1 + 1])))))));
            }
            for (signed char i_13 = 3; i_13 < 14; i_13 += 1) /* same iter space */
            {
                arr_47 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                arr_48 [i_0] [i_0] [i_13] [i_0] = max((((((/* implicit */int) (short)-5899)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_13 - 1])) ? (var_2) : (((/* implicit */int) (unsigned short)0))))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_14 = 1; i_14 < 13; i_14 += 1) 
            {
                var_31 ^= ((/* implicit */long long int) max((((((/* implicit */int) arr_17 [i_1] [i_1 + 2] [i_1 - 1] [2] [i_1 - 1])) * (((/* implicit */int) arr_35 [i_1 + 2] [8U] [i_14 - 1])))), (((((int) var_7)) / (((var_2) * (((/* implicit */int) var_0))))))));
                /* LoopSeq 1 */
                for (signed char i_15 = 1; i_15 < 13; i_15 += 3) 
                {
                    arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)2462);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_10)))))) * (((/* implicit */int) ((_Bool) max((arr_8 [i_1 + 1]), (arr_34 [i_15 + 2] [i_0] [i_14] [i_1] [i_0] [i_0])))))));
                }
                arr_58 [i_0] [i_1] = ((unsigned long long int) max((arr_52 [i_1 + 3] [i_1 + 1]), (((/* implicit */long long int) var_11))));
            }
            /* vectorizable */
            for (unsigned short i_16 = 1; i_16 < 14; i_16 += 4) 
            {
                arr_61 [(_Bool)1] [i_0] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (short)29233)) ? (var_15) : (9489189595304842046ULL)));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_66 [i_0] [i_17] [i_17] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_54 [i_16 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) (short)-29234)) : (((/* implicit */int) arr_54 [i_16 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                    var_33 = ((/* implicit */short) min((var_33), (arr_32 [i_17] [i_16] [i_1] [i_0] [i_0])));
                    arr_67 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6069796309928925368LL)) && (((/* implicit */_Bool) (unsigned short)63073))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (short)960))) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_16])) : ((~(((/* implicit */int) (unsigned short)63074))))));
                    var_35 *= ((/* implicit */signed char) arr_17 [i_17] [12U] [i_1] [12U] [i_0]);
                }
                for (unsigned long long int i_18 = 1; i_18 < 13; i_18 += 3) 
                {
                    arr_70 [i_18] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_5 [i_1 + 2]) ? (arr_27 [i_18] [i_0] [i_18] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    arr_71 [i_0] [i_1] [i_16] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 3) 
    {
        arr_74 [i_19] = ((((arr_72 [i_19 - 2]) ? (((/* implicit */int) arr_73 [i_19 - 1])) : (((/* implicit */int) arr_72 [i_19 + 1])))) >= (((/* implicit */int) max((var_11), ((_Bool)1)))));
        arr_75 [i_19] = ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (signed char i_20 = 1; i_20 < 14; i_20 += 3) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    arr_81 [i_19] [i_19] [i_21] [i_21] = ((/* implicit */unsigned long long int) var_13);
                    var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_80 [i_20] [i_20] [i_20 - 1] [i_21])) : (((/* implicit */int) ((signed char) var_4))))) < (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)42))))))));
                    arr_82 [i_19] [i_19] [i_21] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) -1890403984)))))) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_78 [i_20] [i_20] [i_20]))) | (var_12)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_79 [i_19] [i_19 - 2] [i_19] [i_19]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_72 [i_19])))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) (short)29233);
    }
}
