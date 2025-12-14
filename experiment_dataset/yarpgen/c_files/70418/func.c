/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70418
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
    var_17 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) (short)-457)) & (((/* implicit */int) (short)456))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */int) arr_1 [6U])), (((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) (unsigned char)181))))))), (-4833053645894718896LL)));
                        var_19 = ((/* implicit */long long int) 14709789340165059500ULL);
                        var_20 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1] [(unsigned short)15] [i_0])) ? (arr_7 [i_1 + 1] [i_0] [i_1 + 2] [i_0] [i_0]) : (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1])))) ? (((/* implicit */long long int) var_1)) : (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1] [i_0]));
                        var_21 &= ((/* implicit */short) min((arr_5 [i_1] [i_1] [i_1 + 2] [i_1]), (((arr_8 [i_1 - 2] [i_1] [i_1] [i_1]) ? (arr_6 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_1] [i_1 + 1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_1 [i_4 + 1]))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (short)-30503)) > (((/* implicit */int) var_11))))) : ((~(((/* implicit */int) arr_11 [i_5]))))));
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_6] [i_4] [i_4] [i_4]) ? (((/* implicit */long long int) arr_12 [i_4 + 2])) : (arr_16 [i_4])))) ? (((((/* implicit */_Bool) (short)13562)) ? (14709789340165059500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22684))))) : (((/* implicit */unsigned long long int) (~(var_1))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -1987750494)) || (((/* implicit */_Bool) 1378294167U))))) ^ (((/* implicit */int) ((unsigned short) var_0)))))) : (min((((arr_13 [i_4] [i_4]) - (arr_6 [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) : (arr_15 [i_4] [i_4] [i_4])))))))));
            arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (short)-456)), (arr_0 [i_4])))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)456)))));
            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)452))))), (((/* implicit */long long int) (signed char)75))))) ? (min((((/* implicit */long long int) arr_12 [i_4 + 1])), (arr_13 [i_4 + 1] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4])))));
            var_26 = ((/* implicit */signed char) ((min((var_2), ((-(((/* implicit */int) arr_1 [i_4])))))) | ((-(((/* implicit */int) (signed char)-19))))));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            arr_21 [i_7] [i_7] = ((/* implicit */long long int) var_10);
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (((~(var_15))) * (((/* implicit */unsigned long long int) arr_16 [i_4])))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            arr_25 [i_4] [i_8] = arr_24 [i_4 - 1] [(unsigned short)13];
            arr_26 [7U] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_4] [i_8])) || (((/* implicit */_Bool) 2147483629)))) ? (((((/* implicit */_Bool) (short)-23434)) ? (arr_22 [i_8] [i_4]) : (((/* implicit */unsigned long long int) 2327703573890313781LL)))) : (((/* implicit */unsigned long long int) var_9))));
            arr_27 [i_4] [(short)6] = ((/* implicit */int) ((unsigned short) arr_16 [i_4 + 2]));
        }
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            arr_30 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -1638518277013159897LL))))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(10628969068689515236ULL)))) ? ((-(((/* implicit */int) arr_1 [i_9])))) : (((/* implicit */int) arr_1 [i_4 - 2]))));
        }
        for (int i_10 = 4; i_10 < 15; i_10 += 3) 
        {
            arr_34 [i_10] [i_10] = ((((/* implicit */_Bool) arr_31 [i_10 - 3] [i_4 + 2])) ? (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_28 [i_10]))) ^ (7074933355494149453LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_16))) && (((/* implicit */_Bool) var_11)))))));
            arr_35 [i_10] [i_10 + 1] = ((/* implicit */_Bool) min(((unsigned short)25657), ((unsigned short)56694)));
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 3; i_11 < 15; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_4]))))) ? (arr_7 [i_10 - 4] [i_11 - 3] [i_10 - 1] [i_10 - 1] [i_4 - 2]) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_12 [i_11 + 1])) : (arr_15 [i_11 + 1] [i_4 + 1] [i_4 + 1])))))) ? (((((/* implicit */_Bool) (short)-30503)) ? (((/* implicit */int) (short)-448)) : ((-(((/* implicit */int) arr_20 [0U] [i_10])))))) : (var_1))))));
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    for (short i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((arr_6 [i_10] [i_10] [i_11]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51172)))));
                            var_31 += ((/* implicit */unsigned int) (-(-1518060817)));
                        }
                    } 
                } 
            }
            for (short i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned int) (short)445);
                            arr_49 [i_4] [i_10] [(unsigned short)12] = ((/* implicit */unsigned int) var_14);
                            arr_50 [i_10] [i_10] [i_14] [i_15] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2493087450372776549LL)), (arr_22 [i_10] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150)))))) : (((unsigned int) 3933708933827796398LL))))) ? ((~(((/* implicit */int) arr_31 [i_4 + 1] [i_10 - 1])))) : ((~(arr_48 [i_4] [1LL] [i_10] [i_14] [i_10] [i_15] [i_10])))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_8 [i_4 + 2] [i_10] [i_16] [i_16]))));
                        }
                    } 
                } 
                arr_51 [7] [i_10] [i_10] [10U] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_4 - 2] [i_4 - 1] [i_10] [i_10] [i_14]))));
                arr_52 [i_10] [i_10] [i_14] [i_4] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55457)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)456))) : (3364030773U)))), (10628969068689515255ULL)))));
            }
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4 + 1] [i_10 - 1])))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (arr_19 [i_4] [i_4]))) : (((/* implicit */int) arr_18 [i_4] [i_4])))))));
                var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (arr_53 [i_10 - 2] [i_4 - 2] [(short)14] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)23433))) - (arr_53 [i_10 - 3] [i_4 + 2] [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_53 [i_10 - 1] [i_4 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) arr_53 [i_10 + 1] [i_4 - 2] [i_4] [i_4])) : (arr_56 [i_4 - 2])))));
            }
            var_36 ^= ((/* implicit */signed char) (short)91);
        }
        for (short i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned int i_21 = 1; i_21 < 12; i_21 += 2) 
                    {
                        {
                            arr_68 [i_21] [i_20] [i_4] [i_18] [i_18] [i_4] = ((/* implicit */unsigned long long int) min((arr_15 [i_4] [i_18] [i_4]), (((/* implicit */long long int) ((arr_57 [i_4] [i_4] [i_4]) < (((((/* implicit */_Bool) 1706915646U)) ? (((/* implicit */unsigned long long int) -100776298399345349LL)) : (var_15))))))));
                            var_37 = min((((/* implicit */int) (signed char)-63)), (arr_44 [i_4 + 1] [i_21 + 4] [i_21 - 1] [i_21 + 2]));
                            var_38 ^= ((/* implicit */unsigned short) arr_10 [i_4] [i_4]);
                            var_39 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56702)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (-3140075692898684932LL))))));
                            var_40 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_37 [i_4 - 2] [i_19] [i_21 - 1] [i_4 - 2])) ? (((/* implicit */unsigned int) 1201970466)) : (arr_37 [i_4 - 1] [i_19] [i_21 + 1] [i_21])))));
                        }
                    } 
                } 
            } 
            var_41 -= ((/* implicit */_Bool) (-(((((/* implicit */int) arr_61 [i_18] [i_4] [i_4] [i_4])) ^ (((/* implicit */int) (_Bool)1))))));
        }
        arr_69 [i_4 + 1] = ((/* implicit */short) (~(((/* implicit */int) min(((short)-18559), ((short)30498))))));
    }
}
