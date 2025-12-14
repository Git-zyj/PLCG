/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72935
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_19 += ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_18) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)203))))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1])) : (((25165824) & (((/* implicit */int) arr_0 [i_0] [i_1]))))))) : ((~(min((arr_1 [i_0]), (((/* implicit */unsigned int) (short)-27992))))))));
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [18ULL])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [22U])))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24003))) : (arr_1 [i_0])));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_1)))) ? (-8) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -20)) ? (70820686U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20688)))))) || (((/* implicit */_Bool) max((13791226609951576751ULL), (((/* implicit */unsigned long long int) (unsigned char)122))))))))));
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)8), ((signed char)127)))) ? ((+(arr_6 [i_0] [i_0]))) : ((-(1757992984U))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) arr_1 [i_0]);
                        var_27 = ((/* implicit */short) arr_2 [i_0]);
                    }
                } 
            } 
        }
        arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned char)202)))))) + (max((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (625830826935377147ULL))), ((-(16ULL)))))));
        var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_9 [i_0])))), (((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) 9593542561634271703ULL)))))))));
        var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((int) (short)-32752))) ? (625830826935377153ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) (unsigned char)170)))))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_30 = ((/* implicit */_Bool) (~((~(arr_10 [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_6 + 4])))));
            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_8)) * (var_10))) + (((/* implicit */int) (unsigned short)4)))))));
            var_32 = (+(((/* implicit */int) ((_Bool) (signed char)-72))));
            var_33 = ((/* implicit */_Bool) (unsigned short)224);
        }
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (unsigned char)207))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_4)))) + (((((/* implicit */_Bool) (signed char)69)) ? (-62288208) : (((/* implicit */int) arr_14 [i_10] [i_8] [18U] [i_10]))))))) >= ((~(17820913246774174474ULL)))));
                        var_36 = min((arr_22 [i_9 - 2] [i_9 + 1] [i_9 + 1]), (((((/* implicit */int) arr_13 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])) & (((((/* implicit */int) var_4)) & (((/* implicit */int) (short)32759)))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-35)))) ? ((-(-266826324))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -266826311)) ? (((/* implicit */int) (short)-9380)) : (((/* implicit */int) arr_13 [i_6] [i_8] [i_8] [i_10]))))) ? (var_6) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((251658240) < (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                {
                    arr_36 [i_12] [i_12] = min((((/* implicit */unsigned int) (unsigned char)31)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) ^ (15533378585542366208ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 266826311)) ? (-1307342097) : (((/* implicit */int) var_16))))) : ((~(3297297229U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 4; i_14 < 19; i_14 += 1) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (short)-29)))));
                                var_39 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_13 [i_14 - 4] [i_12] [(_Bool)1] [i_15 - 1]))))));
                                var_40 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((266826299), (6)))) && (((((/* implicit */_Bool) (short)32762)) && (((/* implicit */_Bool) 1613542351)))))) && (((/* implicit */_Bool) ((signed char) arr_15 [i_15 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_16 = 2; i_16 < 18; i_16 += 3) 
                    {
                        var_41 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(2927413476U)))) % (max((((/* implicit */unsigned long long int) arr_14 [14LL] [(unsigned short)14] [i_13] [i_16])), (((unsigned long long int) arr_32 [i_11] [(_Bool)1] [i_13]))))));
                        var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) 14)), (3225128549U)));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            arr_52 [i_12] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_12] [i_12] [i_13] [i_12])) ? (((/* implicit */int) arr_14 [i_12] [(_Bool)1] [i_13] [i_17])) : (((/* implicit */int) arr_14 [i_12] [i_12] [i_12] [i_17]))))));
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((arr_4 [i_12] [i_11]) / (var_10))) : (((/* implicit */int) max(((unsigned short)4095), (((/* implicit */unsigned short) var_5)))))))) ? (((/* implicit */int) max(((signed char)106), ((signed char)-22)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11] [i_11])) && ((!(((/* implicit */_Bool) var_5)))))))));
                            var_44 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_51 [i_11]))), (var_14)));
                            var_45 ^= (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || ((!(((/* implicit */_Bool) var_18))))))));
                            var_46 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-40)) + (-26343454))) + (2147483647))) >> (((((arr_40 [i_11] [i_11]) ? (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_13] [(_Bool)1])) : (((/* implicit */int) (unsigned short)57344)))) - (1798)))))) ? ((~(max((((/* implicit */unsigned long long int) (unsigned char)199)), (arr_50 [i_18] [i_18] [(unsigned short)8] [i_13] [(unsigned short)8] [i_12] [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [6U] [6U])))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            var_47 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_13] [i_17] [17ULL]))) : (var_1)))) ? (-3) : (((/* implicit */int) ((((/* implicit */_Bool) (short)24576)) && (((/* implicit */_Bool) (short)32760))))))));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))))) ? (((((/* implicit */_Bool) arr_39 [i_11] [i_12] [i_12] [i_17] [i_19] [i_19])) ? (((/* implicit */int) arr_39 [i_19] [i_13] [i_12] [i_12] [i_12] [i_11])) : (((/* implicit */int) arr_39 [i_17] [i_19] [i_12] [i_12] [i_12] [i_11])))) : ((+((+(arr_45 [i_17] [i_17] [i_13])))))));
                            var_49 ^= ((/* implicit */int) (!(((/* implicit */_Bool) -1870072717))));
                            var_50 = ((/* implicit */long long int) ((_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11] [i_11]))) : (min((((/* implicit */unsigned long long int) (unsigned char)215)), (5442019973601026391ULL))))));
                        }
                        var_51 -= (+(min((arr_51 [i_13]), (((/* implicit */unsigned int) arr_8 [i_11] [i_13] [i_17])))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
        {
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                {
                    var_52 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((+(-518183150)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [i_11] [i_20]))))), ((-(var_11)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        var_53 += (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (18446744073709551615ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)129)))));
                        var_54 += ((/* implicit */_Bool) ((((var_10) + (((1050629750) << (((18ULL) - (17ULL))))))) - ((+((+(((/* implicit */int) var_8))))))));
                        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) arr_54 [i_11] [i_21] [i_11] [i_22] [i_21] [i_11])) : (((/* implicit */int) (unsigned short)12789)))))))));
                        var_56 = ((/* implicit */signed char) max((((var_7) ^ (((/* implicit */unsigned long long int) arr_53 [i_11] [i_20] [i_22])))), (((/* implicit */unsigned long long int) ((arr_53 [i_11] [i_11] [i_11]) > (((/* implicit */unsigned int) var_10)))))));
                        var_57 ^= ((/* implicit */long long int) min(((signed char)-34), (((/* implicit */signed char) var_8))));
                    }
                    for (unsigned char i_23 = 3; i_23 < 19; i_23 += 3) 
                    {
                        arr_66 [i_11] [i_20] [i_21] [i_20] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (+(2160482386U)))) * (16776960ULL))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [8U])), (arr_10 [i_11] [i_20] [i_20] [i_11])))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32759)))))))));
                        var_58 -= ((/* implicit */signed char) ((((/* implicit */_Bool) -595743514)) ? (648199278) : (((/* implicit */int) (unsigned char)211))));
                    }
                }
            } 
        } 
        var_59 = (+(((/* implicit */int) var_13)));
        arr_67 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (min((((/* implicit */unsigned char) var_5)), (arr_0 [i_11] [i_11])))));
        var_60 = ((/* implicit */int) var_16);
    }
    var_61 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) (signed char)80)), (((long long int) 18446744073709551601ULL))))));
}
