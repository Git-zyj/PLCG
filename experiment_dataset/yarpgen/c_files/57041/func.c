/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57041
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
    var_16 = min((var_11), (((/* implicit */unsigned short) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (-(var_14)));
                        var_17 += ((/* implicit */unsigned short) min((((unsigned int) arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 3])), (min((arr_6 [i_2 + 2] [i_2 + 3] [i_2 + 2]), (arr_6 [i_2 + 3] [i_2 + 3] [i_2 + 2])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((long long int) arr_8 [i_0] [i_0])))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(-5713551157139807444LL))))));
        }
        arr_14 [i_0] [i_0] = ((/* implicit */long long int) (signed char)99);
        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(6813801118669960455ULL)))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)129)), ((short)-18657)))) : (max((((/* implicit */int) arr_1 [10ULL] [i_0])), ((~(((/* implicit */int) (unsigned short)40278))))))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) arr_15 [i_5 + 3] [i_5 + 1]);
        var_21 = ((unsigned short) (!(((/* implicit */_Bool) (-(838168272701151445LL))))));
        arr_19 [i_5] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 13378264674281489394ULL))))));
    }
    for (short i_6 = 3; i_6 < 17; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(unsigned short)4] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-9054542205344355005LL))))))))))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6]))))) & (min((-5970297640923437735LL), (((/* implicit */long long int) (unsigned char)173))))))) && (((/* implicit */_Bool) min(((unsigned short)49020), (arr_21 [i_6] [i_6 - 2]))))));
        }
        for (unsigned short i_8 = 4; i_8 < 16; i_8 += 3) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), ((((+(arr_26 [(unsigned char)8]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8 - 4] [(unsigned short)6]))))))))));
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((5713551157139807443LL) > (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8 - 1] [i_6]))))))));
        }
        arr_29 [(unsigned char)16] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_28 [i_6 + 1] [i_6 + 1] [(signed char)16])) ? (((/* implicit */int) (unsigned short)33991)) : (((/* implicit */int) (unsigned short)55698)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_6 - 1] [i_6 - 1] [(unsigned short)16])), (arr_21 [(unsigned short)10] [i_6 - 3]))))));
        arr_30 [i_6] = ((/* implicit */unsigned short) arr_23 [i_6]);
    }
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 2) 
        {
            var_26 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((unsigned short) (unsigned short)5783)))))));
            var_27 = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_31 [i_9] [i_9])), ((-(((/* implicit */int) (unsigned short)30720)))))), (((/* implicit */int) (unsigned char)185))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (short)-32758)))))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            arr_38 [i_9] = ((/* implicit */unsigned short) (~(max((-4133787018676012377LL), (((/* implicit */long long int) (unsigned short)5578))))));
            var_29 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) arr_34 [i_11] [i_11] [i_9])), (max((-5713551157139807444LL), (((/* implicit */long long int) arr_22 [i_11]))))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (unsigned short i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */short) ((max((((/* implicit */long long int) arr_41 [i_9] [i_12] [i_13 + 2] [i_13])), (-5713551157139807454LL))) % (((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_9] [i_11] [i_13 + 2] [i_13] [i_13] [i_13])))))));
                        arr_44 [i_13] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40061))));
                        var_31 = ((/* implicit */unsigned char) (((+(arr_16 [i_9] [i_12]))) | (arr_16 [i_9] [i_9])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                arr_47 [i_9] [i_9] [i_14] [i_14] = ((/* implicit */short) (+((-(arr_35 [i_11])))));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((12792748197647102164ULL) - (((/* implicit */unsigned long long int) -1379747503686989717LL)))), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (arr_39 [i_9] [i_11] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))))));
            }
            for (unsigned short i_15 = 2; i_15 < 9; i_15 += 2) 
            {
                arr_50 [i_9] [i_15 - 2] = ((/* implicit */short) max(((signed char)82), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)192)))))));
                var_33 = ((/* implicit */short) (unsigned short)21080);
                /* LoopSeq 3 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    var_34 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)40578))))));
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(2873165646U))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        arr_55 [i_17] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)110)))))))), ((~((-(((/* implicit */int) (unsigned short)65534))))))));
                        arr_56 [i_9] [i_9] [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5970297640923437734LL)) ? (32927239U) : (((/* implicit */unsigned int) -1208262833))));
                        var_36 = ((/* implicit */unsigned long long int) (-(arr_40 [i_9] [i_9] [i_15 - 1] [i_16])));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)44456)) / (((/* implicit */int) arr_25 [i_11] [i_17] [i_17]))))))), ((+(arr_54 [i_15 - 2] [i_15 - 2] [i_15 + 3] [i_15 - 2]))))))));
                    }
                    for (long long int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        var_38 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(3192741243U))))));
                        var_39 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1379747503686989692LL)))))));
                        arr_60 [i_9] [i_9] [i_9] [i_16] [i_18] [i_18] = ((/* implicit */unsigned short) (~((~(arr_37 [i_18] [i_18 + 2] [i_18])))));
                        arr_61 [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_18 - 1] = ((/* implicit */short) (-(((min((((/* implicit */unsigned long long int) arr_34 [i_16] [i_9] [i_9])), (6813801118669960439ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) - (((/* implicit */int) (signed char)72)))))))));
                    }
                    arr_62 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (-(((arr_58 [i_9] [i_11] [i_15 + 3] [i_16] [i_9] [i_16] [i_11]) * (arr_58 [i_9] [i_11] [i_15] [i_9] [i_16] [i_16] [i_16])))));
                    var_40 = ((/* implicit */unsigned short) 6813801118669960457ULL);
                }
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 1; i_20 < 10; i_20 += 2) 
                    {
                        var_41 = max((((/* implicit */int) ((unsigned short) arr_32 [i_15 + 2]))), (((((/* implicit */_Bool) arr_32 [i_15 - 1])) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned char)238)))));
                        var_42 = ((/* implicit */long long int) min((var_42), (min(((+(arr_63 [i_11]))), ((+(arr_63 [i_15])))))));
                        var_43 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)21080)))), (((/* implicit */int) (unsigned short)58698))));
                        var_44 = ((/* implicit */unsigned short) (~((-((-(var_1)))))));
                    }
                    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (-((+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)213)), ((unsigned short)0)))))))))));
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)27787), (((/* implicit */unsigned short) arr_49 [i_11] [i_11] [i_15] [i_19]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6129)) ? (((/* implicit */int) (unsigned short)37739)) : (((/* implicit */int) (unsigned short)29200))))))))) * (min((arr_39 [i_9] [i_11] [i_19]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)17573)))))))))));
                }
                for (short i_21 = 4; i_21 < 10; i_21 += 3) 
                {
                    arr_71 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_53 [i_9] [i_11] [i_15 + 2] [i_21])))))))) ? (411075934U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1365230116U)) ? (((/* implicit */int) (unsigned short)30788)) : (((/* implicit */int) (unsigned char)192)))))));
                    var_47 = max(((-(arr_26 [i_11]))), (((/* implicit */long long int) ((((/* implicit */int) (short)-23820)) & (((/* implicit */int) (unsigned short)14405))))));
                    arr_72 [i_9] [i_11] [i_15 + 3] [i_9] [i_21] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_70 [i_21] [i_21] [i_21] [i_21 - 1]))));
                    var_48 |= ((/* implicit */unsigned short) max((arr_39 [i_15] [i_15] [i_15]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_31 [i_9] [i_9]))))), ((~(3883891361U))))))));
                }
            }
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                arr_76 [i_9] [i_11] [i_22] [i_22] &= ((/* implicit */unsigned long long int) (~(arr_67 [i_22] [i_11] [i_9] [i_9] [i_9] [i_11] [i_22])));
                var_49 |= ((/* implicit */signed char) 4294967295U);
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_23 = 2; i_23 < 11; i_23 += 1) 
                {
                    var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (unsigned short)27792))));
                    arr_81 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_23 - 2] [i_23 + 1] [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23 - 2] [i_23 - 1])) + (((/* implicit */int) arr_46 [i_9] [i_9] [i_22] [i_23 - 1]))));
                    arr_82 [i_9] [i_9] [i_11] [i_22] [i_9] [i_23 - 2] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_23 [i_11]))))));
                    arr_83 [i_23] [i_22] [i_11] [i_11] [i_9] [i_9] = ((/* implicit */unsigned short) arr_16 [i_11] [i_11]);
                    arr_84 [i_9] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_57 [i_23 - 2] [i_23 - 2] [i_11] [i_23] [i_11]))));
                }
                for (long long int i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    var_51 ^= ((/* implicit */short) (-((+(((/* implicit */int) (short)9001))))));
                    arr_87 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) max((max((4294967285U), (((/* implicit */unsigned int) arr_69 [i_9] [i_11] [i_24] [i_24])))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)8))))))));
                }
                arr_88 [i_9] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_11]))))), (min((var_0), (max((((/* implicit */unsigned long long int) arr_31 [i_9] [i_9])), (arr_54 [i_9] [i_9] [i_11] [i_22])))))));
            }
        }
        var_52 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (short)-11470)) && (((/* implicit */_Bool) arr_86 [i_9] [i_9] [i_9] [i_9]))))));
        arr_89 [i_9] |= ((/* implicit */short) (-(var_14)));
        /* LoopNest 2 */
        for (long long int i_25 = 1; i_25 < 11; i_25 += 2) 
        {
            for (unsigned char i_26 = 0; i_26 < 12; i_26 += 2) 
            {
                {
                    arr_97 [i_9] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)21080))))), ((~(arr_42 [i_25 + 1] [i_26])))));
                    var_53 = ((/* implicit */short) arr_45 [i_9] [i_9] [i_25] [i_26]);
                }
            } 
        } 
        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(var_15)))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0ULL)) ? (arr_15 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned short)12] [(unsigned short)12]))))))))));
    }
    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 3) /* same iter space */
    {
        var_55 = ((/* implicit */short) max(((+(((/* implicit */int) arr_59 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_27])))), (((/* implicit */int) (unsigned short)21087))));
        arr_100 [(unsigned short)0] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(arr_22 [(unsigned short)6])))) ? ((+(((/* implicit */int) (short)4095)))) : ((~(((/* implicit */int) (unsigned short)22613))))))));
        var_56 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)21080))));
    }
}
