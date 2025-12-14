/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89186
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
    var_10 |= ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_5))), (var_4)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (16599705936297602874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? ((+(((/* implicit */int) (short)12223)))) : (((((/* implicit */_Bool) 4232859475U)) ? (((/* implicit */int) arr_0 [16ULL] [i_0 + 4])) : (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [19ULL]))) : (((4232859475U) >> (((4232859476U) - (4232859475U))))))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) -1096893590);
            }
            /* vectorizable */
            for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (_Bool)0))));
                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0 - 1]))) - (30)))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    var_13 |= ((/* implicit */long long int) arr_13 [i_1]);
                    var_14 = ((_Bool) arr_2 [i_3 - 1]);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4907026746332666588LL)) ? (((/* implicit */int) arr_11 [4ULL] [i_3] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
                    var_16 = ((/* implicit */short) var_6);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_3] [(short)11] = ((/* implicit */signed char) var_1);
                    arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */int) ((long long int) arr_17 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]));
                }
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_3 + 1])) + (2147483647))) << (((((/* implicit */int) (short)738)) - (738))))))));
            }
            for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                var_18 = var_2;
                arr_24 [(short)3] [i_1] |= ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_13 [i_1])))));
                arr_25 [i_6] [i_1] = ((/* implicit */unsigned int) (signed char)-80);
                /* LoopSeq 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_23 [i_0 - 1]))))) == (min((3303465193322847265ULL), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_7] [i_7] [i_1])))))))));
                    var_20 *= ((/* implicit */long long int) arr_2 [7]);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_6))) & (var_4)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) (-(arr_6 [(unsigned char)18] [i_6] [(unsigned char)18])));
                    arr_31 [i_1] [i_1] [i_6 - 2] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(-4907026746332666589LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_6 + 3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 3] [i_0 + 3] [i_6 + 1] [i_8]))) / (((((/* implicit */_Bool) -4907026746332666588LL)) ? (arr_27 [i_1]) : (((/* implicit */unsigned long long int) -1610321728933618474LL))))))));
                    arr_32 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_27 [i_8]))) + (((/* implicit */unsigned long long int) min((1339053100), (((/* implicit */int) (signed char)-124)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_6] [i_8])) != (((/* implicit */int) arr_18 [i_6] [i_6 - 2] [i_6 - 2] [i_0 + 2]))))) : ((-(arr_15 [i_0] [i_0] [i_0] [i_8] [i_0])))));
                }
                for (int i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_28 [i_9 - 1] [(unsigned short)9] [i_9 - 2]) > (arr_28 [i_9 - 1] [i_9 - 1] [i_9])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_6 + 2] [(_Bool)1] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_18 [i_6 + 3] [i_1] [i_1] [i_0 + 1]))))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)20425))) & (4907026746332666588LL)))) ? (((arr_22 [i_0 + 3] [i_6 + 2] [i_6] [i_9 + 1]) ? (((/* implicit */int) max((((/* implicit */short) arr_11 [i_0] [i_0] [i_0])), ((short)-19075)))) : (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_6 + 2] [i_9 - 2])) || (arr_1 [(unsigned short)5])))))))));
                }
            }
            arr_35 [i_0] [i_1] = ((((/* implicit */_Bool) max((arr_28 [i_0] [i_0 + 3] [i_0 + 2]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [12U] [i_0 + 2] [i_0 + 2] [i_1]))) : (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 2])) : (-1339053101)))));
            var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_0 + 3]))));
        }
        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2]))))))));
            var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) ((int) -8351427591849633406LL)))), ((~(3236290198538420170ULL)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                arr_41 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7LL)) ? (((unsigned long long int) arr_34 [i_0 + 2] [i_11] [i_0] [i_0 + 2] [i_0 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0 + 2])))));
                arr_42 [(short)15] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_10] [i_10] [i_10] [(signed char)1]))));
            }
            for (long long int i_12 = 3; i_12 < 19; i_12 += 3) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_12 [i_0] [i_10] [i_12 + 2] [i_12]))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 15839161510548762205ULL)) ? (-3691679032052308140LL) : ((-9223372036854775807LL - 1LL)))));
                        arr_52 [i_0] [i_10] [i_12 + 4] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_40 [i_0] [i_10] [i_12 - 2])), ((unsigned short)38696))), (((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 2]))))) ? (6744691929522819448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [(unsigned short)6] [i_12])))));
                        arr_53 [i_0 + 3] [i_0] [i_0] [i_12] [i_0 - 1] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned short) (~(min((arr_34 [i_0 + 3] [i_12] [i_12 - 1] [(unsigned short)10] [i_14]), (arr_34 [i_0 + 3] [i_12] [i_0 + 3] [i_0 + 3] [i_13])))));
                        var_30 = (!(((/* implicit */_Bool) var_5)));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_13] [i_12 + 4] [i_12 - 3] [i_12 - 3])) << (((/* implicit */int) arr_12 [i_15] [i_12] [14ULL] [i_12 - 3]))))) % (max((((/* implicit */unsigned long long int) arr_12 [i_15] [i_12 + 3] [i_12 + 3] [i_12 + 3])), (14219775229222475613ULL)))));
                        var_32 = ((((/* implicit */_Bool) 2348189996U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_10]))) : (((((/* implicit */_Bool) arr_30 [i_12 + 4] [i_0 + 3] [i_0 + 4])) ? (1346021465392060407LL) : (((/* implicit */long long int) 4117295582U)))));
                        var_33 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_29 [i_0 + 1] [i_15] [i_12 - 1] [i_12 + 1] [i_0] [i_0]) ? (1002148621U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 4] [i_0 + 4] [i_0 + 3] [i_0 + 4]))))))) ^ (max((((/* implicit */unsigned long long int) ((unsigned char) 3859787445U))), (((((/* implicit */_Bool) (unsigned short)17026)) ? (3159643676976907897ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                        arr_57 [i_12] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)15)), (arr_27 [i_13])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_12 + 3] [i_10] [i_12] [i_13])) ? (((/* implicit */int) (short)-9265)) : (((/* implicit */int) arr_54 [i_12] [i_10] [i_10] [i_13] [3ULL] [i_15] [i_15]))))), (arr_30 [i_12 - 3] [i_12 - 2] [(unsigned short)12]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) /* same iter space */
                    {
                        arr_60 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 3] [i_12] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_10] [i_12 - 2]))) : (arr_39 [i_0 + 3])));
                        arr_61 [i_0 + 3] [i_0] [i_10] [i_0] [(_Bool)1] [i_12] = ((/* implicit */unsigned long long int) arr_15 [i_0 + 3] [i_0 + 3] [i_12] [i_12] [8LL]);
                        arr_62 [i_12] [i_10] [i_10] [i_10] [i_12] [(_Bool)1] = ((/* implicit */unsigned int) arr_18 [i_0 + 4] [i_0 + 3] [i_0 + 4] [i_0 + 4]);
                    }
                    var_34 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_28 [i_0 + 4] [i_0] [i_0 + 4]))), (((unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_0] [15LL] [i_12] [i_12 - 1] [i_12 - 1])) ? (11508967556158266673ULL) : (((/* implicit */unsigned long long int) var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 4) 
                    {
                        var_35 ^= ((/* implicit */_Bool) arr_65 [i_0 + 2] [(_Bool)1] [(signed char)14] [i_0 + 2] [i_10]);
                        arr_66 [i_0 + 2] [i_0 + 2] [i_12] [i_0] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((short) (unsigned char)19))) ? (((((/* implicit */_Bool) arr_65 [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_12])) ? (var_9) : (((/* implicit */unsigned long long int) 1716815626)))) : (((/* implicit */unsigned long long int) max((arr_55 [i_17] [i_12] [i_12 + 2] [(_Bool)1] [i_12] [(_Bool)1]), (((/* implicit */unsigned int) arr_23 [i_0]))))))) < (((/* implicit */unsigned long long int) min(((+(arr_44 [i_0] [i_10] [i_13] [i_17 - 1]))), (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (4907026746332666589LL))))))));
                        arr_67 [i_12] [i_10] [i_12 - 2] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_37 [i_0 + 1] [i_12 - 3] [i_17 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_45 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1]), (arr_45 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 2]))))) : (((((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_13] [i_13])) ? (arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_17 + 2]) : (((/* implicit */unsigned long long int) ((arr_55 [i_0] [i_12] [i_10] [i_12] [i_13] [(_Bool)1]) << (((((/* implicit */int) (signed char)-62)) + (77))))))))));
                        arr_68 [i_12] [(unsigned char)15] [i_12 - 1] [i_13] [i_17] [(unsigned char)15] [i_10] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_1))))));
                    }
                }
                for (short i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    var_36 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_0 - 1])))))));
                    arr_71 [(unsigned short)3] [i_0] [i_10] [i_12] [i_12] = ((unsigned int) max((arr_64 [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_12] [6]), (((/* implicit */int) var_3))));
                }
            }
            for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                var_37 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0]))) == (((unsigned long long int) arr_28 [i_0 - 1] [i_10] [i_0 - 1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_20 = 2; i_20 < 21; i_20 += 4) 
                {
                    arr_76 [i_0] [i_0] [i_19] [i_20] = ((/* implicit */unsigned long long int) arr_54 [i_20] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [14]);
                    var_38 = arr_59 [(unsigned char)2] [i_20] [i_20 - 2] [i_20 - 2] [i_20 - 2];
                }
            }
        }
        arr_77 [i_0] = ((_Bool) min((((/* implicit */signed char) arr_1 [i_0 + 2])), (arr_74 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 4])));
    }
    /* LoopNest 2 */
    for (short i_21 = 1; i_21 < 23; i_21 += 2) 
    {
        for (int i_22 = 0; i_22 < 24; i_22 += 3) 
        {
            {
                var_39 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_78 [i_21 + 1])))));
                arr_83 [i_22] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) 4907026746332666611LL)) ? ((-(2287648552438193503LL))) : (((/* implicit */long long int) max((4220267477U), (3720512753U))))));
            }
        } 
    } 
}
