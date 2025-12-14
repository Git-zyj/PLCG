/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5502
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
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))));
        var_20 = ((/* implicit */long long int) (_Bool)1);
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)0))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) == ((~(((/* implicit */int) arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) 15543099649829441238ULL);
                    var_22 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_7 [17U] [i_1] [1LL])))), (((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_22 [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_6] [i_6 + 1] [i_5]))));
                    var_23 = ((/* implicit */int) arr_1 [i_4]);
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17501)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) : (-5486128059125449455LL))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (-1121195718))) >= ((~(-709963382)))))) / (((/* implicit */int) var_2))));
                        arr_25 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((6509271422936638580ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (signed char)127))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) ((((((/* implicit */_Bool) (short)24053)) ? (((/* implicit */long long int) 1242654059)) : (7159367504726078353LL))) == (arr_16 [i_4] [i_5]))))));
                        arr_26 [i_7] [(_Bool)1] [i_5] [i_4] = ((/* implicit */long long int) ((((arr_11 [i_6 - 1]) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_5])) ^ (arr_17 [i_4] [(signed char)8])))))) * (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-38)))) + ((-(((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6] [i_6] [(unsigned short)7])) ? (((/* implicit */long long int) 0U)) : (var_10))))));
                        var_28 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)0))))));
                        var_29 = ((/* implicit */short) (signed char)126);
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((long long int) 18446744073709551615ULL)) + ((+(-4347647510422060546LL))))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) != (min((min((((/* implicit */unsigned long long int) var_17)), (5042888770073142525ULL))), (((/* implicit */unsigned long long int) var_1))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 2; i_10 < 10; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */_Bool) (unsigned short)8922);
                            arr_37 [i_10] = ((/* implicit */long long int) (((~(1242654059))) * (((/* implicit */int) (_Bool)0))));
                        }
                    }
                    for (int i_11 = 4; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_11] [i_11 + 2] [i_6 + 1]))))) && (max(((_Bool)0), (arr_8 [i_5] [i_11 + 2] [i_6 + 1])))));
                            var_34 = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned long long int) (short)-15093)), (10054166312876508131ULL))));
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)11))))) : (14185551547271162623ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_4] [i_4] [i_6] [i_11 + 1] [i_12]))))) : (max((max((arr_24 [i_4] [i_4] [(_Bool)1] [i_11 + 2]), (((/* implicit */long long int) (unsigned short)60718)))), (((/* implicit */long long int) var_5))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_36 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5] [i_5])) - (((/* implicit */int) arr_4 [(_Bool)1]))))) ? (((/* implicit */int) (unsigned short)56589)) : (((/* implicit */int) arr_7 [i_6 + 1] [i_5] [i_11 - 3]))))));
                            arr_45 [i_4] [i_5] [i_5] [(unsigned short)7] [i_11] [10U] = (+(min((((/* implicit */long long int) var_16)), (arr_30 [i_6 + 1] [i_6] [i_6 + 1] [i_11]))));
                        }
                        var_37 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)7)) ? (2710332553U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8))))))));
                        arr_46 [i_4] [i_5] [i_6] [i_11] [i_4] = ((/* implicit */unsigned short) ((signed char) ((arr_17 [i_11 + 2] [i_11 - 4]) ^ (((/* implicit */int) arr_1 [i_6 + 1])))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
    {
        arr_51 [i_14] [i_14] = ((/* implicit */long long int) arr_12 [i_14] [i_14] [i_14]);
        arr_52 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((arr_49 [i_14]) + (((/* implicit */int) (unsigned short)27410)))) : (((/* implicit */int) var_14))));
    }
    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
    {
        var_38 = ((/* implicit */unsigned short) 4294967288U);
        var_39 = ((/* implicit */long long int) ((unsigned char) arr_12 [i_15] [i_15] [i_15]));
        var_40 += ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35273))))) ? ((~(((/* implicit */int) (signed char)-108)))) : (((/* implicit */int) arr_7 [i_15] [i_15] [i_15]))))), (max((((/* implicit */unsigned int) (signed char)127)), (3700612011U)))));
        var_41 = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)38108))))));
        var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)19)), (arr_4 [i_15]))))));
    }
    var_43 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), ((-(max((((/* implicit */long long int) var_15)), (1360357817960399846LL)))))));
}
