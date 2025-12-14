/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5989
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-7962)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0]))))))))), (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60)))))) : (arr_1 [5ULL])))));
        var_16 = ((/* implicit */unsigned short) var_10);
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) var_2);
        var_18 = ((/* implicit */_Bool) 1049317680091037494ULL);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                arr_13 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3]))));
                arr_14 [i_2] [i_3] [(unsigned short)0] [(unsigned short)0] = (-(((/* implicit */int) var_11)));
                var_19 = ((((/* implicit */int) ((((/* implicit */int) (short)-14738)) >= (1056424868)))) == (((((/* implicit */int) arr_10 [i_2] [i_2] [i_4])) * (((/* implicit */int) (short)16801)))));
            }
            for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                var_20 = ((/* implicit */_Bool) ((int) var_4));
                arr_17 [i_3] [(short)3] [i_3] = ((/* implicit */unsigned long long int) (signed char)52);
                var_21 = ((/* implicit */long long int) (signed char)-66);
                var_22 = ((/* implicit */_Bool) var_8);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) var_1);
                arr_20 [i_3] [i_3] [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */long long int) (short)17820);
            }
            var_25 = (unsigned char)121;
        }
        var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned char)172)))), (-1782760416)))), (max((804691450U), (((/* implicit */unsigned int) ((unsigned char) 6646636261185989234LL)))))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) arr_5 [i_7 + 1] [i_7 + 1]))))));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            arr_28 [i_8] = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_8 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58680))) : (arr_1 [i_8]))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) var_2))));
            var_28 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) / (673272432)));
            /* LoopSeq 4 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1568830535)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)977))));
                var_30 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((-1530283864) ^ (((/* implicit */int) arr_12 [(_Bool)1] [(short)3] [i_9]))))), (3410533343U))) - (var_6)));
                arr_31 [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) var_7);
                var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_7 + 1] [i_9] [10U])) == (((/* implicit */int) arr_10 [i_7 + 1] [i_9] [(unsigned char)0])))))));
                arr_32 [i_8] [i_7] = ((/* implicit */_Bool) var_0);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_32 = ((/* implicit */short) arr_24 [i_7] [i_8] [(_Bool)1]);
                var_33 = ((/* implicit */unsigned char) ((_Bool) min((var_11), (((/* implicit */short) (_Bool)1)))));
            }
            for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 1) /* same iter space */
            {
                var_34 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)0)), (min((arr_26 [i_7 + 1] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [(unsigned char)9] [i_8])))))))));
                var_35 = (~(((/* implicit */int) (unsigned char)254)));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_36 = ((/* implicit */long long int) var_11);
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_39 [(signed char)10] [i_8] [i_8] [i_11] [i_11] [i_12]))));
                }
                for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_43 [i_13] [i_11 - 3] [i_7] [i_7] = ((/* implicit */short) ((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7 + 1] [(unsigned short)8] [i_11 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_7 + 1] [i_7 + 1] [i_11 - 2])))))));
                    arr_44 [(signed char)5] [i_8] [i_11 + 1] [7] = ((/* implicit */int) ((8015308695102277850LL) / (((((/* implicit */_Bool) (signed char)-9)) ? (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) : (-1422113546598566808LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38605)) ? (3821832431U) : (((/* implicit */unsigned int) -98300890)))))))));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_13)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1804130526)))) ? (((((/* implicit */_Bool) -5966350972797895925LL)) ? (var_3) : (((/* implicit */int) (signed char)-106)))) : (((/* implicit */int) (_Bool)1)))))));
                }
            }
            for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    for (unsigned char i_16 = 1; i_16 < 7; i_16 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (signed char)84)), (arr_46 [i_16 + 1] [i_15] [i_7 + 1] [i_7]))), (((/* implicit */unsigned int) ((int) arr_46 [i_16 + 2] [i_7] [i_7 + 1] [i_7])))));
                            var_40 |= ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)120)))) % ((+(((/* implicit */int) arr_38 [i_14] [i_8] [i_14 - 2] [i_15]))))));
                            var_41 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_7 + 1] [i_15]))))), (min((((/* implicit */unsigned int) (short)-18014)), (arr_46 [i_7 + 1] [i_14 + 1] [i_16 + 2] [i_16 + 4])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 9; i_17 += 1) 
                {
                    for (short i_18 = 3; i_18 < 10; i_18 += 2) 
                    {
                        {
                            var_42 = (unsigned char)255;
                            arr_58 [(signed char)5] [i_8] [i_17] [i_8] [10] [i_8] = ((/* implicit */unsigned short) arr_9 [i_7] [i_7] [i_17 + 2]);
                        }
                    } 
                } 
                var_43 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)14)));
                var_44 = ((((/* implicit */_Bool) -1726753449)) && (((((/* implicit */_Bool) arr_16 [0LL] [i_14 - 3] [i_7 + 1] [i_7 + 1])) && (((/* implicit */_Bool) arr_16 [i_7 + 1] [i_14 - 1] [i_7 + 1] [i_7 + 1])))));
            }
            var_45 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_6)))) ? (((int) (short)28881)) : (((((/* implicit */_Bool) 1666045772)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)141)))))), (((/* implicit */int) (unsigned char)0))));
        }
    }
    var_46 *= ((/* implicit */unsigned short) (unsigned char)12);
    var_47 = ((/* implicit */_Bool) max((((/* implicit */short) var_10)), (max((var_7), (((/* implicit */short) var_10))))));
}
