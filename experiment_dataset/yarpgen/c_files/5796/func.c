/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5796
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_5 [i_1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = (+(((/* implicit */int) (signed char)-1)));
                        var_16 = (signed char)65;
                        arr_12 [19ULL] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(short)20] [i_1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2] [i_1] [i_1] [13U] [i_2 - 1])) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_1] [i_1] [i_2 - 1] [i_2 - 1])))) : (((int) (short)31))));
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12459138218798327486ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_1]))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_18 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (signed char)-72))), (((((/* implicit */_Bool) (short)26151)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (signed char)-69))))));
                        arr_19 [i_1] [i_1] [(signed char)18] = 17189066;
                        arr_20 [i_1] [i_1] [i_0] [i_4] = ((/* implicit */short) -1055257725);
                        var_17 *= ((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [(unsigned short)12] [i_2 + 2]))) >= (var_11)))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */short) ((((/* implicit */int) (signed char)81)) >= (((/* implicit */int) arr_15 [i_4] [i_1] [i_1] [i_0])))))))) / (max((((/* implicit */int) arr_16 [(unsigned short)4] [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)227))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] [i_1] [(unsigned char)4] [i_2] [i_0] = ((/* implicit */_Bool) min(((short)120), (((/* implicit */short) (signed char)77))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)19716)) ? (((/* implicit */int) (unsigned short)42748)) : (((/* implicit */int) (signed char)65)))), ((~(((/* implicit */int) arr_3 [6] [(_Bool)1] [i_2 - 2])))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(short)8] [i_1] [i_6] [(short)8] [i_6])))))))));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) + (6924672157373617267ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [1U] [i_2 - 1] [i_2 - 1])))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        arr_30 [i_0] [(short)13] [i_0] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_14 [i_1]))))));
                        arr_31 [i_0] |= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) 1669399388U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (var_2))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7784)))));
                    }
                    var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_9)) ? (1669399388U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (max((((/* implicit */unsigned short) (signed char)0)), (arr_8 [i_0] [i_0] [i_0] [i_0])))));
                    arr_32 [i_0] [i_2] [i_2] |= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                }
            } 
        } 
        arr_33 [i_0] = arr_27 [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42748)) >> (((((/* implicit */int) (short)-120)) + (132)))));
        var_24 += ((unsigned char) arr_34 [(signed char)10]);
        var_25 += ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)42744))));
    }
    for (short i_9 = 1; i_9 < 24; i_9 += 4) 
    {
        var_26 -= ((/* implicit */signed char) (-(-934897197267235071LL)));
        arr_39 [i_9 + 1] |= ((/* implicit */signed char) arr_37 [i_9]);
    }
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
        {
            arr_45 [i_10] [10ULL] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_28 [i_10] [i_11]), ((unsigned short)22787)))) / (((/* implicit */int) arr_27 [i_11] [i_10]))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 12; i_12 += 2) 
            {
                var_27 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_17 [i_10] [i_11] [i_12] [i_12 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_12 - 1])) ? (((/* implicit */unsigned long long int) arr_42 [(_Bool)1] [i_12 - 1] [i_10])) : (arr_2 [i_12 + 2]))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 4) 
                    {
                        {
                            arr_53 [i_10] |= ((/* implicit */unsigned char) (signed char)-8);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (11522071916335934348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_13 + 1] [i_14] [i_14] [i_14 + 1]))))) : (((/* implicit */int) var_1)))))));
                            var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [3LL] [i_11])) << (((((/* implicit */int) (unsigned short)22787)) - (22777)))))) ? (((/* implicit */int) arr_27 [i_12 - 1] [i_14 - 1])) : (min((862079761), (((/* implicit */int) (unsigned char)249))))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-21324), ((short)-25624))))))) == ((-(((/* implicit */int) arr_28 [i_13 + 1] [i_14 + 2])))))))));
                        }
                    } 
                } 
                arr_54 [i_12] = (-((-(((/* implicit */int) arr_29 [i_12 - 1] [i_12 + 1])))));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    {
                        var_31 = ((/* implicit */int) arr_49 [i_10] [i_11] [i_15] [4]);
                        arr_59 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_57 [i_10] [i_10] [i_15] [i_10]))));
                    }
                } 
            } 
        }
        for (short i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
        {
            var_32 *= ((/* implicit */signed char) arr_51 [i_10] [i_10] [i_10]);
            var_33 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_50 [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (((((/* implicit */_Bool) arr_29 [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_35 [(signed char)10] [i_10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11522071916335934348ULL))))))));
            arr_62 [i_10] [i_17] [11ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28342))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_44 [i_10]) != (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_10])), (var_2)))))))) : (((11522071916335934349ULL) >> (((((/* implicit */int) (short)-19740)) + (19792)))))));
            arr_63 [i_10] [(short)7] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_23 [i_17])) ? (((/* implicit */int) var_13)) : (arr_0 [(short)20] [i_17]))), (((/* implicit */int) arr_10 [i_17] [i_10] [i_10])))))));
            arr_64 [i_10] = ((/* implicit */signed char) ((int) arr_35 [i_10] [i_10]));
        }
        arr_65 [i_10] [i_10] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_57 [i_10] [(unsigned short)1] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (var_9))), (((/* implicit */unsigned long long int) var_11))));
    }
    var_34 = ((/* implicit */_Bool) var_9);
    var_35 = ((/* implicit */unsigned short) var_1);
    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((var_6) - (6147644494618999253ULL)))))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)22804)))))))));
}
