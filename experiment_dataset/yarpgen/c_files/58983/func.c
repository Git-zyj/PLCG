/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58983
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
    var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 7994690462158006990ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_17)), (var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 10452053611551544625ULL);
        arr_3 [i_0] = (+(((4294967286U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)5]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0])))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0]))));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) + (((arr_7 [i_0] [i_1] [i_0]) ? (((/* implicit */int) (unsigned short)51973)) : (-14052365)))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) 10452053611551544610ULL);
                var_22 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_11 [i_2] [i_1] [i_0] [i_0]))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_4 - 1] [(unsigned short)11] [i_4]))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_10 [i_0]))))));
                    var_25 |= ((/* implicit */unsigned short) (-(14857806626185136032ULL)));
                    var_26 = (_Bool)1;
                    arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4] [i_4 + 2] [i_4 - 3] [i_1])) + (((/* implicit */int) arr_4 [i_4 - 3] [i_4 + 1]))));
                }
                var_27 += ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                var_28 &= ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_9 [i_3] [i_1] [i_0])));
            }
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_29 &= ((/* implicit */long long int) 10452053611551544625ULL);
                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10452053611551544625ULL))));
                /* LoopSeq 4 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_31 = ((/* implicit */long long int) 790053905U);
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5])) ? (((1450420385U) | (790053905U))) : (4294967295U)));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_7]))));
                        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
                        var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7994690462158006990ULL)) ? (10452053611551544625ULL) : (((/* implicit */unsigned long long int) -2663262216394319953LL)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10452053611551544625ULL))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_36 = ((_Bool) arr_21 [i_0] [i_5]);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])))))) : (arr_23 [i_0] [i_0])));
                    }
                    var_38 = ((/* implicit */long long int) ((unsigned char) arr_28 [i_0] [i_7] [i_5] [i_0] [i_0] [i_0] [i_0]));
                    var_39 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_10 - 1] [5ULL] [5ULL] [5ULL] [i_5] [16ULL])) | (((/* implicit */int) arr_26 [i_0] [i_10 + 1] [i_10 + 1] [i_10 - 2]))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10452053611551544625ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_0] [i_10 - 1] [i_0]))));
                }
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_39 [i_0] [i_0] [i_5] [i_11] = ((/* implicit */unsigned char) arr_20 [i_5]);
                    arr_40 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) (-(1450420385U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 3; i_12 < 17; i_12 += 4) 
                    {
                        arr_44 [i_5] [i_1] [i_5] [i_5] [i_12] &= ((/* implicit */unsigned int) (!(arr_38 [i_0] [i_0] [i_5] [i_1] [i_1] [i_12])));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_12 - 2] [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_32 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    }
                }
                arr_45 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1360)) >> (((((/* implicit */int) var_3)) - (68)))));
            }
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                arr_48 [i_0] [i_0] [i_13] = ((/* implicit */unsigned int) arr_33 [i_0] [i_1] [13] [i_1] [i_13] [i_1]);
                var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (10452053611551544625ULL) : (18351740861682166109ULL)))) ? (((unsigned long long int) 0U)) : (7994690462158006990ULL)));
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_13] [i_1]))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            arr_52 [i_0] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_14] [i_14] [i_14] [4ULL] [i_14] [(_Bool)1]) ? (10452053611551544625ULL) : (var_14)))) || (((/* implicit */_Bool) arr_24 [i_0] [i_14] [i_0] [i_0] [i_0] [i_0]))));
            var_45 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7994690462158006990ULL))));
            arr_53 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(var_12))) - (((/* implicit */int) var_0))));
        }
        var_46 = ((/* implicit */unsigned int) var_12);
    }
    var_47 = ((/* implicit */_Bool) var_3);
}
