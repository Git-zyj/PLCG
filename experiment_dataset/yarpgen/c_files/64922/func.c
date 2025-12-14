/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64922
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((max((((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_0]) - (arr_8 [i_2] [i_1] [i_0])))), ((~(5120493536543936355LL))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((7545490217253524315ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_1] [i_0]))) : ((-(var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)))) ? (((/* implicit */long long int) ((unsigned int) arr_6 [i_1] [i_1] [i_1] [i_1]))) : ((-(-8251702881570348258LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32890)) ? (144115188074807296LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) 1307900871U)) : (((long long int) 364685361))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned char) (~(((long long int) arr_2 [i_0]))));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((int) var_11));
        var_20 = ((/* implicit */_Bool) (+(5120493536543936348LL)));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_14))));
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [(_Bool)1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [16U]))))) ? (((/* implicit */int) ((arr_0 [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)18])))))) : (((((/* implicit */int) var_12)) << (((/* implicit */int) arr_2 [0ULL]))))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (((((/* implicit */_Bool) 3139886107540851671LL)) ? (((/* implicit */long long int) 4025647935U)) : (-5120493536543936346LL))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned long long int) 2987444643U)) : (arr_0 [i_4])))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) ((((/* implicit */long long int) 4025647935U)) < (-4046910868584998869LL))))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned int) (-(-2062647164)))))))));
            var_26 -= ((/* implicit */int) min(((unsigned short)32888), (((/* implicit */unsigned short) (_Bool)1))));
            var_27 = ((/* implicit */signed char) ((arr_8 [i_6] [i_5] [i_5]) + (((((/* implicit */int) (signed char)-1)) - (arr_8 [i_5] [i_6] [i_5])))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_5] [i_8] [i_7] [i_6] [i_5])))))));
                            var_29 = ((/* implicit */_Bool) (unsigned short)32890);
                        }
                        var_30 = ((/* implicit */unsigned char) max((((((7254804753675719497LL) / (9223372036854775807LL))) / (((/* implicit */long long int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */long long int) arr_6 [i_5] [i_6] [i_7] [i_8]))));
                        var_31 = (-(((/* implicit */int) var_12)));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_32 = arr_17 [i_5];
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                var_33 = ((/* implicit */int) arr_15 [i_5] [i_10]);
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    arr_34 [i_5] [i_10] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */signed char) (((-(arr_7 [i_5] [i_5] [i_11]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)92))))));
                    arr_35 [i_10] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) 2987444619U)) : ((~(7254804753675719497LL)))));
                }
                for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 549755289600ULL)) ? (1130243044U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_42 [i_11] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) var_4);
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_20 [i_5] [i_10] [i_5] [i_14])), ((~(((/* implicit */int) var_12))))))) / ((((_Bool)1) ? (4081594392U) : (2095637818U)))));
                    }
                    for (unsigned int i_15 = 3; i_15 < 19; i_15 += 2) 
                    {
                        var_36 = ((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                        var_37 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? ((~(arr_38 [i_15] [i_13] [i_13] [i_5] [i_11] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_5] [i_5] [i_10] [i_5] [i_5])))))), (((((unsigned long long int) (unsigned short)32914)) & (((/* implicit */unsigned long long int) max((-17), (((/* implicit */int) (signed char)0)))))))));
                        var_38 = ((/* implicit */signed char) var_2);
                        var_39 += ((/* implicit */unsigned char) var_4);
                        var_40 = ((/* implicit */long long int) var_12);
                    }
                    for (int i_16 = 2; i_16 < 19; i_16 += 2) 
                    {
                        var_41 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (5120493536543936342LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34069)))))) ? (max((((/* implicit */long long int) var_8)), (-5120493536543936372LL))) : (min((((/* implicit */long long int) 267386880)), (8796093022207LL))))));
                        arr_48 [i_16] [i_13] [i_10] [i_10] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 5120493536543936365LL)))))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_42 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -5120493536543936378LL)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [i_11]))) : (1726530709828023555LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 4025647934U))) : (((4398046511103ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13598)))))))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (-2147483647 - 1))), (-5120493536543936374LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) : (((((/* implicit */_Bool) arr_28 [i_10] [i_10])) ? (var_4) : (var_4)))));
                        var_44 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_10] [i_5])) ? (269319361U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) arr_4 [i_5])) : (arr_21 [i_5] [i_11] [i_11])))), (4025647907U));
                    }
                    var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_47 [i_5] [i_5] [i_11] [i_5] [i_5])) ? (2889999097858424809LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                }
                /* vectorizable */
                for (unsigned int i_18 = 1; i_18 < 20; i_18 += 3) 
                {
                    var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_51 [i_5]))));
                    var_47 = ((/* implicit */unsigned short) ((arr_41 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]) ? (((/* implicit */int) arr_41 [i_18 - 1] [i_18 + 1] [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) (_Bool)1))));
                    var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_5] [i_5]))));
                }
                var_49 = ((/* implicit */unsigned int) arr_32 [i_11] [i_10] [i_5] [i_5]);
            }
            var_50 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_28 [i_10] [i_10]))))));
        }
        for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
        {
            var_51 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_5] [i_19] [i_5] [i_19]))));
            arr_56 [i_5] [i_19] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((5201071237132990239LL) <= (((/* implicit */long long int) -707624747)))))));
        }
        var_52 = ((/* implicit */_Bool) ((long long int) var_9));
    }
    var_53 = ((/* implicit */short) max((3796823470591386222LL), (((/* implicit */long long int) 1149644846U))));
    /* LoopSeq 2 */
    for (long long int i_20 = 1; i_20 < 13; i_20 += 2) 
    {
        arr_59 [i_20] = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned short)32637))))));
        var_54 = min((((unsigned int) ((((/* implicit */int) var_9)) - (arr_13 [i_20] [i_20])))), (var_3));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_55 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)32645)) ? (-549792614) : (((/* implicit */int) (signed char)5))))))) ? (((/* implicit */unsigned long long int) (~((~(5120493536543936364LL)))))) : (((((/* implicit */_Bool) arr_33 [i_21])) ? (arr_33 [i_21]) : (arr_33 [i_21])))));
        var_56 = ((/* implicit */int) (((-(5120493536543936349LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 5628899837351605506LL)) ? (((/* implicit */int) arr_17 [i_21])) : (((/* implicit */int) arr_36 [i_21] [i_21] [i_21] [i_21] [i_21])))))));
    }
}
