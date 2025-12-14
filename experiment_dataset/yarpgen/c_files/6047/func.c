/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6047
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((min((((/* implicit */unsigned long long int) 0U)), (35184372088831ULL))) >> (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14))))) : (((/* implicit */unsigned long long int) (~(1430697232U))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned char)41);
            arr_5 [i_0] [i_1] = ((/* implicit */int) (((+(min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_5)))))) & (arr_1 [i_1] [i_0])));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)25259)) && (((/* implicit */_Bool) 14336U)))) || (((/* implicit */_Bool) 2047ULL))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned short) min((arr_2 [i_0]), (arr_2 [i_1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_1 [4U] [i_4 + 1])), (((unsigned long long int) arr_1 [i_3] [i_4 - 1]))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_19 -= ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_4] [(unsigned char)1]);
                            arr_18 [(unsigned short)0] [i_3] [i_3] &= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) min((arr_10 [i_2] [i_3] [i_5]), ((unsigned short)40277)))))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_5])))) % (((/* implicit */int) min((var_15), (arr_10 [i_0] [i_0] [i_4]))))))));
                            var_20 = ((/* implicit */int) min((var_8), (var_6)));
                            arr_19 [i_0] [i_2] [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((unsigned char) (unsigned short)10685))))));
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_2] [i_2] [i_0] &= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) (unsigned char)26))), ((~(var_2)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_23 [i_2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned short)25233))))))), (arr_14 [i_0] [(unsigned char)9] [i_0])));
                            arr_24 [i_0] [10U] [i_0] [i_4 + 1] [i_4] = var_1;
                            var_21 ^= ((/* implicit */unsigned char) min((641757860U), (((/* implicit */unsigned int) arr_9 [i_6] [i_4 - 1] [i_2]))));
                            arr_25 [i_4] = ((/* implicit */long long int) var_7);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 1])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)-65)))))));
                            arr_29 [i_0] [i_2] [i_4] [i_0] [i_2] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [4U]);
                            arr_30 [i_4] [i_2] [i_3] [i_4] [(unsigned char)12] = ((/* implicit */unsigned char) var_11);
                        }
                        arr_31 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) var_12);
                    }
                } 
            } 
            var_24 += ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (unsigned short)6750)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_2] [13ULL])))), (((/* implicit */int) (unsigned short)39993)))), (((/* implicit */int) arr_3 [i_0]))));
            arr_32 [i_0] [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (unsigned short)40255)), (min((((/* implicit */unsigned long long int) (unsigned short)40308)), (31ULL))))), (((/* implicit */unsigned long long int) ((((unsigned long long int) 96979743U)) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)161)) <= (((/* implicit */int) var_10)))))))))));
            arr_33 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25259))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))));
        }
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 14; i_8 += 3) 
        {
            arr_36 [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [7U] [i_0] [i_0] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [i_8]))) : (var_14)));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (signed char i_10 = 4; i_10 < 15; i_10 += 2) 
                {
                    {
                        arr_42 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [15ULL] [i_10 - 1] [i_10 - 4] [i_10])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_10 + 1] [i_10] [i_10 + 1])))));
                        arr_43 [i_8] [i_8] [i_8] [i_9] [i_9] [13] = ((/* implicit */unsigned char) 4294952976U);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_11 [i_8]))));
        }
        arr_44 [i_0] = ((/* implicit */unsigned int) ((arr_38 [i_0] [i_0] [i_0] [i_0]) > ((+(arr_38 [i_0] [i_0] [i_0] [(unsigned short)2])))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 14; i_12 += 3) 
            {
                for (unsigned int i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 2; i_14 < 15; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_53 [6] [i_13] [i_13 - 2] [i_13 - 2] [i_14] [6])), (var_15)))) - (((/* implicit */int) var_8))));
                            arr_56 [i_14 - 1] [i_11] [i_13 - 1] [(unsigned char)5] [i_12] [i_11] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */long long int) 15360U)) : (-6443898508317734021LL))));
                            var_27 *= ((/* implicit */unsigned short) min(((~(arr_46 [i_11 + 2] [i_12 - 1] [i_13 + 1]))), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_5))))));
                            arr_57 [i_0] [i_11] [i_12 + 1] [i_13] [i_14] |= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_34 [i_12]))))));
                        }
                        arr_58 [i_0] [i_0] [i_11] = 15791511989504443161ULL;
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_19 = 1; i_19 < 20; i_19 += 3) 
                        {
                            var_28 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_72 [i_15] [i_15] [i_19 - 1] [i_18] [i_18] [i_19] [i_15])) > (((/* implicit */int) arr_72 [i_15] [14ULL] [i_19 - 1] [i_18] [i_19 + 1] [(unsigned char)12] [i_19])))) ? (arr_68 [(unsigned char)16] [(unsigned char)12] [i_19 - 1] [i_18] [i_17]) : (min((arr_68 [i_19] [i_16] [i_19 - 1] [i_18] [i_18]), (14336U)))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_61 [i_15]))));
                            arr_73 [i_15] [i_16] [i_15] [i_18] [i_17] = arr_61 [(unsigned char)14];
                        }
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) var_8);
                            arr_76 [i_17] [i_16] [i_17] [i_18] [i_17] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (var_1)));
                            arr_77 [i_15] [i_15] [i_15] [i_15] [i_17] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) (((-(var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_20])) && (((/* implicit */_Bool) arr_61 [i_15]))))))))) > (((/* implicit */int) var_12))));
                        }
                        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_15] [i_15] [i_15] [i_16] [i_17] [i_16] [i_21]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_59 [i_17]))))))), (min((2655232084205108455ULL), (1637498420524637102ULL)))));
                            arr_81 [i_17] [i_17] = ((/* implicit */long long int) var_5);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            var_32 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_1));
                            var_33 ^= ((/* implicit */long long int) ((arr_78 [i_15]) > (14319U)));
                            var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_64 [i_17] [i_18])))) ? (arr_78 [i_15]) : (((unsigned int) arr_72 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned short)13]))));
                            arr_85 [i_15] [i_22] [i_22] [i_18] |= ((/* implicit */unsigned long long int) (+(arr_60 [i_17])));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_83 [i_15] [i_15] [i_17] [(unsigned char)1] [i_22] [i_22])) ? (arr_83 [i_15] [i_16] [i_17] [4LL] [i_18] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10))))))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) 
                        {
                            arr_89 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_18])) ^ (((/* implicit */int) arr_79 [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) (~(arr_78 [i_17])))) : (min(((-(var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_87 [i_15] [i_16] [i_15] [i_17] [i_18] [i_18])))))))));
                            arr_90 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)182))))) ^ (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_15] [i_17] [i_15] [i_23]))) : (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_15])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
                        {
                            arr_94 [i_17] [(unsigned char)7] [i_18] [i_17] [i_16] [i_17] = ((/* implicit */unsigned char) arr_71 [(signed char)18] [i_17]);
                            arr_95 [(unsigned char)11] [i_17] [i_17] [i_18] [i_17] = ((/* implicit */unsigned char) var_11);
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) arr_60 [i_16]))));
                        }
                        for (long long int i_25 = 2; i_25 < 21; i_25 += 3) 
                        {
                            var_37 *= ((/* implicit */unsigned long long int) ((arr_82 [i_15] [i_15] [i_15] [(unsigned char)8] [i_15]) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_97 [(unsigned char)14] [i_25] [i_25] [i_18] [i_25 + 1] [i_25 - 2]))))));
                            arr_100 [i_25] [i_17] [i_17] [i_16] [i_17] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_91 [i_17] [i_17] [i_17] [i_25] [i_17] [i_17] [i_16]))))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_91 [i_15] [i_15] [20U] [16U] [i_16] [i_16] [i_15])), (arr_62 [i_15] [i_15] [i_15]))), (min((min((var_3), (((/* implicit */unsigned long long int) arr_63 [i_15])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_15] [i_15])) && (((/* implicit */_Bool) 15791511989504443161ULL)))))))));
        }
        var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_68 [i_15] [i_15] [i_15] [i_15] [i_15])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) 
        {
            var_40 = ((/* implicit */long long int) var_10);
            arr_103 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2563))) == (2683559171U)));
            arr_104 [i_26] = ((/* implicit */unsigned char) (~(var_1)));
        }
        /* vectorizable */
        for (unsigned int i_27 = 0; i_27 < 22; i_27 += 4) 
        {
            arr_107 [i_15] = ((/* implicit */unsigned short) (signed char)-126);
            arr_108 [i_15] [i_27] [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_27])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_15] [i_15] [i_15] [i_27] [i_27] [i_27] [i_27]))) : (arr_75 [i_15])));
            var_41 -= ((((/* implicit */_Bool) var_1)) ? (arr_78 [i_27]) : (arr_78 [i_27]));
        }
    }
}
