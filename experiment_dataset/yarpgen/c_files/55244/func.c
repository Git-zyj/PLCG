/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55244
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) var_0)), ((-(var_5))))) : (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_15 = (short)0;
            var_16 = ((/* implicit */unsigned short) var_4);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */int) ((short) arr_10 [i_2]));
                var_18 = ((/* implicit */_Bool) (unsigned char)215);
            }
            arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)231)))));
                        arr_19 [i_2] [i_2] = (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_9)))))));
                        var_20 *= ((/* implicit */short) ((unsigned short) 4575657221408423936ULL));
                        var_21 = ((/* implicit */signed char) ((arr_13 [i_5 - 1] [i_2] [i_4] [i_5]) >= (((/* implicit */unsigned long long int) (~(arr_1 [i_5 + 1]))))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (3176364567128909453LL) : (((/* implicit */long long int) arr_1 [i_0]))))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_13)))))));
        /* LoopSeq 4 */
        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            arr_22 [i_0] [i_0] [i_6 + 4] |= ((/* implicit */signed char) arr_0 [i_6] [i_6]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_0] [i_6] [i_7] = (~(1047552U));
                arr_26 [i_0] = ((((/* implicit */int) (unsigned char)58)) <= (((/* implicit */int) arr_6 [i_6 + 1] [i_6 + 1])));
            }
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                arr_30 [i_0] [i_6] [i_8] |= ((/* implicit */_Bool) var_10);
                var_23 = ((/* implicit */long long int) max((arr_5 [i_6] [i_0]), (((/* implicit */unsigned char) ((var_6) < (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))));
            }
            arr_31 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        }
        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) arr_28 [i_9] [i_9] [i_9] [i_9]);
            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_9] [i_0])) ? (max((arr_23 [i_9] [i_9] [i_0] [i_9]), (arr_23 [i_0] [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_9])) ? (((/* implicit */int) (unsigned short)62694)) : (((/* implicit */int) arr_12 [i_9] [i_0] [i_0])))))));
            /* LoopSeq 2 */
            for (short i_10 = 2; i_10 < 20; i_10 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) ((arr_32 [i_0] [i_0]) ^ (((int) arr_12 [i_10] [i_10] [i_10 - 1]))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_10] [i_9] [i_9] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10] [i_9]))) : (arr_11 [i_0] [i_9] [i_10])))) > (min((((/* implicit */long long int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) arr_33 [i_0]))))), (((long long int) 2147483647))))));
            }
            for (int i_11 = 3; i_11 < 20; i_11 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_9] [i_11]))))) || (((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11 - 2] [i_11]))))));
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_3))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((unsigned short) 1352276523));
                            arr_44 [i_12] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */unsigned long long int) var_5)) / (var_6))), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0])))));
                            arr_45 [i_0] [i_12] [i_11] = ((/* implicit */unsigned int) (unsigned char)0);
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_0] [i_9] [i_9] [i_0]))));
        }
        for (signed char i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_0] [i_14] [i_15] [i_14])) != (((/* implicit */int) arr_24 [i_0] [i_14] [i_15]))));
                arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_20 [i_0] [i_0]) : (arr_20 [i_14] [i_15])));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0])) ? (arr_50 [i_0] [i_14] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_53 [i_0] [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) ((int) 3759355187U));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_62 [i_18] [i_16] [i_16] [i_16] [i_16] [i_14] [i_0] = max((max((arr_39 [i_18]), (((/* implicit */long long int) (signed char)-3)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_18]))))));
                            arr_63 [i_0] [i_14] [i_0] [i_17] [i_17] [i_17] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) 2046150886303924629LL)))) ^ (((unsigned long long int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned long long int) -1352276523))));
                            arr_64 [i_0] [i_14] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_11)) - (((unsigned int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_17]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) (~(((int) var_9))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_0] [i_16] [i_16] [i_16] [i_16] [i_0] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (4294966784U)))));
                var_36 = ((/* implicit */long long int) arr_9 [16] [i_14] [i_16]);
                var_37 = arr_34 [i_0] [i_0];
            }
            arr_65 [i_14] [i_14] = ((/* implicit */short) arr_36 [i_0] [i_14] [i_14]);
            /* LoopNest 3 */
            for (short i_19 = 3; i_19 < 20; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_23 [i_21] [i_20] [i_14] [i_14]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (unsigned char)15)))))) : ((-(arr_23 [i_21] [i_14] [i_19] [i_20])))))));
                            arr_75 [i_20] [i_20] [i_20] [i_20] |= ((/* implicit */short) var_6);
                            var_39 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((signed char) arr_37 [i_0] [i_21] [i_19] [i_19]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_21] [i_19 - 2] [i_0] [i_19 - 2])))))) : (arr_39 [i_19 - 3])));
                            arr_76 [i_19] [i_14] [i_19] [i_20] [i_21] [i_21] [i_20] = ((/* implicit */signed char) (~(arr_3 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_22 = 2; i_22 < 20; i_22 += 1) 
        {
            var_40 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_50 [i_0] [i_0] [i_22] [i_22]) << (((((/* implicit */int) var_0)) - (14621))))))));
            /* LoopNest 2 */
            for (unsigned char i_23 = 0; i_23 < 21; i_23 += 1) 
            {
                for (long long int i_24 = 0; i_24 < 21; i_24 += 2) 
                {
                    {
                        arr_87 [i_22] [i_22] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_22 - 1] [i_22 + 1])) & (((/* implicit */int) arr_4 [i_22 - 1] [i_22 + 1]))));
                        arr_88 [i_0] [i_22] [i_23] [i_22] = ((((/* implicit */_Bool) arr_6 [i_22 - 1] [i_22 + 1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_8)) : (arr_39 [i_22 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_22] [i_22 - 2]))));
                        arr_89 [i_22] [i_22] [i_22 - 1] [i_23] [i_24] = ((/* implicit */unsigned long long int) var_5);
                        arr_90 [i_24] [i_22] [i_23] [i_23] [i_22] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16)) ? (2949203877457369781ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_91 [i_24] [i_24] [i_23] [i_23] [i_24] |= ((/* implicit */short) ((((896960819) << (((((/* implicit */int) var_2)) - (21050))))) - (((((/* implicit */int) arr_38 [i_24])) & (arr_43 [i_24] [i_24] [i_23] [i_23] [i_22] [i_22 + 1] [i_0])))));
                    }
                } 
            } 
        }
        arr_92 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(547588069U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_0] [i_0] [(unsigned short)18]))))) : ((+(((/* implicit */int) var_7))))));
    }
}
