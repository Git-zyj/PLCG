/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91998
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
    var_10 = ((/* implicit */_Bool) var_8);
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((1396034441437849393LL) ^ (-1396034441437849382LL)))), (((((/* implicit */_Bool) max(((signed char)1), (((/* implicit */signed char) var_9))))) ? (var_5) : (2345592262527670119ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)255)), (140180152U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) max((min((((/* implicit */short) arr_0 [1])), (var_7))), (var_4)))), (((int) (unsigned char)216))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) max((((arr_1 [i_0 - 1]) | (var_8))), (((/* implicit */unsigned long long int) 140180152U))));
                        arr_12 [i_1] [i_1] = ((/* implicit */int) min((max((arr_1 [i_3]), (((/* implicit */unsigned long long int) ((_Bool) var_5))))), (((/* implicit */unsigned long long int) 1396034441437849381LL))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] = ((/* implicit */short) var_9);
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) max((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */int) var_1))))) + (((unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)121)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) > (((/* implicit */unsigned long long int) max((-1396034441437849388LL), (var_2))))))), (max((((/* implicit */unsigned int) (unsigned short)65535)), (max((2918556152U), (1376411143U)))))));
                            var_17 += ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)252));
                            arr_19 [i_5] [i_1] [3ULL] [i_5] [3ULL] [i_5] [i_1] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_9)))))), (min((2835983440897997108ULL), (((/* implicit */unsigned long long int) max((1396034441437849385LL), (((/* implicit */long long int) (short)19003))))))));
                            arr_20 [i_3] [i_1] [0ULL] [i_1] [i_5] [i_1] = ((/* implicit */short) max(((-(((-1396034441437849397LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))))), (min((((/* implicit */long long int) (short)-15186)), (-1396034441437849375LL)))));
                            var_18 = (~(var_8));
                        }
                        var_19 = ((/* implicit */signed char) var_4);
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = (i_1 % 2 == zero) ? (((/* implicit */signed char) (((~(arr_13 [i_0 + 1] [i_0] [i_1] [i_0] [i_0] [i_6]))) >> (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1] [i_2] [i_1])))))) : (((/* implicit */signed char) (((~(arr_13 [i_0 + 1] [i_0] [i_1] [i_0] [i_0] [i_6]))) >> (((((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1] [i_2] [i_1]))) - (100))))));
                        var_21 = ((/* implicit */unsigned char) arr_2 [i_1]);
                    }
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1] [i_7 + 1] [i_0 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_7 + 1] [i_7] [i_1]))) : (1376411143U)));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [6ULL] [i_0] [6ULL] &= ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_2] [i_2]);
                            var_23 = ((/* implicit */unsigned char) 1396034441437849381LL);
                        }
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            arr_34 [i_9] [i_7] [i_1] [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_24 = (~(((/* implicit */int) ((short) arr_17 [i_0] [(unsigned char)7] [i_2] [i_7 + 1]))));
                            arr_35 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1396034441437849381LL)) ? (((unsigned long long int) arr_9 [i_2] [i_2] [i_1])) : (((/* implicit */unsigned long long int) var_2))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_25 ^= ((/* implicit */unsigned char) 1376411143U);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1396034441437849379LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)148))))) : (var_5)));
                            var_27 = ((/* implicit */int) arr_29 [i_2]);
                        }
                    }
                    var_28 &= ((/* implicit */signed char) ((((1376411143U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8990792085294666653ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49415))) : (-1396034441437849364LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)65535)), (1396034441437849406LL)));
                                var_30 = ((/* implicit */int) min((((((/* implicit */_Bool) 2251799813685247ULL)) ? (arr_41 [i_0 - 2] [i_0 + 1] [i_11 + 2] [i_1] [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 - 1] [i_11 - 1] [i_1] [i_0 + 1])))), (((/* implicit */unsigned long long int) ((short) arr_11 [i_0] [i_0 - 2] [i_2] [i_11 + 1] [i_11])))));
                                var_31 = ((/* implicit */short) arr_10 [i_0] [(unsigned short)6] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) arr_16 [i_0] [(unsigned short)6]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_13 = 1; i_13 < 19; i_13 += 1) /* same iter space */
    {
        var_33 ^= ((/* implicit */unsigned int) (_Bool)1);
        var_34 = ((/* implicit */unsigned char) var_2);
        var_35 = arr_43 [i_13] [i_13 + 1];
    }
    /* vectorizable */
    for (signed char i_14 = 1; i_14 < 19; i_14 += 1) /* same iter space */
    {
        arr_47 [i_14] [i_14] = ((/* implicit */_Bool) ((short) arr_43 [i_14] [i_14 + 2]));
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            var_36 = ((/* implicit */unsigned int) ((signed char) var_5));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_37 = ((/* implicit */short) 1396034441437849390LL);
                arr_54 [12LL] [12LL] [i_16] [i_14] = ((/* implicit */long long int) (!(((_Bool) var_7))));
                var_38 = ((/* implicit */unsigned short) var_2);
                var_39 = ((/* implicit */unsigned int) var_6);
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_50 [i_14] [i_14 + 2] [i_14 + 1]) : (((/* implicit */long long int) arr_44 [i_14])))))));
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 1; i_20 < 20; i_20 += 3) 
                        {
                            arr_68 [i_20] [i_18] [i_18] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -561456471)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            var_41 = ((/* implicit */signed char) var_9);
                            var_42 = ((/* implicit */unsigned int) -1396034441437849371LL);
                        }
                        for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
                        {
                            arr_71 [i_14] [i_17] [i_17] [i_18] [i_14] [2ULL] = ((/* implicit */unsigned int) ((long long int) 1396034441437849384LL));
                            var_43 = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                        }
                        arr_72 [i_17] [i_18] [(short)20] [i_19] [(signed char)4] = ((/* implicit */short) var_8);
                    }
                } 
            } 
            arr_73 [i_14] [i_17] = ((/* implicit */unsigned char) arr_51 [i_14 + 1]);
        }
        arr_74 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15185)) ? ((-(-250692193929719090LL))) : (((/* implicit */long long int) (+(262143U))))));
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (short)-15196))));
    }
}
