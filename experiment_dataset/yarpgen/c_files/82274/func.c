/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82274
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                    arr_9 [i_2] [i_2] = (+(((((/* implicit */_Bool) min(((unsigned short)61887), ((unsigned short)3648)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 33488896U)) ? (var_9) : (var_0))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) (-(var_5))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((max((arr_6 [i_3 - 2] [(signed char)4] [i_3]), (arr_6 [i_3 - 2] [i_3] [i_3]))) & ((-(arr_6 [i_3 - 1] [1LL] [i_3])))));
        arr_13 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_3 + 2] [i_3 - 1])) ? (1006439038) : (((/* implicit */int) arr_3 [i_3 - 2] [i_3 + 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3 + 2] [i_3 - 1])))))));
    }
    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) (+(min((arr_4 [i_4 - 2] [i_4 + 2] [i_4 + 2]), (arr_4 [i_4 - 2] [i_4 + 2] [i_4 + 2])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (var_11)))))))));
                        var_14 = ((/* implicit */int) ((unsigned char) var_11));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_15 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(unsigned char)14] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_24 [i_4] [6LL] [6LL] [i_8])))) : (arr_10 [i_4] [4ULL]))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_4))))))))));
                    }
                    var_17 = ((/* implicit */int) ((12341705112113434140ULL) - (5171095335743866211ULL)));
                    arr_30 [i_4] [5ULL] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) / (max((((((/* implicit */_Bool) (short)32746)) ? (1769823309U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_7))))));
                    var_18 = ((/* implicit */unsigned char) ((144115153716117504LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131)))));
                }
            } 
        } 
        arr_31 [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4723547628048485649LL)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4 + 1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_41 [i_4] [i_4] [i_4] [i_10] = ((/* implicit */unsigned char) min(((+(arr_22 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_4 + 2]))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 10217803799545990887ULL)))))))));
                        arr_42 [i_10] [11] [12ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_24 [i_4 - 1] [i_9 + 1] [i_11 - 1] [2])) ? (var_5) : (((/* implicit */int) arr_24 [i_4 - 2] [i_9 - 3] [i_11 - 1] [(unsigned short)8])))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_4 - 1])) < (var_4))))));
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (min((var_0), (arr_10 [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_15 [i_4]), (((/* implicit */long long int) var_1))))) ? (var_2) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        arr_43 [i_4] [i_10] [i_10] [i_11] [i_10] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) (short)126)) - (102))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        var_21 = ((/* implicit */long long int) arr_23 [7ULL] [i_12] [7ULL] [(unsigned char)0]);
        var_22 = ((/* implicit */long long int) min((var_22), (((arr_10 [i_12] [i_12]) / (arr_10 [i_12] [i_12])))));
        var_23 = ((/* implicit */unsigned int) ((var_0) >= (var_0)));
    }
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_14 = 1; i_14 < 21; i_14 += 1) 
        {
            arr_51 [i_13] [i_13] = ((/* implicit */int) (-((+(((unsigned int) var_1))))));
            var_24 = ((/* implicit */unsigned long long int) (-((+(arr_46 [i_14 - 1] [i_14 - 1])))));
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 1) 
            {
                {
                    arr_57 [i_13] = ((/* implicit */unsigned char) arr_52 [i_13] [i_16 - 2] [i_16 + 1]);
                    arr_58 [i_13] [i_13] [i_16] = ((/* implicit */signed char) min((min((((/* implicit */long long int) 1588058437U)), (-2920039813256415630LL))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        arr_61 [16LL] [i_15] [i_16] [(short)16] [i_13] |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) arr_49 [i_16 - 1] [i_16 - 2] [12ULL]))));
                        /* LoopSeq 4 */
                        for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            var_25 += ((/* implicit */int) var_6);
                            arr_64 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (-(arr_50 [i_13] [i_16 - 2] [i_16 - 1])));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((_Bool) arr_63 [9LL] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
                        }
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            var_27 = ((/* implicit */short) ((((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (var_2) : (((arr_53 [3ULL] [(unsigned char)11]) ? (((/* implicit */int) arr_56 [i_13])) : (((/* implicit */int) var_7))))));
                            var_28 = ((/* implicit */int) ((unsigned int) arr_59 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1]));
                        }
                        for (long long int i_20 = 1; i_20 < 19; i_20 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3412540488U)))) ? (((/* implicit */int) arr_67 [i_13] [18LL] [i_16 + 1] [18ULL] [8ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                            arr_71 [i_20] [i_15] [i_13] [i_17] [i_20] = ((/* implicit */unsigned char) ((var_5) ^ (((/* implicit */int) (!(var_6))))));
                            var_30 = ((/* implicit */signed char) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_62 [i_15] [i_16 - 1] [i_20 + 3] [i_17] [i_20] [i_16 - 1])) == (((/* implicit */int) arr_62 [i_13] [i_16 - 1] [i_20 + 2] [i_17] [i_20 + 3] [i_15]))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            arr_75 [i_17] [i_21] [i_17] [i_17] [i_17] [i_17] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-2682170858741875065LL)));
                            arr_76 [i_13] [(short)20] [i_13] [i_15] [i_13] = ((/* implicit */int) ((((/* implicit */int) arr_65 [i_16 - 2] [i_16 - 2])) < (var_2)));
                        }
                        var_32 = ((/* implicit */unsigned char) var_1);
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 1; i_22 < 20; i_22 += 3) 
                    {
                        arr_80 [i_13] [i_15] [i_13] = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) ^ ((~(arr_50 [i_13] [i_13] [7])))));
                        var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_13]))))) ? ((+(var_4))) : ((+(var_11)))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 2682170858741875059LL))) ? (arr_69 [i_16 + 1] [i_15] [i_22 + 1] [12LL] [20LL] [i_13]) : (((/* implicit */int) arr_56 [(unsigned char)12])))))));
                        arr_81 [1U] [i_13] [8ULL] = ((/* implicit */long long int) ((((/* implicit */int) arr_63 [i_15] [(short)9] [19LL] [i_16] [i_16 + 1] [(short)14] [i_16])) << (((((/* implicit */int) arr_63 [i_16] [i_16] [(_Bool)0] [i_16 - 2] [i_16 + 1] [i_16] [i_16])) - (25)))));
                    }
                }
            } 
        } 
        arr_82 [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_8)))))))));
    }
    for (int i_23 = 0; i_23 < 14; i_23 += 2) 
    {
        arr_85 [i_23] |= ((/* implicit */long long int) max((983040), (((/* implicit */int) (unsigned short)45768))));
        var_35 = ((/* implicit */long long int) min(((~(var_4))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_23]))))), (arr_67 [i_23] [i_23] [i_23] [i_23] [i_23]))))));
        arr_86 [i_23] = ((unsigned char) arr_60 [i_23] [i_23] [i_23] [i_23] [i_23]);
    }
    for (long long int i_24 = 1; i_24 < 16; i_24 += 1) 
    {
        arr_89 [i_24] = ((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))));
        var_36 = max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1588058447U)))) ? ((+(((/* implicit */int) (short)-32765)))) : (((/* implicit */int) arr_68 [i_24 - 1] [i_24 + 1]))))), (4294967295U));
    }
}
