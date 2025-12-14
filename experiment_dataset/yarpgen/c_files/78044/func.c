/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78044
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((((807809795) >> (((min((var_4), (((/* implicit */unsigned int) var_9)))) - (45832U))))) >> (((((unsigned long long int) ((((/* implicit */_Bool) 1517096224U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) - (1963670616ULL))));
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)15))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 1807820558)) + (1517096235U))))));
                        arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_6 [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [16U] [i_2] [17ULL])) >> (((arr_6 [i_0] [i_1] [3]) - (2225259713U))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 4; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_1] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [10] [i_4 - 4] [i_4 - 1] [i_1])) ? (((/* implicit */int) (unsigned short)51842)) : (((/* implicit */int) arr_10 [i_4] [i_4 - 4] [i_4 - 1] [i_0]))));
                        arr_15 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((arr_17 [i_0] [5U] [(unsigned char)9] [(unsigned char)7] [(unsigned char)3]) << (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)0] [i_1]))) * (17ULL)))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1517096224U)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)16] [i_0] [i_1])) : (((/* implicit */int) var_9))))) != (arr_9 [11])));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-57)) | (564898491))))));
                            var_18 = ((/* implicit */unsigned int) ((arr_3 [i_4 + 2] [i_4 - 2] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 2] [i_4] [(signed char)15] [i_4 - 1] [i_1])))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (1517096231U)));
                            var_20 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_4 - 4] [(_Bool)0]))));
                        }
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 2])) != (((/* implicit */int) (signed char)-56)))))));
                            var_22 = ((/* implicit */long long int) (signed char)-115);
                            arr_23 [i_0] [(unsigned char)6] [i_1] [i_4] = ((/* implicit */int) arr_1 [i_0] [(signed char)14]);
                        }
                        arr_24 [i_1] [i_0] [(unsigned short)2] [16U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_3)))) ? (var_10) : (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_1] [i_1] [i_4]) + (((/* implicit */int) arr_10 [i_4] [i_1] [i_4] [i_4])))))));
                        arr_25 [(unsigned char)10] [i_1] [i_2] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) % (3364230910336116287LL)));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        arr_28 [0ULL] = ((/* implicit */signed char) var_10);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) ((signed char) arr_2 [18LL] [0ULL] [i_8 + 1]));
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2777871071U))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_25 = ((/* implicit */signed char) (-((-(var_11)))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_8])) << (((1517096240U) - (1517096218U)))));
            }
            /* LoopSeq 2 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_8] [13] [i_8 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_21 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1] [18LL])) : (((/* implicit */int) arr_26 [i_8 + 2]))));
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_5 [i_12] [i_10]))));
                var_29 = ((/* implicit */int) ((arr_36 [i_8 - 1] [i_8] [i_8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_12] [i_8])))));
                var_30 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_5))))));
            }
            for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                var_31 = ((/* implicit */_Bool) 2777871049U);
                var_32 = ((/* implicit */signed char) ((_Bool) arr_5 [i_13] [i_13]));
                arr_42 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_0 [i_10])))) & (((/* implicit */int) (signed char)69))));
            }
        }
        for (unsigned char i_14 = 4; i_14 < 11; i_14 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((signed char) ((int) var_9)));
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_4 [18U] [18U]))));
            arr_45 [i_8 - 1] = ((/* implicit */unsigned short) min((9590953300014850181ULL), ((-(((var_5) & (((/* implicit */unsigned long long int) -550278650))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            arr_50 [i_8] [i_8 + 2] [i_8] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned char) var_7)), (arr_10 [i_8] [i_8] [i_8 + 1] [i_15]))));
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
        }
        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_8 + 1] [i_8 + 1])), (((unsigned short) var_11)))))));
    }
    for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
    {
        var_37 = ((/* implicit */signed char) 18097105083209777340ULL);
        var_38 &= arr_52 [i_16];
    }
    var_39 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1517096224U) : (((2777871071U) << (((var_6) - (2399651588U)))))))) | ((+(10162470534619112850ULL)))));
}
