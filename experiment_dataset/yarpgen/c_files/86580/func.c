/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86580
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1992641003))))) & (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (1741867957U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_3))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [(signed char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))))));
        var_14 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0])) : (1992640988))), (-1992640975)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [(_Bool)1] [0U] [i_5] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_12)) : (arr_11 [i_1] [i_1] [i_4])))) : (arr_16 [i_1] [i_4 + 3] [i_4] [i_4 - 3] [(unsigned short)0] [i_4 + 1])));
                            var_16 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_19 [i_1] [1U] [i_3] [i_4] [2] [i_5 + 2])))));
                            arr_21 [i_1] [i_2] [i_3] [10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_5))) ? ((-(arr_9 [i_1] [i_1]))) : (((((/* implicit */unsigned int) -1992640975)) - (arr_9 [3] [i_2])))));
                        }
                    } 
                } 
                arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
            }
            var_17 += ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_19 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */int) min(((unsigned short)15747), (arr_12 [i_1] [i_1])))) : (arr_5 [i_1]))), ((+(arr_18 [i_1] [i_1] [i_1])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                arr_27 [20LL] = ((/* implicit */unsigned char) (~(9659198727140466768ULL)));
                var_18 += ((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned short)8009)) - (8004))))))));
            }
            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                {
                    var_19 = ((/* implicit */int) (+((~(arr_16 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_8 + 2] [i_7 - 1])))));
                    arr_34 [i_2] [(unsigned char)14] [(unsigned char)14] = min((((signed char) max((arr_5 [i_8]), (((/* implicit */int) arr_26 [i_8] [i_7] [i_2] [(unsigned char)4]))))), (((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) arr_28 [16] [(unsigned char)19])) == (0ULL)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 1992640974))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_9])) ^ ((~(-356837148)))));
                    var_22 = ((/* implicit */unsigned short) 8658654068736ULL);
                }
                arr_37 [i_1] [i_2] [(unsigned short)1] [12U] = (unsigned short)48388;
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (arr_6 [i_1]) : (((/* implicit */int) (unsigned char)0))));
                var_24 += ((/* implicit */long long int) ((arr_23 [i_1] [i_1]) % (((/* implicit */int) (short)28128))));
                arr_41 [20U] [i_2] [i_10] [i_10] = (~(((/* implicit */int) var_10)));
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            arr_45 [i_1] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_11] [i_11])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_1] [i_1] [19U])) & (((/* implicit */int) (short)12))))))))) * (((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) var_9)) ? (1508725475U) : (arr_9 [i_1] [(signed char)9]))) : (((((/* implicit */_Bool) arr_8 [(signed char)6])) ? (1898744098U) : (var_2)))))));
            var_25 += ((/* implicit */unsigned short) arr_42 [i_1]);
        }
        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            arr_50 [i_1] [i_1] [i_12] = max((((short) arr_29 [i_12] [i_1] [i_1])), (((/* implicit */short) (!((_Bool)1)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_26 = ((/* implicit */signed char) -292648083);
                arr_53 [i_1] [i_1] [i_12] [i_13] = ((/* implicit */short) arr_43 [i_12] [i_1]);
            }
            for (int i_14 = 3; i_14 < 19; i_14 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 1; i_15 < 20; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_15 - 1])) ? (((/* implicit */int) arr_8 [i_15 + 2])) : (((/* implicit */int) arr_8 [i_15 + 2]))));
                        arr_62 [i_1] [i_12] [(unsigned short)1] [1U] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)-1)) + (18))))) != (((/* implicit */int) arr_43 [i_1] [(unsigned short)19]))));
                        arr_63 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((1699570553U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [15] [5LL] [i_12] [15] [15] [i_16])) ? (arr_32 [i_16] [i_16] [i_16] [i_16] [(unsigned short)0]) : (((/* implicit */int) (unsigned char)103)))))));
                        var_28 ^= ((/* implicit */signed char) var_6);
                    }
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 2595396765U))));
                }
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((int) 1932563345)))));
                arr_64 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_48 [1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_12] [i_1]))) : (459515462237072569LL))), (((/* implicit */long long int) arr_31 [(_Bool)1] [i_12] [(unsigned char)5] [i_14])))))));
            }
            for (int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                var_31 = ((/* implicit */unsigned short) 1508725472U);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-32764))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_1])))))))) : (var_2)));
            }
            arr_68 [i_12] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [(short)18] [i_12])) ? (1409642777U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_12] [i_12]))))) / (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7620)) / (((/* implicit */int) (short)-12661))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3493))) : (arr_65 [i_1] [i_1] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_49 [i_1] [(unsigned short)12] [(unsigned char)6])), ((unsigned char)24)))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (16680559972110200352ULL)))))));
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((arr_9 [i_1] [i_12]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) (unsigned short)33867)) ? (-8634593574300879744LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31669))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_1]))))))));
        }
        /* vectorizable */
        for (signed char i_18 = 4; i_18 < 20; i_18 += 2) 
        {
            var_34 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
            var_35 = ((/* implicit */int) arr_48 [i_1] [i_18 - 1]);
            var_36 = ((((/* implicit */_Bool) arr_32 [i_18 - 1] [i_18 - 1] [(signed char)21] [i_18 - 4] [i_18])) ? (arr_32 [i_18 - 2] [i_18] [i_18] [12] [i_18 - 4]) : (arr_32 [i_18 - 3] [i_18] [i_18] [i_18 - 3] [i_18 + 1]));
        }
        var_37 = ((/* implicit */short) ((long long int) (+(arr_9 [14LL] [i_1]))));
    }
    for (int i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) arr_72 [i_19]))) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33866))))) % (max(((+(((/* implicit */int) arr_72 [i_19])))), ((+(((/* implicit */int) arr_73 [i_19] [i_19]))))))));
            var_40 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_3))))));
        }
    }
}
