/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75406
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
    var_18 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1366511232)) ? (7807997534341377300ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (1366511232) : (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((18446744073709551604ULL) + (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        var_19 = ((/* implicit */signed char) ((unsigned int) (short)-29548));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) 886595165))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+((~(max((-886595171), (arr_4 [i_1] [i_1])))))));
        var_21 = ((/* implicit */signed char) ((((arr_5 [i_1]) - (arr_5 [i_1]))) == (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (993483369U) : (1894088671U)))) ? (((((/* implicit */_Bool) -886595165)) ? (993483374U) : (((/* implicit */unsigned int) -1366511232)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) -1366511244)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))) : (max((((/* implicit */int) var_3)), (arr_4 [6U] [i_1]))))) + (((1339376172) / (((/* implicit */int) (unsigned short)8))))));
            var_23 = ((/* implicit */signed char) (short)-29566);
            arr_10 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1339376170)) ? (((/* implicit */int) var_5)) : (-1)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                arr_14 [i_3] = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (arr_12 [i_1] [i_3])))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65069))) : ((~(-8188170251286858748LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_1)))) != (((/* implicit */int) var_2))))))));
                var_24 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [i_1] [i_1] [i_3] [i_1] [i_1]), (((/* implicit */long long int) var_0))))) ? (min((((/* implicit */unsigned int) arr_18 [i_3])), (1894088671U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_7 [i_1]))))))))) ? (((((((/* implicit */int) var_16)) <= (((/* implicit */int) (signed char)-72)))) ? (arr_19 [i_1] [i_2] [i_3] [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (arr_5 [i_5])));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? ((+(min((((/* implicit */int) (_Bool)0)), (-1366511232))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                        }
                    } 
                } 
            }
        }
        for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
        {
            arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 743897445)) || (((/* implicit */_Bool) arr_18 [(short)8]))));
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_4 [i_1] [i_1])) : (arr_5 [(short)9])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_18 [i_7])), (1366511232)))) : (1407674384U))))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 3; i_8 < 8; i_8 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)44)) ? (2887292906U) : (3778689874U)));
                    var_29 = ((/* implicit */unsigned short) var_16);
                    arr_29 [(unsigned short)3] [i_7] [i_6] [11] [i_6] [i_1] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_28 [i_8 - 3] [i_7 - 2] [i_1] [i_1])))), (((/* implicit */int) max(((unsigned short)50264), ((unsigned short)15272))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_32 [i_1] [i_9] [i_1] = var_16;
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((arr_11 [i_9]), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (max((18446744073709551600ULL), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_7 - 2] [i_7])))) : (((((/* implicit */_Bool) (unsigned short)50870)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 516277432U)) ? (((/* implicit */int) (unsigned short)58121)) : (((/* implicit */int) (unsigned short)40693))))) : (min((((/* implicit */unsigned long long int) var_17)), (arr_7 [i_1])))))));
                    var_31 = ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_28 [i_1] [i_1] [i_7 - 2] [i_9])) & (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4070710666U))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_27 [i_1] [i_6] [i_6])) : (((/* implicit */int) var_14)))));
                    var_32 = ((/* implicit */int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (2236561432U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15272)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28687)))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_12 [i_7] [i_9]) == (((/* implicit */unsigned int) ((2147483647) / (((/* implicit */int) arr_28 [i_1] [i_6] [i_7] [i_9])))))))) % (((/* implicit */int) arr_26 [i_1] [i_6] [i_7]))));
                }
            }
            /* vectorizable */
            for (short i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
            {
                var_34 = ((((/* implicit */_Bool) arr_3 [i_10 - 1])) ? (((/* implicit */int) arr_27 [(unsigned short)3] [i_6] [i_1])) : ((+(((/* implicit */int) (signed char)-54)))));
                arr_35 [i_1] [i_6] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10 - 2]))) : (17950467867948394715ULL)));
                var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            arr_36 [i_1] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_6])) : (((/* implicit */int) var_2))))), (((unsigned long long int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -90397057392751630LL)) || (((/* implicit */_Bool) 2236561423U))))) : ((~(((/* implicit */int) arr_30 [i_1] [i_6] [i_1] [i_1] [i_6] [i_1]))))));
        }
    }
    for (int i_11 = 1; i_11 < 23; i_11 += 3) 
    {
        var_36 = ((/* implicit */short) (-(((unsigned int) (+(((/* implicit */int) arr_37 [i_11 + 1])))))));
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            var_37 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1585316135)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_37 [i_12]))))) != (2058405875U))) ? (((arr_38 [i_12]) << (((/* implicit */int) min((arr_39 [i_12] [i_11] [i_11 + 2]), ((signed char)127)))))) : (((/* implicit */unsigned int) 1143629605))));
            var_38 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_37 [i_11 + 2])) : (((/* implicit */int) arr_39 [i_11] [i_11 + 1] [i_12]))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            var_39 = 2236561424U;
            arr_43 [i_11] [i_13] [i_13] = ((/* implicit */signed char) var_13);
        }
        /* LoopSeq 1 */
        for (signed char i_14 = 2; i_14 < 24; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                for (int i_16 = 2; i_16 < 22; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_52 [i_14 - 1] [i_14] [i_14 - 1] [i_16 - 2] [i_14 - 1] [i_16] [i_16])))), (((/* implicit */int) var_5))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_38 [i_14 - 1]), (arr_38 [i_14 - 1])))) ? (((((/* implicit */_Bool) arr_38 [i_14 - 2])) ? (arr_38 [i_14 - 1]) : (arr_38 [i_14 + 1]))) : (arr_38 [i_14 + 1])));
                            var_42 = ((/* implicit */unsigned short) (((_Bool)1) ? (2058405893U) : (2236561424U)));
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */signed char) ((min((((/* implicit */int) ((signed char) arr_52 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] [i_11] [i_14 - 2]))), (((int) arr_44 [i_11] [i_11] [i_14])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11 + 1] [i_11 - 1] [i_14 - 1])) && (((/* implicit */_Bool) -1143629605)))))));
        }
        var_44 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775795LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))));
        var_45 = ((/* implicit */short) ((unsigned long long int) ((arr_42 [i_11 - 1] [i_11]) < (((/* implicit */unsigned long long int) 2008176697)))));
    }
}
