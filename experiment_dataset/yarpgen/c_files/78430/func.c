/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78430
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((arr_3 [i_0]), (arr_3 [i_0]))) ? (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2181500999U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0])), (-6054715272214057066LL)))))))));
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3))))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (min((16777215U), (((/* implicit */unsigned int) (unsigned char)244)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4292893091U)) ? (1495029782) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) ((arr_3 [i_5]) ? (((/* implicit */unsigned long long int) arr_12 [(short)4] [i_3 - 1] [i_3 - 1])) : (arr_13 [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_4])));
                            var_19 = ((/* implicit */unsigned short) arr_3 [i_1]);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) var_2);
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [0LL] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [7LL] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_4 [4]))))) ? (arr_2 [i_1]) : (((((/* implicit */_Bool) arr_0 [(short)8])) ? (((/* implicit */long long int) var_1)) : (var_6))))))));
        }
        for (signed char i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            var_22 = ((/* implicit */short) var_14);
            var_23 = ((/* implicit */short) (~(((var_5) - (((/* implicit */long long int) var_11))))));
            var_24 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_4 [i_6 - 1])))) | (((((-1495029814) + (2147483647))) << (((((((/* implicit */int) var_9)) + (152))) - (26)))))));
        }
        arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned int) arr_1 [i_7] [i_7]);
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [4LL]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-105)) ? (arr_22 [i_9] [i_8]) : (var_7)))), (1086482230117759370ULL)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 15LL)))) | (((((/* implicit */_Bool) -1475952988)) ? (2074213U) : (16777215U)))));
                            arr_34 [i_9] [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */int) ((long long int) (+(2074205U))));
                        }
                        for (int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) arr_3 [i_7]))))))))));
                            arr_37 [i_12] [i_8] [4U] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) % (min((((((/* implicit */long long int) -1227563048)) & (-3729395595868783912LL))), (((/* implicit */long long int) (+(var_1))))))));
                            var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_12] [i_8] [i_8] [i_8] [17])) ? (16777225U) : (4242602504U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_7] [i_10] [i_8] [i_12] [i_10] [(signed char)12])) ? (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) (signed char)77))))) : (min((4278190095U), (((/* implicit */unsigned int) 1227563047))))))) : (((((/* implicit */_Bool) -6054715272214057081LL)) ? (6054715272214057057LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                        {
                            arr_41 [i_13] [i_8] [i_9] [i_9] [i_10] [i_10] [i_13] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -6054715272214057058LL)) : (13619496503866029122ULL))), (((/* implicit */unsigned long long int) max((arr_35 [i_8] [i_8 - 3] [i_8 - 3] [i_8] [i_10]), (arr_35 [17ULL] [17ULL] [i_8 + 1] [i_8] [14ULL]))))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_13] [i_10] [i_9] [i_8] [i_13])) ? (max((max((((/* implicit */unsigned long long int) var_2)), (arr_21 [i_7]))), (((/* implicit */unsigned long long int) max((arr_22 [5U] [i_8]), (((/* implicit */long long int) var_15))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                        {
                            arr_44 [10ULL] [i_14] &= ((/* implicit */long long int) ((arr_25 [i_14]) >= (((/* implicit */unsigned int) arr_38 [i_14] [i_14] [i_9] [i_10] [i_14]))));
                            arr_45 [i_8] = ((/* implicit */short) ((unsigned int) arr_35 [i_7] [i_8] [i_9] [i_8] [i_14]));
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_12)) < (arr_1 [i_8] [i_10]))) ? (((((/* implicit */unsigned int) -309701710)) % (arr_25 [i_8]))) : (((arr_3 [15LL]) ? (arr_25 [i_8]) : (((/* implicit */unsigned int) -1487500542))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) ((-4989601405564644953LL) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_46 [i_7] [i_7] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7]))) / (var_7)))));
    }
    /* LoopSeq 2 */
    for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
    {
        var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_47 [i_15]) : (((/* implicit */unsigned long long int) var_11))))) ? (min((((/* implicit */long long int) var_9)), (arr_48 [i_15] [i_15]))) : (arr_48 [i_15] [i_15])))), (((((/* implicit */_Bool) ((-2550976734465736031LL) + (((/* implicit */long long int) 1487500545))))) ? (((((/* implicit */_Bool) arr_48 [i_15] [i_15])) ? (arr_47 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) var_7))))));
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (~(((max((7366087169301704579ULL), (arr_47 [i_15]))) * (((/* implicit */unsigned long long int) arr_48 [i_15] [i_15])))))))));
        var_34 = ((/* implicit */_Bool) 3292727165U);
        var_35 = ((/* implicit */unsigned long long int) ((((int) arr_49 [i_15])) <= (((arr_49 [i_15]) - (arr_49 [i_15])))));
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((((/* implicit */_Bool) var_13)) ? (((var_15) ? (arr_47 [i_15]) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_15])) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) 10608731876159412571ULL)) ? (arr_49 [(signed char)13]) : (arr_49 [i_15])))))))))));
    }
    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        arr_54 [8LL] = ((/* implicit */signed char) var_0);
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((long long int) 6054715272214057073LL))) ? (((((/* implicit */_Bool) var_12)) ? (arr_51 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [(signed char)15]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (-8673328226316098603LL))))))))))));
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (signed char)0))));
    }
    var_39 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((int) ((var_5) >= (((/* implicit */long long int) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)29)) : (1495029782)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (var_11)))) : (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_40 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
}
