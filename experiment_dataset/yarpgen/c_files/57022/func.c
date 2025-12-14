/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57022
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (+(-6522483735830935099LL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) arr_1 [i_0])))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) > (10107395969311374413ULL)))), (min((((/* implicit */int) arr_0 [i_0] [i_1])), (arr_4 [i_1] [i_0]))))))));
            arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) var_10)), (var_5))))))) > ((+(arr_3 [i_1])))));
            arr_7 [i_0] = ((/* implicit */long long int) ((max((-6581372267926926460LL), (((/* implicit */long long int) var_8)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) > (8551100016451639499ULL)))))));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_5), (((/* implicit */short) var_6)))))))), (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */unsigned long long int) 2192663254U)) * (1140224678166194216ULL)))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                arr_13 [i_0] = ((/* implicit */_Bool) (-(arr_12 [i_2 + 1] [i_2 - 2] [i_2 - 1])));
                arr_14 [i_0] [i_0] [i_2 - 2] [i_0] = ((/* implicit */int) ((6242720010140534138LL) > (arr_12 [i_3] [i_3 + 1] [i_3])));
            }
            for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
            {
                var_17 = ((/* implicit */int) (((-(var_4))) > (((/* implicit */int) (signed char)4))));
                arr_18 [i_0] = ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_4] [i_4])))) : ((~(((/* implicit */int) var_6)))));
                arr_19 [i_0] [i_2 - 3] [i_4 - 3] = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                arr_22 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((int) arr_20 [i_0] [i_0] [i_2 - 1]));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_25 [i_6] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_5])) > (var_8)));
                    arr_26 [i_6] [i_2 - 2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) > (arr_17 [i_0] [i_2 - 2] [i_5] [i_6])));
                }
            }
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                arr_29 [i_7] [i_2 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2] [i_7] [i_7]))) > (var_13)));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2 - 3])) > (((/* implicit */int) ((2274798312835755127LL) > (var_13))))));
            }
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)31))))));
            arr_30 [i_0] [i_0] = ((/* implicit */long long int) (~(18446744073709551615ULL)));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_20 = ((/* implicit */short) (-(0U)));
                var_21 = ((/* implicit */long long int) var_8);
            }
            for (short i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                arr_38 [i_9] [i_0] [i_2] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) 4854228641427691613LL)) ? (2863965816571530995LL) : (((/* implicit */long long int) 4258619113U))))));
                arr_39 [i_0] [i_2] [i_9] [i_0] = -6795019844016284903LL;
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        {
                            arr_44 [i_9] [i_9] [i_11] = ((/* implicit */signed char) ((-692688231) > (var_1)));
                            arr_45 [i_2 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(783459249)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (((+(16548557598083979327ULL))) > (((/* implicit */unsigned long long int) arr_23 [i_2 - 1]))));
            }
            /* LoopNest 2 */
            for (unsigned int i_12 = 4; i_12 < 14; i_12 += 1) 
            {
                for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 4) 
                        {
                            var_23 = ((/* implicit */short) ((var_9) > (arr_53 [i_2 - 3] [i_13 - 1])));
                            arr_56 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_13] [i_14 + 3] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (6294406745100462410LL))) ? (3341022224290096399LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            arr_57 [i_0] [i_0] [i_2 - 2] [i_12] [i_13] [i_0] [i_14 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 15ULL))))) > (((/* implicit */int) var_10))));
                            var_24 = ((/* implicit */int) ((((2681030672U) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned int) var_12))));
                            var_25 = ((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_12 - 4] [i_14]);
                        }
                        arr_58 [i_13 + 1] [i_13] [i_13] [i_13 + 1] = ((/* implicit */unsigned char) ((arr_0 [i_2 - 1] [i_12 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_12 - 1]))) : (var_13)));
                        arr_59 [i_0] [i_0] [i_13] [i_13 - 1] [i_13] [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) > (2406448863U))))) > (((7862466653207567765LL) >> (((arr_12 [i_2 + 2] [i_2 + 2] [i_13 + 1]) - (8223898459176649760LL)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 4; i_15 < 15; i_15 += 3) /* same iter space */
        {
            arr_62 [i_0] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((1542631620) > (((/* implicit */int) var_6))))) > (((/* implicit */int) ((((/* implicit */int) (short)29622)) > (var_1))))));
            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_17 [i_0] [i_0] [i_0] [i_0])))) > ((~(var_11))))))));
        }
        for (unsigned long long int i_16 = 4; i_16 < 15; i_16 += 3) /* same iter space */
        {
            arr_65 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (2735356690239599907LL))) > (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))))))) : (((((var_13) > (((/* implicit */long long int) 2147483644)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_16 - 4] [i_16 - 4]))) : (arr_21 [i_16 - 1] [i_16 - 1] [i_16 - 1])))));
            arr_66 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((~(3232690178748055800ULL))) | (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) 2436495006U))) ? (((long long int) arr_20 [i_0] [i_0] [i_0])) : (((/* implicit */long long int) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_16 + 1])))) > ((~(arr_21 [i_0] [i_0] [i_0])))));
            var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)160)) ? (min((((/* implicit */unsigned long long int) var_4)), (9832162147692691218ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) > (var_2))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_53 [i_16 - 3] [i_16 - 4]) > (((/* implicit */unsigned long long int) max((1165096014), (2147483647))))))))));
            var_29 = ((((((/* implicit */_Bool) arr_43 [i_16] [i_16] [i_16 - 4] [i_16] [i_16])) ? (((/* implicit */int) arr_43 [i_16] [i_16 + 1] [i_16 - 2] [i_16 - 2] [i_16 - 2])) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_16 + 1] [i_16] [i_16 - 4])))) > (((/* implicit */int) ((16164966425899194821ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))))));
        }
    }
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 13; i_17 += 4) 
    {
        for (int i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            {
                arr_72 [i_17] [i_17] = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_68 [i_17])))));
                arr_73 [i_17] [i_17] [i_18] = ((6458956421444602527LL) > (((/* implicit */long long int) ((/* implicit */int) ((var_12) > (arr_55 [i_17] [i_18] [i_17] [i_17] [i_17] [i_17]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) var_0);
    var_31 = ((/* implicit */unsigned long long int) var_1);
}
