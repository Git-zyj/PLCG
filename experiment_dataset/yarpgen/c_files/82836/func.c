/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82836
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [18LL] = ((/* implicit */_Bool) arr_0 [i_0 + 2]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 += (~(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                    var_15 = ((/* implicit */unsigned short) (-(arr_2 [(unsigned char)7] [i_1])));
                    arr_9 [i_2] [i_1] [i_0 - 2] [(unsigned short)16] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)52523))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((unsigned char) arr_8 [23ULL] [i_0 - 2] [i_0 - 2]));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (_Bool)1);
                        arr_23 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)60363)) ? (6896890433683086969ULL) : (arr_22 [8U] [i_4] [8LL] [8LL] [8U])))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6]))) <= (arr_22 [i_3] [i_4] [5] [(unsigned short)19] [i_3]))))) & (max((11549853640026464617ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
                        var_18 = ((/* implicit */long long int) 6896890433683086977ULL);
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_28 [i_3] [4ULL] [i_4] [(unsigned short)20] [i_5] [(unsigned short)20] [i_7] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) var_9)))));
                            var_19 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (11549853640026464614ULL)))));
                            var_20 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)10)) != (((/* implicit */int) arr_18 [i_3] [i_5] [i_7])))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_3] [17LL]), (((/* implicit */long long int) 17U))))) ? (((/* implicit */int) arr_16 [24ULL] [i_4] [i_4])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (~(1152920405095219200LL)))) : (var_11)));
                            arr_31 [(short)6] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)5924))));
                        }
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max(((!((_Bool)1))), (arr_18 [i_3] [i_4] [22LL])));
                            arr_34 [i_3] [(short)15] [i_5] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((0) <= (((/* implicit */int) arr_24 [i_3])))) ? ((+(((/* implicit */int) arr_24 [i_5])))) : (((var_1) ? (((/* implicit */int) arr_24 [i_3])) : (((/* implicit */int) arr_24 [i_3]))))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_23 ^= ((/* implicit */short) ((((((/* implicit */_Bool) 11549853640026464617ULL)) ? (((((/* implicit */_Bool) (short)5924)) ? (11549853640026464617ULL) : (((/* implicit */unsigned long long int) 177567389U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81)))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -168992043))))))))));
                        }
                    }
                    arr_37 [(_Bool)1] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) (~(((4611686018410610688ULL) ^ (((/* implicit */unsigned long long int) arr_13 [i_4] [i_5]))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1LL)) > (11549853640026464639ULL)));
                }
            } 
        } 
        arr_38 [i_3] [(unsigned char)6] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1215611332)), (3475423076U)))), (7006429569337597558ULL))), (((/* implicit */unsigned long long int) ((5845825153795670367LL) << (((2331723812219673148LL) - (2331723812219673148LL))))))));
        var_26 = ((/* implicit */_Bool) ((-5638720544227004290LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        var_27 = ((/* implicit */long long int) (+(3475423060U)));
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_28 = ((/* implicit */int) var_0);
            var_29 = ((/* implicit */long long int) (unsigned char)27);
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_30 += ((/* implicit */long long int) (~(((/* implicit */int) ((arr_40 [10] [i_12] [i_12]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            var_31 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_29 [i_3] [i_12] [i_3] [i_12] [i_12] [i_12]) <= (arr_29 [(short)9] [21LL] [(unsigned char)0] [i_12] [i_3] [17U]))))));
        }
        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            arr_47 [i_3] [10ULL] = ((/* implicit */unsigned short) 0ULL);
            var_32 = ((((/* implicit */int) ((((/* implicit */long long int) 112133470U)) < ((-(-2561835099395924357LL)))))) >> (((11549853640026464617ULL) - (11549853640026464587ULL))));
            var_33 = ((/* implicit */unsigned char) var_9);
            var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */unsigned int) (~(max((((/* implicit */int) (unsigned short)65530)), (var_9)))))) | (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) arr_15 [4U])))))) : (arr_35 [i_3] [i_13] [i_3] [i_13] [i_3] [8U])))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19188)) ? (arr_43 [i_14] [i_14] [19LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))));
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (+(-1997585829413418427LL))))));
    }
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (short i_16 = 1; i_16 < 19; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32754))));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [(unsigned char)20])) ? (((long long int) (!(((/* implicit */_Bool) arr_52 [i_15]))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    var_39 = ((/* implicit */int) ((unsigned long long int) min((max((var_7), (((/* implicit */int) (short)8309)))), (((/* implicit */int) (!(var_1)))))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) min((var_40), (var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 1) 
    {
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            {
                var_41 = ((/* implicit */_Bool) (((((~(arr_22 [i_19 - 1] [i_19] [i_18] [(unsigned char)19] [4U]))) <= (((((/* implicit */_Bool) arr_11 [i_18])) ? (11842402602924406953ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (((/* implicit */int) (short)-1326)))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_18] [(_Bool)1] [i_18]))) | (11549853640026464622ULL))), (((/* implicit */unsigned long long int) arr_10 [i_19 - 1]))))));
                var_42 = ((/* implicit */unsigned long long int) ((unsigned char) (+((-(((/* implicit */int) (short)-1334)))))));
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(8102447420096569780LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), ((-(4686232843175453892LL)))))) : ((+(((((/* implicit */_Bool) arr_45 [(unsigned char)9] [(short)20])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59362)))))))));
                var_44 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_18 - 1]))) : ((-(1401747838740685420ULL)))))));
            }
        } 
    } 
}
