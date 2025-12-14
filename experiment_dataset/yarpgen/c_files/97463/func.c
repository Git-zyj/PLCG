/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97463
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (short)-21831))))) == (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((short) arr_5 [i_1] [i_2]))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_5 [i_0] [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)21856))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) var_8)))))))) & (((((/* implicit */int) (short)21831)) - (((/* implicit */int) (short)28603))))));
                        arr_13 [i_2] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_5))))) ? (((arr_5 [i_0] [i_0]) >> (((-5047794398067859344LL) + (5047794398067859372LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (5047794398067859364LL))))))), (((/* implicit */long long int) ((1125878143U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) (~(-5047794398067859344LL))))))), ((-(2147483647)))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) var_3)) / (((/* implicit */int) var_4)))) != ((-(((/* implicit */int) var_4))))))) * (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-5)), (arr_5 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)10] [(short)10]))))) : (((/* implicit */int) (short)23247))))));
        arr_15 [i_0] = ((/* implicit */int) var_8);
    }
    var_14 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) % (((/* implicit */int) var_7))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_4] = ((/* implicit */short) max((((((/* implicit */int) min((var_9), (var_9)))) ^ (((((/* implicit */int) (unsigned short)63)) | (((/* implicit */int) (signed char)127)))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) (short)32739)) || (((/* implicit */_Bool) (signed char)-110)))))))));
            var_15 = ((/* implicit */_Bool) arr_19 [i_4]);
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_0)))) & (min((((/* implicit */int) (signed char)8)), (1738359941)))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) (short)29029)) : (((/* implicit */int) var_5))))))) : (((((((/* implicit */int) var_4)) < (var_6))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)9)) + (((/* implicit */int) var_9))))) : (min((-5047794398067859355LL), (((/* implicit */long long int) arr_17 [i_4]))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28779)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2681))) : (-5047794398067859340LL)));
            arr_24 [i_6] = ((/* implicit */unsigned int) arr_17 [i_6]);
            arr_25 [i_4] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(short)17])))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (short)2159))))) & ((+(((/* implicit */int) var_0)))))) : (((/* implicit */int) ((arr_22 [i_4]) == (((/* implicit */int) var_9)))))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8 + 1])) ? (((/* implicit */int) arr_16 [i_8 - 1])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_8 + 1])), (var_10)))) : (((/* implicit */int) arr_20 [i_8 - 1]))));
                        arr_30 [i_6] [i_6] [13] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))) == (((/* implicit */int) ((var_6) >= (((/* implicit */int) (short)32764)))))))), (min((min((arr_23 [i_4]), (((/* implicit */long long int) (unsigned short)29666)))), (((/* implicit */long long int) var_7))))));
                        var_19 = ((/* implicit */long long int) min((var_19), ((((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((long long int) ((((/* implicit */_Bool) (unsigned short)20491)) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) var_9)))))))));
                        var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)35869)) : (((/* implicit */int) (_Bool)1)))));
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5047794398067859366LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)35869))))) ? (((arr_27 [(short)14]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_4])) : (((/* implicit */int) var_7))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
    {
        arr_33 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_27 [i_9])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_27 [i_9])) ^ (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (int i_11 = 2; i_11 < 23; i_11 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_22 ^= ((/* implicit */long long int) 1322952901U);
                        arr_41 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */long long int) ((-1080901309) >= (((/* implicit */int) (!(((/* implicit */_Bool) 5047794398067859339LL)))))));
                        var_23 = ((/* implicit */int) ((unsigned int) arr_36 [i_11 - 2]));
                        var_24 = ((/* implicit */signed char) ((short) min(((short)-14885), ((short)14884))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((((((((/* implicit */int) (short)-13211)) == (((/* implicit */int) (unsigned short)65532)))) ? ((-(((/* implicit */int) arr_17 [i_10])))) : (((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */int) (unsigned short)18426)) : (((/* implicit */int) arr_26 [i_13])))))), (((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_16 [i_10])))) & (-1738359942)))));
                        var_26 += ((/* implicit */short) max((82304022U), (((/* implicit */unsigned int) (_Bool)1))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_8))));
                    }
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4212663260U) : (3870390525U)))) ? (((((/* implicit */_Bool) arr_19 [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_9] [i_10] [i_11]))) : (840980122U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1736125542874334601LL)) ? (((/* implicit */int) (_Bool)1)) : (-894003117))))))) ? (min((633277348), ((+(((/* implicit */int) (short)15)))))) : (((((/* implicit */int) ((((/* implicit */int) arr_42 [(unsigned short)0] [i_9] [i_9])) > (((/* implicit */int) var_7))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))))))));
                    var_29 += ((/* implicit */unsigned short) var_7);
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_40 [i_9] [i_9] [i_9] [i_9])), ((signed char)30)))) : (((arr_22 [i_9]) * (((/* implicit */int) var_8))))))) % (((((arr_29 [(short)0] [i_9] [(short)0] [i_10]) * (((/* implicit */unsigned int) 1738359955)))) << (((((/* implicit */int) var_4)) + (28805)))))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_4))) && (((_Bool) arr_43 [i_15] [i_15] [i_15] [(signed char)3] [i_14] [(_Bool)1]))));
            var_32 = 1247835526U;
            arr_50 [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((short) 2894596668U)))) >> (((((7801154169867034293LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (7801154169867034285LL)))));
            arr_51 [i_14] [i_14] &= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)22618)) && (((/* implicit */_Bool) -633277345)))) ? (((((/* implicit */_Bool) arr_39 [i_14] [i_15])) ? (arr_22 [i_14]) : (((/* implicit */int) (short)30573)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_32 [i_14])) : (((/* implicit */int) var_2))))));
        }
        arr_52 [i_14] = ((/* implicit */short) (unsigned short)65535);
        /* LoopNest 2 */
        for (short i_16 = 2; i_16 < 22; i_16 += 2) 
        {
            for (unsigned short i_17 = 4; i_17 < 22; i_17 += 4) 
            {
                {
                    arr_58 [i_17] [i_17] [i_17] [(short)0] = var_0;
                    var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) min(((unsigned short)10265), (((/* implicit */unsigned short) (signed char)-121))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))));
                }
            } 
        } 
    }
}
