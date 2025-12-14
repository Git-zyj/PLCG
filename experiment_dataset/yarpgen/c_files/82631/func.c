/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82631
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 -= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) * ((+(((/* implicit */int) arr_1 [i_0])))))) / (((/* implicit */int) var_6))));
        var_13 = ((/* implicit */int) min((var_13), ((+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) 10875189942195112386ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (arr_5 [i_1] [i_2] [i_1])));
            arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (1588082588) : (((/* implicit */int) arr_3 [i_1 - 2]))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4])) >> (((((/* implicit */int) arr_12 [i_4])) - (30686)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_2] [i_3] [(signed char)13] [i_5 - 1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_11))));
                            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_2] [i_5] [5U] [i_5] [i_5 - 1] [(unsigned char)0])) * (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4] [i_5 + 1])) ? (((/* implicit */int) (unsigned char)218)) : (var_1)))));
                        }
                        var_18 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                } 
            } 
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [2])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_1 - 2] [i_1 - 1] [i_1])) : (((/* implicit */int) var_3)))) <= ((~(((/* implicit */int) var_5))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
        {
            var_20 = (+(((/* implicit */int) arr_20 [i_1 - 3])));
            var_21 -= arr_3 [i_1];
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                var_22 = ((/* implicit */short) (signed char)-28);
                arr_27 [i_1] [i_7] = ((/* implicit */int) ((unsigned char) arr_25 [i_1]));
                var_23 = arr_19 [i_7] [i_7];
                var_24 *= ((/* implicit */unsigned char) (~(arr_6 [i_1 - 2] [i_1])));
            }
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                arr_32 [i_7] [i_7] = ((/* implicit */short) ((1935599138U) << (((((/* implicit */int) arr_4 [i_1 - 1])) - (29645)))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    for (int i_11 = 3; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_38 [i_1] [i_1] [i_1] &= ((/* implicit */signed char) var_0);
                            var_25 = ((/* implicit */unsigned char) var_9);
                            arr_39 [i_11 - 2] [i_10] [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_11] [i_11] [i_10] [i_9] [(unsigned short)2] [(unsigned short)2])) : (((/* implicit */int) (unsigned char)37))))) ? (arr_10 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-29588)))) ? (arr_18 [i_1] [i_9] [i_1] [i_1] [i_1] [i_1 - 3] [i_7]) : (((/* implicit */int) arr_12 [i_9]))));
                        }
                    } 
                } 
                arr_40 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_31 [i_9]);
            }
            var_27 = ((/* implicit */long long int) arr_2 [i_1 + 2]);
        }
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 3; i_13 < 14; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_13 - 2] [i_13 - 3] [i_13 + 1]))));
                        var_29 = ((/* implicit */long long int) arr_47 [i_1 + 1] [i_12] [i_13] [i_12]);
                    }
                } 
            } 
            arr_48 [(signed char)13] [(unsigned short)3] = ((/* implicit */unsigned short) ((var_5) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_8)) - (132))))))));
        }
        var_30 = ((/* implicit */unsigned int) ((((10875189942195112365ULL) - (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) arr_31 [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 14; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) ((long long int) (-(arr_22 [i_1 + 1] [i_15]))));
                    var_32 = (short)14380;
                    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_1] [i_1 + 2] [i_16] [i_15 - 1] [i_16]))));
                }
            } 
        } 
    }
    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        var_34 *= ((/* implicit */unsigned long long int) max((((var_10) + (((/* implicit */long long int) ((/* implicit */int) (short)16216))))), (((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_17])) << (((((/* implicit */int) arr_57 [i_17])) - (9099))))))));
        var_35 = ((/* implicit */_Bool) (-((((~(((/* implicit */int) (unsigned char)224)))) | (max((var_0), (((/* implicit */int) (unsigned short)0))))))));
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            for (unsigned short i_19 = 1; i_19 < 24; i_19 += 2) 
            {
                {
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(var_4))))));
                    var_37 *= ((max((((/* implicit */unsigned long long int) ((-3765910531608617449LL) | (-1401591961729097074LL)))), (7571554131514439212ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_59 [(_Bool)1] [i_19 + 1] [i_19]))) * (min((((/* implicit */long long int) arr_57 [i_17])), (var_10)))))));
                    arr_66 [i_19] [i_17] [i_17] [i_17] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_60 [i_19 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25763)))) * (((/* implicit */int) arr_59 [i_18] [i_19 + 1] [i_18]))))), ((+(((((/* implicit */_Bool) arr_60 [(unsigned short)20])) ? (((/* implicit */unsigned int) var_1)) : (arr_65 [i_17] [i_18])))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_69 [i_20] = ((/* implicit */unsigned char) arr_68 [i_20]);
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((1962533786690018928ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))))));
        /* LoopSeq 2 */
        for (short i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            arr_72 [i_20] [4] = ((((/* implicit */int) ((short) (unsigned char)15))) % (((/* implicit */int) arr_63 [i_20] [i_21] [i_20])));
            arr_73 [i_21] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)31338)))) && (((/* implicit */_Bool) max((3241175312U), (((/* implicit */unsigned int) arr_60 [(signed char)1])))))));
            var_39 = ((/* implicit */unsigned char) max((var_39), (var_3)));
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 4; i_22 < 18; i_22 += 3) 
        {
            var_40 = ((/* implicit */short) (+(((/* implicit */int) (short)9689))));
            var_41 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_22] [6U] [i_20])) ? (((/* implicit */int) arr_76 [i_20] [i_22] [i_20])) : (((/* implicit */int) arr_59 [i_20] [i_20] [i_20]))))) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)15))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            var_42 -= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned short)25490)))) + (2147483647))) >> (((((/* implicit */int) arr_78 [i_20])) + (10078)))));
            arr_81 [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_57 [i_20]))));
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
            var_44 = ((/* implicit */signed char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_20]))))), (var_1)))));
            var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    /* vectorizable */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_86 [i_24] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [i_24]))));
        arr_87 [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) arr_55 [(short)4] [i_24])) : (((/* implicit */int) ((((/* implicit */int) (short)5365)) <= (2147483647))))));
    }
    var_46 = ((/* implicit */signed char) var_6);
    var_47 = ((/* implicit */_Bool) var_9);
    var_48 &= ((/* implicit */signed char) (+(((((/* implicit */int) var_6)) | (var_1)))));
}
