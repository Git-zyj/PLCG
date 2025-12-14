/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99964
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((var_5) + (2147483647))) >> (((max((131204804791058873ULL), (((/* implicit */unsigned long long int) (unsigned char)7)))) - (131204804791058861ULL)))))), (((((11072209632213132317ULL) - (((/* implicit */unsigned long long int) var_3)))) / (max((7777800625822361254ULL), (((/* implicit */unsigned long long int) var_8))))))));
    var_12 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) (unsigned short)52882)) ? (var_9) : (((/* implicit */long long int) var_3))))))));
    var_13 -= ((/* implicit */unsigned int) max((12755928772622569994ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4263662845U)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-12353))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)52882)) > (((/* implicit */int) (unsigned short)52863))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) (unsigned short)52896)))))));
        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1)))) || (((/* implicit */_Bool) -902606690))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) var_6))))) ? (((((unsigned long long int) 31304451U)) - (17077394503001565158ULL))) : (((((/* implicit */unsigned long long int) 4263662860U)) / (17077394503001565158ULL)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [8LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) arr_4 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_2 [i_1])))) : (((int) arr_0 [i_0])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = ((((/* implicit */int) (unsigned short)12653)) - (((/* implicit */int) arr_12 [i_4 - 3] [i_4] [i_4] [i_4] [i_4])));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((int) arr_8 [i_4] [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 1] [i_4 - 1]));
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(min((2648830649U), (63U))))))));
                            arr_17 [i_1] = ((((/* implicit */_Bool) (unsigned short)45519)) ? (((/* implicit */long long int) max((((/* implicit */int) (!((_Bool)1)))), (arr_0 [i_2])))) : (var_9));
                            arr_18 [i_1] = var_3;
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((14730878406403511530ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))))))) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_23 [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 4263662844U)) ? (((/* implicit */long long int) max((4263662874U), (3092446026U)))) : (((((/* implicit */_Bool) max((arr_22 [i_6] [i_7]), (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) var_8)) : (arr_21 [i_6] [i_7] [i_7]))) : (((/* implicit */long long int) -1))))));
            arr_24 [i_6] [i_6] = max((((/* implicit */long long int) ((arr_22 [i_7] [i_6]) - (var_7)))), (arr_20 [i_7] [i_6]));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (((-(14424716080726870098ULL))) >> (((max((((/* implicit */long long int) arr_30 [i_9] [i_7])), (var_9))) - (532517554LL)))));
                        arr_32 [i_6] = ((/* implicit */short) ((unsigned long long int) max((arr_25 [i_6] [i_7] [i_8] [i_9]), (arr_25 [i_6] [i_7] [i_6] [i_9]))));
                    }
                } 
            } 
        }
        for (long long int i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            arr_35 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_31 [i_6] [i_10 - 1] [i_10] [i_6]);
            arr_36 [i_6] = ((/* implicit */_Bool) var_5);
        }
        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 1; i_12 < 20; i_12 += 4) 
            {
                arr_41 [i_6] [(unsigned char)13] [i_12] = ((/* implicit */long long int) ((((int) arr_31 [i_6] [i_11] [i_12 - 1] [i_11])) % ((+(min((((/* implicit */int) arr_33 [i_6] [i_11])), ((-2147483647 - 1))))))));
                arr_42 [i_6] [i_6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (unsigned short)48012))))) && ((_Bool)1))), (((arr_29 [i_11] [i_11] [i_12 - 1] [i_6] [i_12 - 1] [i_12 - 1]) >= ((-(((/* implicit */int) var_10))))))));
            }
            /* vectorizable */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                var_20 ^= ((/* implicit */long long int) (-(arr_44 [i_6] [i_6] [i_13 - 1])));
                var_21 = ((31304451U) >> ((((((-2147483647 - 1)) - (-2147483627))) + (52))));
                arr_45 [i_6] [i_11] [i_6] = ((/* implicit */unsigned char) ((arr_20 [i_13 - 1] [i_13 - 1]) - (arr_20 [i_13 - 1] [i_13 - 1])));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4318)) ? (((/* implicit */unsigned long long int) 469787840)) : (var_2)));
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)31029))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6])) ? (arr_37 [i_11] [i_13] [i_14]) : (arr_37 [i_6] [i_13] [i_14])))))))));
                    arr_49 [i_6] [i_11] [i_6] [i_14] = ((/* implicit */long long int) var_1);
                }
                for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((4095) == (1001877549)));
                    var_25 ^= ((/* implicit */unsigned long long int) var_9);
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((1457529770980802794ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_13] [(_Bool)1] [i_13]))))))));
                    arr_53 [i_6] [i_6] [i_6] [i_15] = ((/* implicit */long long int) arr_51 [i_6] [i_11] [i_6] [i_6] [i_15]);
                }
            }
            arr_54 [i_6] [i_11] = ((/* implicit */int) 14424716080726870104ULL);
            arr_55 [i_6] = ((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (arr_21 [i_6] [i_11] [i_11]) : (((/* implicit */long long int) arr_52 [i_6] [i_6] [i_6] [i_6] [i_11] [i_11])))), (((/* implicit */long long int) max((arr_40 [i_6] [i_11] [i_6]), (((/* implicit */int) arr_34 [i_6] [i_6] [i_6])))))));
            arr_56 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
            arr_57 [i_6] = ((/* implicit */int) arr_37 [i_11] [i_6] [i_6]);
        }
        /* LoopSeq 3 */
        for (int i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            arr_61 [i_6] [i_6] = ((/* implicit */unsigned int) max((((int) 3275876308983414588ULL)), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1671217083U)) <= (9260115039358119030ULL))))));
            arr_62 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_60 [i_16]))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                for (int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_6] [i_16])) / (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))) < (max((((/* implicit */unsigned int) arr_47 [i_6] [i_16] [i_16] [i_18] [i_17] [i_6])), (4263662850U))))))));
                        var_28 = ((/* implicit */int) min((var_28), ((~(((/* implicit */int) ((unsigned short) var_9)))))));
                        var_29 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_30 [i_6] [i_16]));
                    }
                } 
            } 
            var_30 &= (~(((/* implicit */int) ((((/* implicit */unsigned int) 729804262)) == (((((/* implicit */unsigned int) -2147483633)) / (4263662861U)))))));
        }
        for (int i_19 = 3; i_19 < 20; i_19 += 4) 
        {
            var_31 &= ((/* implicit */long long int) ((9256327909208242717ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26538)))));
            arr_71 [i_6] = (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_2))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_19 - 3] [i_19] [i_6] [i_6] [i_6] [i_6])) ? (arr_68 [i_6] [i_6] [i_6] [i_19] [i_19]) : (((/* implicit */unsigned int) arr_40 [i_6] [i_6] [i_19]))))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_10))));
        }
        /* vectorizable */
        for (unsigned int i_20 = 1; i_20 < 18; i_20 += 2) 
        {
            arr_75 [i_6] = ((/* implicit */int) (unsigned char)86);
            var_33 = ((/* implicit */short) (-(arr_73 [i_6] [i_20 + 1])));
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
            {
                var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1575385293))));
                var_35 = ((/* implicit */int) min((var_35), ((~(arr_22 [i_20 - 1] [i_20 + 2])))));
            }
        }
    }
    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) max((((arr_40 [i_22] [i_22] [i_22]) >> (((arr_37 [i_22] [i_22] [i_22]) - (13274024910777264787ULL))))), (((/* implicit */int) ((arr_29 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]) > ((-(2147483647))))))));
        arr_81 [i_22] = max((arr_68 [i_22] [i_22] [i_22] [i_22] [i_22]), (((/* implicit */unsigned int) ((unsigned short) -266043526))));
    }
}
