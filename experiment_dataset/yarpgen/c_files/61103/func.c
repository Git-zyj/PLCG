/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61103
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_0))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */int) var_0);
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) var_7))), (min((((/* implicit */unsigned int) (unsigned short)52991)), (11U)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) var_15);
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) var_6);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)79)) && (((/* implicit */_Bool) 13835058055282163712ULL))));
                arr_13 [i_2] [i_1] = ((signed char) var_11);
                arr_14 [i_1] [i_3] = ((/* implicit */unsigned short) var_10);
                arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) << (((/* implicit */int) var_8))))) >= (((437881408U) + (((/* implicit */unsigned int) -129435663))))));
            }
            for (unsigned int i_4 = 2; i_4 < 24; i_4 += 4) 
            {
                arr_18 [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) ((short) var_16));
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13835058055282163721ULL)) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)64)) & (((/* implicit */int) (unsigned char)242)))))));
            }
            /* LoopSeq 4 */
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_30 [i_5] [i_2] [i_2] [i_2] [i_6] [i_7 + 1] [i_7] = ((/* implicit */unsigned short) var_18);
                            arr_31 [i_1] [i_2] [i_5] [i_6] [i_2] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 13835058055282163715ULL)) && (((/* implicit */_Bool) (signed char)-17))));
                            var_25 += ((/* implicit */unsigned int) ((signed char) (signed char)-91));
                        }
                    } 
                } 
                arr_32 [(unsigned short)6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (4611686018427387880ULL)));
                var_26 ^= ((/* implicit */unsigned int) ((int) 11U));
                var_27 += ((/* implicit */unsigned int) ((signed char) var_3));
                var_28 = ((/* implicit */signed char) var_6);
            }
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_0))));
                arr_37 [i_8] [i_8] [i_8] [0U] = ((/* implicit */unsigned int) ((signed char) var_2));
            }
            for (unsigned int i_9 = 3; i_9 < 23; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    var_30 = ((/* implicit */signed char) ((var_15) <= (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    arr_43 [i_9] [i_2] [i_2] [11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4896)) && (((/* implicit */_Bool) -17LL))));
                }
                arr_44 [i_9] [16U] = ((/* implicit */unsigned int) ((_Bool) 1248078078));
                arr_45 [i_1] [i_9] [i_9] [i_9 - 3] = ((/* implicit */unsigned long long int) ((0U) <= (((/* implicit */unsigned int) -129435663))));
                var_31 = ((/* implicit */unsigned char) ((1036254062U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                var_32 += ((signed char) var_10);
            }
            for (int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                var_33 = ((/* implicit */unsigned int) ((signed char) (unsigned short)15));
                arr_48 [i_2] = ((/* implicit */unsigned short) var_16);
                var_34 = var_2;
            }
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                var_35 += ((/* implicit */unsigned long long int) (unsigned short)63717);
                var_36 += ((/* implicit */unsigned int) var_8);
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                arr_51 [i_1] [i_1] [i_12] [21ULL] = ((3488080272U) % (406525053U));
                arr_52 [(signed char)1] [i_2] [i_2] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -17LL)) || (((/* implicit */_Bool) 4055390117U))));
            }
        }
        for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) 18U))));
            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((short) (unsigned short)65506)))));
            var_40 ^= ((/* implicit */unsigned long long int) 1774653036U);
        }
        arr_56 [i_1] &= ((/* implicit */unsigned long long int) (signed char)-52);
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((unsigned long long int) var_11)))));
    }
    for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        var_42 ^= var_0;
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_17 = 1; i_17 < 15; i_17 += 3) 
                    {
                        arr_67 [i_14] [i_15] [i_16] [i_15] [i_15] = ((/* implicit */signed char) var_1);
                        arr_68 [i_17 - 1] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) (unsigned short)1968))))) % (((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned short)3634))))));
                    }
                    for (signed char i_18 = 4; i_18 < 12; i_18 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
                        {
                            arr_74 [i_16] [(signed char)9] [i_16] [(signed char)9] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (signed char)-24)), (var_6))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)6)))));
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) min((((signed char) 66060288U)), (((signed char) 5273532626928548140ULL)))))));
                        }
                        var_44 = ((/* implicit */unsigned char) var_1);
                        arr_75 [3U] [i_14] [i_14] [3U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) var_15))), (min((824633720832ULL), (((/* implicit */unsigned long long int) (signed char)-3))))));
                    }
                    for (unsigned short i_20 = 2; i_20 < 12; i_20 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
                        {
                            arr_82 [i_14] [i_15] [(signed char)6] [i_16] [i_15] [i_16] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_5)), (34U))), (min((((/* implicit */unsigned int) (signed char)-14)), (0U)))));
                            var_45 += ((/* implicit */_Bool) (signed char)101);
                            var_46 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) -758781056)) >= (1020921443U))));
                        }
                        arr_83 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) 1024U))), (((max((1526947333U), (((/* implicit */unsigned int) var_3)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_22 = 4; i_22 < 13; i_22 += 4) 
                    {
                        arr_86 [i_14] [i_14] [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_11))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63568))) + (4068469065U))))));
                        arr_87 [i_15] [i_15] [i_16] [i_22] [i_22] [i_15] = ((/* implicit */short) (unsigned char)222);
                    }
                }
            } 
        } 
        arr_88 [i_14] [i_14] = ((/* implicit */unsigned short) 2574032527U);
    }
    for (signed char i_23 = 0; i_23 < 18; i_23 += 4) 
    {
        arr_92 [i_23] [i_23] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) var_15))), (max((var_16), (((/* implicit */int) var_3))))));
        var_47 = ((/* implicit */unsigned long long int) var_11);
    }
    var_48 = ((/* implicit */unsigned long long int) (unsigned short)0);
}
