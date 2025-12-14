/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8694
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_0] [4ULL] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (max((((/* implicit */int) arr_7 [i_2 - 1] [i_1 + 1] [i_2] [i_3])), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])))))) : (((/* implicit */int) var_2))));
                        var_13 = ((unsigned short) max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_7))));
                        var_14 ^= ((/* implicit */short) max((((arr_1 [i_3] [i_3 + 4]) ? (((/* implicit */int) arr_1 [i_3] [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3] [i_3 + 4])))), (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_1 + 3] [i_2 - 1]), ((unsigned short)65528))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                                var_15 += ((/* implicit */short) ((unsigned short) (_Bool)1));
                            }
                        } 
                    } 
                    var_16 = max((max((arr_8 [i_0] [i_1 + 1]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */long long int) arr_11 [i_2] [i_1] [i_1] [i_0])))))))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_0 [i_6]), (arr_0 [i_6 - 1])))), ((+(((/* implicit */int) arr_0 [i_6]))))));
            arr_22 [(_Bool)1] &= ((/* implicit */unsigned short) min(((+(((arr_0 [i_6]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_6])))))), (min((((((/* implicit */_Bool) 1563352755)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19393)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)117)), (var_5))))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)11869))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((_Bool)1), (var_4))))))) ? (((/* implicit */int) (unsigned short)49922)) : (((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (((/* implicit */int) arr_17 [i_6 + 1])) : (((/* implicit */int) arr_17 [i_6 - 1]))))));
            var_19 = (-(((/* implicit */int) arr_18 [i_7])));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
        {
            arr_25 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_8] [i_8] [i_8]), (((/* implicit */short) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))) : (5076722177580679504LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */int) arr_5 [i_8] [i_8] [i_6])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max(((_Bool)1), (arr_0 [i_6])))) : ((-(((/* implicit */int) arr_11 [i_6] [i_8] [(signed char)6] [i_8])))))) : (((((/* implicit */_Bool) max(((short)19393), ((short)-11869)))) ? (((/* implicit */int) arr_7 [i_8] [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) (short)-20853)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
            var_20 = ((/* implicit */unsigned char) arr_17 [i_6]);
            arr_26 [i_8] [i_8] [i_6] = ((/* implicit */_Bool) ((long long int) max((((((/* implicit */_Bool) arr_5 [i_8] [i_6] [i_6])) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_23 [i_6])))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
        {
            arr_30 [i_9] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)20853)))));
            var_21 = arr_1 [i_9] [i_6];
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned char) (short)-11877);
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)128)), (-8345489493581836605LL)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (max((((/* implicit */long long int) arr_19 [i_6])), (-17LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_11]))))) : (((long long int) (-2147483647 - 1)))));
                /* LoopSeq 3 */
                for (short i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    var_24 ^= ((/* implicit */long long int) max((((unsigned long long int) (unsigned char)128)), (((/* implicit */unsigned long long int) var_1))));
                    var_25 = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)20852)));
                    var_26 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_9 [i_12] [i_12 + 1] [i_11] [i_11] [i_11] [i_11]))))));
                    arr_39 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_6 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (arr_24 [i_6] [i_12]) : (arr_24 [i_10] [i_6]))))))));
                }
                for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)9745)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11867))))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (4294473871709394863LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)15951)))));
                    var_28 = ((/* implicit */unsigned short) ((long long int) max((arr_29 [i_6] [i_6 - 1]), (arr_29 [i_6] [i_6 + 1]))));
                    var_29 *= ((/* implicit */unsigned short) ((((_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_13] [i_11] [i_11] [i_6])))) : (min((((/* implicit */long long int) (_Bool)1)), (arr_34 [i_6] [i_13] [i_11]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_6 - 1] [i_14]) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)11870)))) : (((((/* implicit */_Bool) -5790150441291840025LL)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_11] [i_14] [i_10] [i_10])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_6 + 1] [i_6])), (((((/* implicit */_Bool) arr_18 [i_11])) ? (arr_45 [i_14] [i_11] [i_10] [i_10] [i_6]) : (arr_21 [i_14] [i_14] [i_11])))))));
                    arr_47 [i_14] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_41 [i_14])) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_10] [i_11] [i_10])) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))), ((-(arr_8 [i_14] [i_11])))));
                    var_31 = ((/* implicit */unsigned char) max(((((_Bool)1) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (_Bool)1))))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                }
            }
        }
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (short)-20849)))));
        var_33 = ((/* implicit */long long int) (_Bool)0);
    }
    var_34 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (max((((/* implicit */unsigned long long int) (short)9745)), (var_10))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-9745)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
}
