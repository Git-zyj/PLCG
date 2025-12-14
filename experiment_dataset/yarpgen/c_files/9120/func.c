/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9120
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) arr_0 [i_0 - 1] [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [(short)4] [i_0] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) arr_8 [i_0 + 1] [i_1 + 1] [i_2] [i_1 + 1]))), (((((/* implicit */_Bool) (short)32767)) ? (8372224U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10066)))))));
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_2]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_7) ? (var_8) : (((/* implicit */unsigned long long int) 5275358496083204299LL))))) ? (((((/* implicit */_Bool) var_15)) ? (18014123631575040ULL) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((unsigned int) 2580621572U))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1181))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1181))))) - (18446744073709551612ULL)));
            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_4] [i_4 - 2])) > (((/* implicit */int) var_4))))), (((signed char) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */long long int) arr_2 [i_4])) : (4675888163348669780LL))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((((/* implicit */_Bool) arr_4 [i_5 + 2] [i_5])) ? (((/* implicit */unsigned long long int) var_15)) : (10233601197133030343ULL));
        arr_19 [i_5] [i_5] = ((/* implicit */int) ((unsigned char) arr_1 [i_5] [i_5]));
        var_22 = ((/* implicit */int) ((unsigned char) 3640646931U));
        var_23 = ((/* implicit */unsigned int) (short)-10087);
    }
    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((signed char) 5749323839801538613LL))), (var_0)));
        var_25 = ((/* implicit */unsigned char) var_12);
        arr_22 [i_6 + 3] [i_6] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_3 [i_6] [i_6 - 2] [i_6])) ? (arr_3 [i_6] [i_6 - 2] [i_6]) : (arr_3 [i_6] [i_6 - 2] [i_6 - 2]))));
        arr_23 [i_6] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)0)), (var_11)))), (min((((/* implicit */long long int) var_4)), (-4675888163348669780LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))));
    }
    for (int i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_7]))));
        var_27 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_7 + 2])) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                for (short i_10 = 3; i_10 < 16; i_10 += 1) 
                {
                    for (short i_11 = 4; i_11 < 18; i_11 += 2) 
                    {
                        {
                            arr_36 [(short)0] [i_10] [0LL] [(unsigned short)19] [i_11] = ((unsigned char) min((max((((/* implicit */long long int) var_10)), (1125899906842624LL))), (((/* implicit */long long int) (short)16352))));
                            arr_37 [i_11] [i_11] [i_9] [(short)12] [i_11 + 2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_9] [i_9] [i_9] [i_8]))));
                            arr_38 [i_8] [i_8] = ((unsigned char) var_6);
                            arr_39 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] = ((/* implicit */long long int) var_16);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_7 + 1]))))) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8])) << (((((/* implicit */int) arr_35 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7])) - (26571)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7] [i_7] [i_8] [i_8]))) : (((((/* implicit */_Bool) -4675888163348669803LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_34 [i_7] [i_7] [i_7] [i_8] [(signed char)14] [i_8]))))))))));
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) var_4);
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) - (((/* implicit */int) (short)1173))))), (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (18446744073709551611ULL))))))));
                var_31 = ((/* implicit */long long int) (short)-15846);
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
            {
                arr_47 [i_13] [i_8] [(signed char)8] [(signed char)8] = ((/* implicit */short) arr_26 [i_13]);
                var_33 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_46 [(unsigned char)14] [(unsigned char)14] [i_13] [i_8])))) | ((+(((/* implicit */int) var_1))))));
            }
        }
        arr_48 [i_7] = ((/* implicit */unsigned short) (short)1184);
    }
    /* LoopSeq 3 */
    for (long long int i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
    {
        arr_51 [(short)4] |= ((/* implicit */long long int) ((short) 1264743256443018415ULL));
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) | (var_6))) <= (((/* implicit */unsigned long long int) ((long long int) 7436500099381101442LL))))))));
        var_35 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_24 [i_14])))));
        arr_52 [10LL] [i_14] = ((/* implicit */signed char) ((unsigned char) (+(var_0))));
    }
    for (long long int i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) var_13);
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (max((((((/* implicit */_Bool) max((-1736911439517644068LL), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_15] [i_15]))) : (arr_31 [i_15] [i_15] [i_15] [i_15]))), (((/* implicit */unsigned long long int) (short)-32743))))));
        arr_55 [i_15] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (unsigned char)8))))) ? (((long long int) (signed char)96)) : (((/* implicit */long long int) (-(((/* implicit */int) var_14))))))))));
    }
    for (long long int i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned short) arr_49 [i_16]);
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) min(((short)10240), (((/* implicit */short) (_Bool)1)))))));
    }
    var_40 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) & (-6963905209808074150LL)));
    var_41 = ((/* implicit */unsigned int) var_12);
    var_42 = var_7;
}
