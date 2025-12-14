/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87274
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned char) var_8);
                            var_14 |= -52598718060348209LL;
                            var_15 = ((/* implicit */long long int) (~(arr_6 [i_1 - 3] [i_1 + 1] [i_2] [i_4])));
                        }
                        arr_11 [i_0] [i_2 - 1] [i_1 - 3] [i_0] |= ((/* implicit */signed char) (unsigned char)0);
                    }
                } 
            } 
            var_16 |= ((/* implicit */unsigned char) 4878706257563261464ULL);
            /* LoopSeq 1 */
            for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_1 + 1] [i_6 - 1])) ? (var_2) : (arr_13 [i_5 + 2] [i_1 - 1] [i_6 - 1])));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7] [i_5 + 3] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) (~(arr_0 [i_0] [i_1 + 2])));
                            var_21 = (!(((/* implicit */_Bool) (unsigned short)64512)));
                            var_22 = ((/* implicit */unsigned int) (+(var_7)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_23 = (!(((/* implicit */_Bool) arr_5 [i_11 - 1] [i_11 - 1] [i_11 + 1])));
                            var_24 = ((/* implicit */unsigned char) ((((_Bool) 247815196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((0ULL) & (var_7)))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -247815178)) <= (var_12)));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */_Bool) (unsigned char)155);
            }
            arr_30 [i_1 + 1] = ((/* implicit */short) ((unsigned int) var_3));
        }
        for (unsigned int i_12 = 3; i_12 < 23; i_12 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_14 = 1; i_14 < 23; i_14 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 2; i_15 < 22; i_15 += 3) 
                    {
                        var_27 = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) / (((unsigned int) (signed char)(-127 - 1))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)225)) | (((/* implicit */int) arr_32 [i_0]))))))));
                    }
                    for (long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_43 [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_12 - 2] [i_12 - 3] [i_12 - 3]), (arr_43 [i_16 - 1] [i_16 + 2] [i_16 + 2] [i_12 - 3] [i_12 - 3] [i_12 - 2]))))));
                        arr_44 [i_14] = ((/* implicit */_Bool) arr_43 [i_0] [i_12 - 1] [i_12 - 3] [i_13] [i_14 - 1] [i_16 + 2]);
                    }
                    for (short i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (unsigned short)15430))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (arr_48 [i_14 - 1] [i_12 + 2])));
                        var_32 = ((/* implicit */unsigned char) max((((17042284783660577841ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12 - 3] [i_12 - 1] [i_12 - 3] [i_12 - 2] [i_12 + 1]))))), (((arr_45 [i_14] [i_14 + 2] [i_12 - 2] [i_12 + 2] [i_14]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35058)))))));
                        var_33 |= ((/* implicit */unsigned long long int) min((934110792U), (min((((/* implicit */unsigned int) (unsigned char)254)), ((~(arr_20 [i_17] [i_13] [i_0])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        var_34 = ((((/* implicit */int) ((unsigned char) var_0))) << ((((~(-1009700721))) - (1009700711))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((arr_23 [i_14 - 1] [i_14 + 1] [i_0] [i_14 + 2] [i_0] [i_14 - 1] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14 + 1] [i_14 + 1] [i_0] [i_14 + 1] [i_0] [i_14 - 1] [i_14 + 2]))) : (var_5))))));
                        var_36 ^= ((/* implicit */_Bool) ((unsigned int) (unsigned short)56802));
                        arr_53 [i_13] [i_13] [i_13] [i_0] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_31 [i_0] [i_13] [i_14 + 1])))));
                    }
                    var_37 = ((/* implicit */long long int) ((_Bool) var_0));
                    var_38 |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)81))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned char)16)) : (-247815211)))))))));
                    var_39 = ((/* implicit */unsigned int) arr_38 [i_14 + 1] [i_13] [i_12 - 3] [i_0]);
                }
                for (unsigned long long int i_19 = 2; i_19 < 23; i_19 += 2) 
                {
                    var_40 = ((/* implicit */short) ((unsigned short) (((+(((/* implicit */int) (unsigned char)90)))) * (((/* implicit */int) (unsigned short)64334)))));
                    var_41 ^= ((/* implicit */unsigned char) var_12);
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50100)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))))));
                    var_43 = ((/* implicit */int) arr_38 [i_0] [i_12 - 3] [i_12 - 1] [i_19 - 2]);
                }
                var_44 = ((/* implicit */int) max((3565202719494659089ULL), (((/* implicit */unsigned long long int) 2010748435017784704LL))));
            }
            var_45 = ((/* implicit */int) max((min((((/* implicit */long long int) arr_20 [i_12 + 2] [i_12 + 2] [i_12 - 2])), ((-(-9205273188496299751LL))))), (((/* implicit */long long int) -1215204440))));
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                var_46 ^= ((/* implicit */int) min((((unsigned char) ((_Bool) arr_24 [i_0] [i_12 + 2] [i_12 - 3] [i_20]))), (((/* implicit */unsigned char) ((_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (7059755448694617926LL)))))));
                var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)855)), (0U)))), (((((/* implicit */_Bool) (unsigned short)50106)) ? (-337334694180230001LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))))))));
            }
            arr_60 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52)))))))), ((+(var_11)))));
        }
        var_48 = ((((/* implicit */_Bool) ((unsigned int) -1456293139))) ? (((/* implicit */int) ((unsigned short) min((7717509281852863272LL), (((/* implicit */long long int) 527225098U)))))) : ((-(((/* implicit */int) (unsigned short)59521)))));
        var_49 = ((/* implicit */unsigned int) (+(((4362862139015168ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
    }
    var_50 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((6802210521177165682LL), (((/* implicit */long long int) (_Bool)0))))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U))), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
    var_51 ^= ((/* implicit */short) var_1);
    var_52 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
}
