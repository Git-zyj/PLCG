/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62862
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
    var_14 += ((_Bool) ((((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)46)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-46))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-46), (((/* implicit */signed char) ((_Bool) var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)-47))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14215)) << (((var_13) - (12710253205026860786ULL)))))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 1651828154U))))), ((short)-14227)))))));
    var_16 = ((/* implicit */int) var_13);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) var_11);
        var_18 = ((/* implicit */_Bool) 245327505U);
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
        var_20 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) (signed char)46)));
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (signed char)45))) / ((((_Bool)1) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (short)-14216))))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 7; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2643139137U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-14217))));
                        arr_14 [i_1] [i_2 - 3] [i_1] [i_4] = ((/* implicit */_Bool) (short)14199);
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)-47)) >= (((/* implicit */int) (unsigned short)1939)))))) ? ((~(((((/* implicit */_Bool) (signed char)-46)) ? (1651828154U) : (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3 + 1] [i_4])))))) : (((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (3921630739U)))))))));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2643139137U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_7 [i_3]))))) : (((arr_5 [i_1] [i_1] [i_4]) ^ (((/* implicit */int) (_Bool)1)))))) > ((~(((/* implicit */int) (unsigned char)252))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-14217)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
        arr_15 [i_1] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1]);
        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_5 = 4; i_5 < 10; i_5 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_8))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            arr_21 [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)256))));
            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)26))))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 9; i_8 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    var_30 += ((/* implicit */unsigned short) (_Bool)0);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_31 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */int) (unsigned short)64891)) : (((/* implicit */int) (signed char)26))))) ? (((unsigned int) (short)-14220)) : (4294967287U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)18)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2643139146U)) ? (arr_19 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_1 - 2] [i_8])))))))))));
                        var_32 = ((/* implicit */signed char) (unsigned short)30480);
                        var_33 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_32 [i_1 - 2] [i_8] [i_1])));
                    }
                    var_34 = ((/* implicit */short) arr_19 [i_8] [i_9]);
                    arr_33 [i_1] [i_1] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((2458982668U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1 + 1] [i_8 + 1] [i_9 - 1])))))) && (((((/* implicit */_Bool) arr_22 [i_1 - 2] [i_8 - 1] [i_9 - 2])) && (((/* implicit */_Bool) (signed char)-13))))));
                }
                for (unsigned short i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    arr_36 [i_1] [i_8] [i_1] [i_1] = min((((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)13)) ? (((/* implicit */int) arr_9 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1])) : (1192014434)))), (((unsigned long long int) ((1378231394) / (((/* implicit */int) (_Bool)1))))));
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (signed char)115)), (11472776293065123980ULL)))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2])) * (1651828159U))))));
                }
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_12] [i_1 + 1])) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((int) arr_34 [i_12] [i_12] [i_8 + 2] [i_7] [i_1] [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_1] [i_1] [i_1 - 2])) << (((((/* implicit */int) (unsigned short)25032)) - (25019))))))));
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (_Bool)0))));
                    var_39 *= ((/* implicit */_Bool) arr_28 [i_1] [i_7]);
                    arr_39 [i_8] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30544)) << (((((/* implicit */int) (signed char)63)) - (51)))))), (((((/* implicit */unsigned int) arr_28 [i_8] [i_1 - 1])) / (1398535884U)))));
                }
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_14 = 3; i_14 < 9; i_14 += 4) 
                    {
                        var_40 |= ((/* implicit */signed char) ((unsigned short) max((max((((/* implicit */unsigned int) (unsigned short)30544)), (895993496U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) (short)14215)) - (14213)))))))));
                        arr_45 [i_1] [i_8] [i_8] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */int) arr_40 [i_1] [i_1 - 1] [i_1] [i_1])) <= (((/* implicit */int) (short)(-32767 - 1))))) && (((/* implicit */_Bool) (unsigned short)34991)))))));
                        var_41 = ((/* implicit */unsigned int) (short)-14216);
                        arr_46 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_13] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_8] [i_8]))) : (1765969953U)))) ? (max((922008275U), (((/* implicit */unsigned int) (signed char)-15)))) : (((arr_6 [i_1] [i_7]) << (((((/* implicit */int) (short)(-32767 - 1))) + (32768)))))))) && (((_Bool) (unsigned char)152)));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_42 -= ((/* implicit */unsigned short) var_7);
                        var_43 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_1 - 1] [i_7] [i_8 + 2]))));
                        var_44 *= ((/* implicit */unsigned int) ((((unsigned long long int) (_Bool)1)) << (((var_13) - (12710253205026860754ULL)))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        var_45 -= ((/* implicit */unsigned short) (~(arr_34 [i_16] [i_13 + 1] [i_13 + 1] [i_8 + 2] [i_1 - 1] [i_1 - 1])));
                        var_46 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned short)25044))) > (max((var_12), (((/* implicit */int) arr_30 [i_8] [i_1 - 2]))))));
                    }
                    arr_54 [i_1] [i_1] [i_8] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((unsigned long long int) (unsigned short)25027)) << (((((var_7) ? (var_1) : (((/* implicit */int) (unsigned short)256)))) + (1241718231)))))));
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_47 = (-(((/* implicit */int) (_Bool)0)));
                    var_48 *= ((/* implicit */_Bool) min((min(((unsigned short)34991), (((/* implicit */unsigned short) arr_56 [i_8] [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8])))), (((/* implicit */unsigned short) ((signed char) arr_2 [i_1] [i_8 + 1])))));
                    var_49 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)256)) - (((/* implicit */int) (signed char)5)))) / (min((arr_43 [i_1] [i_1 - 2] [i_8 - 1] [i_8] [i_8] [i_17]), (((/* implicit */int) (unsigned short)40503))))));
                    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_50 [i_1] [i_1] [i_17 - 1] [i_17 - 1] [i_17 - 1])) * (((/* implicit */int) arr_50 [i_1] [i_7] [i_17 - 1] [i_17] [i_17])))))))));
                }
                for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (unsigned short)256)))))));
                    var_52 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)25032)) && (((/* implicit */_Bool) (signed char)46)))) && (((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_18])))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)34992)) <= (((/* implicit */int) arr_26 [i_7] [i_18]))))) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                }
            }
            /* LoopSeq 2 */
            for (signed char i_19 = 3; i_19 < 8; i_19 += 4) 
            {
                arr_64 [i_1] [i_7] [i_19] |= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30544))) : (((((/* implicit */_Bool) (unsigned short)30536)) ? (arr_17 [i_19]) : (arr_6 [i_19] [i_1]))))) / (((/* implicit */unsigned int) (+(var_12))))));
                /* LoopNest 2 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned int i_21 = 3; i_21 < 9; i_21 += 2) 
                    {
                        {
                            arr_72 [i_1] [i_21] = ((/* implicit */unsigned long long int) (!(arr_27 [i_1] [i_21])));
                            arr_73 [i_1] [i_20] [i_19] [i_1] [i_1] |= ((/* implicit */unsigned int) ((int) min(((short)20512), (((/* implicit */short) (signed char)47)))));
                            arr_74 [i_1] [i_21] [i_21] = ((((/* implicit */_Bool) ((unsigned long long int) ((arr_27 [i_1] [i_21]) ? (((/* implicit */int) (signed char)0)) : (var_12))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)40504))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_69 [i_21] [i_7] [i_20] [i_7] [i_7] [i_1] [i_1])))))) + (((1160999472U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) arr_62 [i_1] [i_1] [i_1 + 1] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    var_54 = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_51 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_23])) - (62694)))))));
                    arr_80 [i_1] [i_1] [i_7] [i_22] [i_1] = ((/* implicit */_Bool) 10527741329403727423ULL);
                }
                var_55 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40504)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (short)-18848)) ? (337481528U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34999)))))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)25032))) : (((((/* implicit */int) min(((unsigned short)40504), ((unsigned short)34991)))) / (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)3965))))))));
                var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65526)) ^ (((/* implicit */int) arr_40 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) ((_Bool) 3145562806U))) : (((((/* implicit */int) arr_76 [i_1 + 1] [i_1 - 2] [i_1 + 1])) * (((/* implicit */int) arr_76 [i_1 - 1] [i_1 - 2] [i_1 - 2])))))))));
            }
            arr_81 [i_1] [i_1] |= ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_79 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])) || (((/* implicit */_Bool) arr_79 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2]))))), (((unsigned short) min((((/* implicit */unsigned int) arr_42 [i_1])), (arr_32 [i_1] [i_7] [i_7]))))));
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 11; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                {
                    {
                        var_57 = ((/* implicit */_Bool) min((var_57), (arr_70 [i_1] [i_7] [i_7] [i_1] [i_1])));
                        arr_88 [i_1] [i_7] [i_24] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_77 [i_1] [i_1 + 1]), ((unsigned short)34992)))) ? (((/* implicit */int) ((signed char) ((unsigned char) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((unsigned short) 429265469U)))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_26 = 3; i_26 < 9; i_26 += 2) 
    {
        arr_91 [i_26 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        var_58 -= ((/* implicit */unsigned long long int) 3145562807U);
        arr_92 [i_26] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_48 [i_26 - 3] [i_26 - 3] [i_26] [i_26] [i_26])) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)34963)) ? (1149404490U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30543))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) > (((/* implicit */int) (unsigned short)0)))))))) - (1149404491U)))));
    }
}
