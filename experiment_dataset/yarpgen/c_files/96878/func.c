/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96878
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = max((arr_1 [i_0] [i_0]), (((((/* implicit */_Bool) 120705488U)) ? (8738012241640518274LL) : (4814881818638552216LL))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((min((((/* implicit */long long int) var_12)), (4814881818638552216LL))), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_13 [i_1] [(unsigned char)8] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned char) 4814881818638552200LL);
                        var_20 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) < (4814881818638552194LL)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_21 ^= ((/* implicit */long long int) ((1071502416U) & (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)3)))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_20 [i_2] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) -4814881818638552201LL);
                            var_23 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_15 [i_6] [i_1] [i_2] [i_4] [i_1])), (-4814881818638552194LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_4])))));
                        }
                        var_24 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_2] [i_1] [i_0]))));
                        var_25 = (~(((/* implicit */int) arr_11 [i_0] [(unsigned char)7])));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_26 ^= ((/* implicit */int) -4814881818638552218LL);
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0] [10LL]))) ^ (-4814881818638552201LL)))) ? (((int) -4814881818638552216LL)) : (((/* implicit */int) var_9)))) << (((((((((/* implicit */int) var_17)) + (2147483647))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (1222686006678348749LL))) - (1222686006678352845LL))))) - (2147483642))))))));
                            arr_25 [i_2] [i_1] [i_2] [i_4] [i_7] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [(_Bool)1]);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_28 [i_0] [i_2] [i_2] [i_4] [(signed char)7] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_2] [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_4] [i_8])))));
                            arr_29 [i_0] [i_0] [i_1] [i_2] [i_4] [i_8] = ((/* implicit */long long int) (signed char)-1);
                            var_28 = ((/* implicit */int) ((unsigned char) -4814881818638552201LL));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            arr_32 [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_33 [i_4] [i_2] [i_4] [i_0] = ((/* implicit */long long int) (~(18U)));
                        }
                    }
                    var_29 *= ((/* implicit */signed char) max(((-(min((4LL), (4814881818638552200LL))))), (((/* implicit */long long int) (((~(((/* implicit */int) (short)-20169)))) * (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_36 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << ((((-(((/* implicit */int) var_2)))) + (51078))))))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            var_30 ^= ((/* implicit */unsigned char) (unsigned short)34240);
            var_31 ^= ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned char) var_4))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20165))) : (-2712842696549270566LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((int) (unsigned char)149))) <= (arr_38 [i_10])))) : (var_0)));
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_4))))))), ((+((~(((/* implicit */int) arr_35 [i_10]))))))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)164)), (max((786898780), (((/* implicit */int) arr_35 [i_10])))))))));
                        }
                    } 
                } 
                arr_46 [i_10] [(signed char)7] [i_10] [(unsigned char)18] = ((/* implicit */signed char) 3221225472U);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_35 += ((/* implicit */long long int) var_1);
                        arr_53 [i_16] [i_16] [(_Bool)1] [(signed char)10] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0)))))));
                    }
                    var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 2712842696549270556LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_50 [i_15] [i_12] [i_11] [i_10]))))) : (4814881818638552169LL)));
                    var_37 *= ((/* implicit */signed char) (+(((int) arr_44 [i_11] [i_12] [i_11] [i_10]))));
                    var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 954348483)) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (4294966272U)))) : (((((/* implicit */_Bool) -2712842696549270571LL)) ? (var_14) : (((/* implicit */int) var_4))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    var_39 = (+(((((/* implicit */_Bool) -4814881818638552216LL)) ? (4380866641920LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    arr_58 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (-4294967296LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_43 [i_10] [i_11])))))))) || (((/* implicit */_Bool) min((((long long int) 2712842696549270560LL)), (((/* implicit */long long int) (!(((/* implicit */_Bool) -11))))))))));
                    var_40 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_17)), (min((((/* implicit */unsigned char) (signed char)-88)), ((unsigned char)200)))));
                }
                for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)41)), (var_9))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-23)))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) -3542910149707168095LL))));
                        var_45 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((1LL) > (((/* implicit */long long int) arr_48 [i_20] [i_18] [i_12] [i_11])))))) | (((((/* implicit */_Bool) -8363002662197512221LL)) ? (((2162342402873689819LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (max((((/* implicit */long long int) (unsigned short)22072)), (arr_51 [15] [(signed char)0] [i_12] [(signed char)0] [i_12])))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
            {
                for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    for (unsigned char i_23 = 0; i_23 < 21; i_23 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) (unsigned short)4410)), (arr_70 [i_11] [i_21] [i_22] [i_23]))));
                            var_47 = ((/* implicit */unsigned char) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 4294967310LL))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_24 = 0; i_24 < 17; i_24 += 2) 
    {
        var_48 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((int) 4LL)) : (((/* implicit */int) (unsigned short)15373))));
        /* LoopNest 2 */
        for (unsigned short i_25 = 0; i_25 < 17; i_25 += 1) 
        {
            for (int i_26 = 0; i_26 < 17; i_26 += 2) 
            {
                {
                    var_49 ^= ((/* implicit */signed char) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_44 [(unsigned char)4] [i_25] [i_25] [i_24]))));
                    arr_84 [i_25] [i_25] [i_24] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (unsigned char)32))));
                    var_50 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)31)) | (((/* implicit */int) (signed char)40)))) / (((/* implicit */int) var_8))));
                    /* LoopSeq 2 */
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_28 = 0; i_28 < 17; i_28 += 4) 
                        {
                            var_51 *= (signed char)-81;
                            var_52 += ((/* implicit */signed char) var_3);
                        }
                        for (unsigned char i_29 = 0; i_29 < 17; i_29 += 4) 
                        {
                            var_53 ^= ((/* implicit */unsigned char) ((arr_89 [i_29] [i_25]) / (arr_89 [i_24] [i_24])));
                            var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)188))) ? (((((/* implicit */_Bool) arr_59 [i_26])) ? (17732748788308504906ULL) : (((/* implicit */unsigned long long int) arr_76 [i_27] [i_27] [i_29] [i_27] [i_29] [i_29] [i_29])))) : ((-(var_5))))))));
                            arr_94 [i_24] [i_25] [i_26] [i_25] [i_29] = ((/* implicit */unsigned int) var_3);
                            var_55 = ((/* implicit */long long int) (+(arr_38 [i_25])));
                            arr_95 [i_25] [i_25] [2LL] = ((/* implicit */long long int) 1281819415U);
                        }
                        arr_96 [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) arr_59 [i_25]);
                        /* LoopSeq 3 */
                        for (int i_30 = 0; i_30 < 17; i_30 += 3) 
                        {
                            arr_99 [i_24] [i_24] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2712842696549270571LL))));
                            var_56 = ((/* implicit */signed char) 4814881818638552221LL);
                        }
                        for (unsigned short i_31 = 0; i_31 < 17; i_31 += 4) 
                        {
                            arr_103 [i_25] [(signed char)7] = var_13;
                            arr_104 [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */long long int) (signed char)55);
                            var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) (-(-6070063982661541229LL))))));
                        }
                        for (signed char i_32 = 0; i_32 < 17; i_32 += 4) 
                        {
                            var_58 = ((/* implicit */unsigned char) arr_100 [i_24] [i_25] [3LL] [i_27] [i_32]);
                            var_59 *= arr_57 [i_24] [i_26];
                            var_60 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 1073741822LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)-11243))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
                            var_61 += ((/* implicit */_Bool) ((((/* implicit */int) arr_77 [i_24])) / (((/* implicit */int) (unsigned short)63565))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_33 = 0; i_33 < 17; i_33 += 3) 
                        {
                            var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) (-(((3952159398447451830ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                            arr_109 [i_25] [i_27] [i_27] = ((/* implicit */unsigned char) 4201598688U);
                            var_63 ^= (!(((/* implicit */_Bool) 0)));
                        }
                        var_64 = ((/* implicit */long long int) max((var_64), (((((/* implicit */_Bool) ((long long int) (unsigned char)211))) ? (((0LL) | (var_15))) : (var_15)))));
                    }
                    for (long long int i_34 = 0; i_34 < 17; i_34 += 3) 
                    {
                        var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) (signed char)38))));
                        /* LoopSeq 1 */
                        for (unsigned short i_35 = 0; i_35 < 17; i_35 += 1) 
                        {
                            arr_116 [i_25] [i_25] [i_25] = ((/* implicit */unsigned char) (+(3873797380U)));
                            var_66 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17890)) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14)))))));
                            arr_117 [i_24] [i_25] [i_25] [i_26] [i_24] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23139)) && (((/* implicit */_Bool) ((long long int) -1LL)))));
                            var_67 = ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
                            var_68 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_75 [i_24] [i_24] [i_24] [i_24] [i_24])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168))))) : (((/* implicit */int) var_7))));
                        }
                    }
                    var_69 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)9))))));
                }
            } 
        } 
        var_70 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + ((~(arr_100 [i_24] [i_24] [0LL] [i_24] [i_24])))));
    }
    var_71 = var_14;
}
