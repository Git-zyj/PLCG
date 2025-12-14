/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6711
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
    var_20 = ((/* implicit */unsigned char) (short)-19101);
    var_21 = ((/* implicit */short) (+(((/* implicit */int) ((max((var_16), (var_9))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (var_15)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_0 [i_0 - 2]))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                arr_8 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1 - 1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    arr_11 [i_1] [i_1] [i_2] [i_3] [i_1 - 1] = (!(arr_0 [i_2 + 1]));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_13))));
                }
            }
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_15 [(signed char)4] [i_1] [(unsigned char)0] [i_4] |= ((/* implicit */signed char) ((long long int) arr_2 [i_1 - 1]));
                var_24 = ((/* implicit */short) (~(((((((/* implicit */int) arr_1 [i_0 + 2] [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 2] [i_1 - 1])) + (10947)))))));
            }
            for (short i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                arr_20 [i_1] = arr_5 [i_0] [i_1 - 1];
                var_25 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_12 [i_5] [i_1])), (arr_17 [i_0] [i_1]))), (((/* implicit */unsigned int) arr_1 [i_1] [i_0 + 2]))));
                var_26 -= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [3LL] [i_1]))))), (((unsigned int) arr_3 [i_0]))))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_4 [i_5] [i_5])))))))), ((unsigned short)19472))))));
            }
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (min((((/* implicit */unsigned long long int) arr_12 [i_0 + 2] [i_1 - 1])), (var_14))))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65528)))))));
                        var_30 = ((/* implicit */long long int) var_7);
                        arr_27 [i_1] [i_0] [i_6] = (~((-((-(1364656067U))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    {
                        arr_32 [i_1] [(unsigned short)1] [7] [7] [i_9] = max((min((max((var_14), (arr_28 [i_9]))), (((/* implicit */unsigned long long int) arr_14 [i_0 - 3])))), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [(short)10] [i_9])));
                        var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_24 [i_0] [i_0] [i_8] [i_0]), (arr_26 [i_0] [i_1] [i_8] [i_9]))))) : (((arr_17 [i_0] [i_1]) * (arr_25 [i_1] [i_1] [i_0 + 2]))))), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned short) var_3)), (var_19)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_9] [i_10 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_1])) - (((/* implicit */int) arr_5 [i_0 - 2] [(short)4]))));
                            var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0 - 1])) + (((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_0 - 4]))))));
                        }
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_9]))))))));
                        var_34 = ((/* implicit */unsigned char) arr_21 [i_1]);
                    }
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_41 [i_0] [i_0 - 4] [i_11] = ((/* implicit */unsigned short) arr_18 [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 4]);
            arr_42 [0ULL] = ((/* implicit */unsigned int) arr_29 [i_11] [i_11] [i_11]);
            /* LoopSeq 3 */
            for (unsigned int i_12 = 3; i_12 < 11; i_12 += 3) 
            {
                arr_45 [i_12] [i_12] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_12])) || (((/* implicit */_Bool) min((arr_10 [i_0] [(unsigned short)9] [i_12 - 2] [i_0]), (((/* implicit */long long int) 0U))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_13 = 2; i_13 < 10; i_13 += 2) 
                {
                    arr_50 [i_0] [i_12] [i_0 + 2] [i_0 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                    arr_51 [i_0 - 4] [i_0 - 4] [i_13] [i_0 - 4] [i_13 - 1] [8U] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) - ((+(((/* implicit */int) arr_7 [(short)0] [i_12] [i_12]))))));
                }
                var_35 = ((unsigned short) arr_2 [i_0 + 2]);
                arr_52 [i_0] [i_12] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_4 [i_12] [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_9)))))));
            }
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_31 [i_0]))) + ((-(((/* implicit */int) arr_55 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 1]))))));
                arr_57 [i_0] [i_0] = arr_2 [i_0];
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned short i_16 = 1; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_37 ^= ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_54 [i_0 - 2] [i_11] [i_11] [i_11])), (arr_4 [i_14] [i_16 + 2]))))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_11])))))) : (var_0)));
                            var_39 = ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_58 [i_16] [i_15] [i_11] [i_11] [i_0])))), (arr_16 [i_16] [i_14])));
                            arr_62 [i_16] [i_16] [i_11] [i_14] [i_11] [i_0 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_59 [i_0] [i_0] [i_14] [i_15]))));
                            arr_63 [i_0] [i_0] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) arr_28 [i_14]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                arr_67 [9ULL] [i_11] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_17] [i_17])), (-9006462572891418822LL)))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_1 [i_0 - 4] [(unsigned short)11]))))));
                arr_68 [i_17] [(short)2] [i_0] = ((/* implicit */unsigned short) arr_46 [i_0] [i_11] [i_11] [i_11]);
                var_40 *= ((/* implicit */signed char) -4096291044494976086LL);
                var_41 -= ((/* implicit */long long int) arr_3 [i_0]);
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */int) arr_59 [i_0] [10ULL] [i_0] [i_18]);
            var_43 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_18] [i_0])))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                {
                    var_44 -= ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)67)), (var_13))), (((/* implicit */unsigned long long int) arr_38 [i_22] [i_20])))))));
                                arr_82 [i_0 - 3] [i_19] [i_21] [i_19] [i_20] [i_0 - 3] [i_22] = ((/* implicit */short) (-(max((arr_31 [i_0 - 3]), (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    arr_83 [i_0] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(3308126021U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_19]))))));
                    arr_84 [i_0 - 3] = ((/* implicit */_Bool) var_10);
                }
            } 
        } 
    }
    for (long long int i_23 = 0; i_23 < 14; i_23 += 1) 
    {
        arr_87 [i_23] = ((/* implicit */long long int) min((arr_86 [i_23] [i_23]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_85 [i_23] [i_23])))))));
        var_46 = ((/* implicit */unsigned short) arr_85 [i_23] [(short)2]);
        arr_88 [i_23] = ((/* implicit */unsigned long long int) arr_85 [7] [i_23]);
        /* LoopSeq 2 */
        for (long long int i_24 = 0; i_24 < 14; i_24 += 2) 
        {
            arr_93 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(var_14)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_89 [i_23] [i_23] [i_23])), (var_13))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) max((arr_90 [i_23] [i_23]), (((/* implicit */short) arr_86 [i_24] [i_23]))))), (var_19))))));
            arr_94 [i_23] = (-(((/* implicit */int) arr_92 [i_24] [i_23])));
        }
        /* vectorizable */
        for (signed char i_25 = 2; i_25 < 12; i_25 += 1) 
        {
            var_47 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65512))));
            /* LoopNest 3 */
            for (unsigned long long int i_26 = 2; i_26 < 10; i_26 += 3) 
            {
                for (unsigned int i_27 = 1; i_27 < 11; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            arr_103 [i_23] [i_26] [7U] [(unsigned short)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_96 [i_23] [i_23] [i_28])) % (-1920128740))))));
                            arr_104 [i_23] [i_25 - 2] [i_26] [i_27] [i_23] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_98 [i_23] [i_23] [i_28])))))));
                        }
                    } 
                } 
            } 
        }
    }
}
