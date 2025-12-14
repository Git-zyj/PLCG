/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99941
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min(((((-(14141818873966196467ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) (unsigned short)9429)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)56107)) - (56089)))))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56107)))))));
    var_15 -= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))));
        arr_3 [i_0] &= ((/* implicit */signed char) ((((var_7) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6331)) && (((/* implicit */_Bool) var_6)))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (18446744073709551594ULL)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17444)) < (((/* implicit */int) arr_1 [10ULL]))));
        var_16 -= ((/* implicit */unsigned short) (((-(arr_0 [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) var_11))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (signed char)-124))));
                arr_11 [i_3] [i_2] [i_3] = arr_10 [i_3];
                arr_12 [(_Bool)1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) arr_1 [9ULL]);
                            arr_20 [i_3] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_4] [i_1] [i_2] [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9444))) : (arr_5 [i_1] [i_1])))) : (((unsigned long long int) var_11))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (signed char i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22611)) <= (((/* implicit */int) ((unsigned short) arr_16 [i_1] [0U] [i_2] [i_6] [i_2] [i_7] [i_6])))));
                            arr_27 [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned short) arr_25 [(unsigned short)4] [(unsigned short)4] [i_7] [i_7] [i_3] [i_7] [i_7 - 2]));
                            var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) || (((((/* implicit */_Bool) var_9)) || ((_Bool)0)))));
                            var_20 = ((/* implicit */unsigned short) (~(arr_4 [i_7 + 1])));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)53))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((14006934043893514165ULL) >> (((4883219072625063099ULL) - (4883219072625063079ULL)))))));
            }
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)234)) < (((/* implicit */int) (unsigned char)255))))))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [i_11] [i_10] [i_9] [i_2] [i_1])) * (21ULL)));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)61099))));
            var_26 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1751))) >= (arr_18 [i_1] [i_1] [i_2] [i_2] [i_1]));
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_44 [i_1] [i_1] [i_13] [i_13] = ((/* implicit */signed char) var_4);
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (unsigned char i_14 = 4; i_14 < 8; i_14 += 2) 
    {
        arr_47 [i_14] = ((/* implicit */signed char) arr_40 [i_14] [i_14]);
        arr_48 [i_14] = ((/* implicit */unsigned long long int) arr_23 [(unsigned short)4] [i_14] [i_14] [i_14]);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)9429)) >= (((/* implicit */int) (unsigned short)6906)))))));
    }
    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_16 = 1; i_16 < 18; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_19 = 4; i_19 < 18; i_19 += 1) 
                        {
                            arr_63 [i_16] [i_16 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_58 [i_15] [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)14265)) : (((/* implicit */int) var_6))))))) ? (min((max((((/* implicit */unsigned int) (signed char)49)), (2319733855U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_29 = ((/* implicit */long long int) (((((-(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_1 [i_18])))))) + (2147483647))) >> ((((~((-(((/* implicit */int) arr_59 [i_15] [i_15] [i_17] [i_15] [i_15] [i_15])))))) - (89)))));
                        }
                        for (signed char i_20 = 2; i_20 < 19; i_20 += 4) /* same iter space */
                        {
                            var_30 ^= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_20 - 2] [i_20 + 2] [i_20 + 1]))))));
                            var_31 = ((/* implicit */signed char) 34ULL);
                        }
                        for (signed char i_21 = 2; i_21 < 19; i_21 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */_Bool) (signed char)-53);
                            var_33 = ((/* implicit */unsigned int) var_8);
                        }
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))) != (min((var_5), (((/* implicit */long long int) var_4)))))))));
                    }
                } 
            } 
            var_35 *= ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 3 */
            for (long long int i_22 = 2; i_22 < 20; i_22 += 3) 
            {
                for (unsigned char i_23 = 1; i_23 < 19; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 21; i_24 += 3) 
                    {
                        {
                            arr_76 [i_16] [i_23] [i_22] [(_Bool)1] [i_16] [i_16] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_51 [i_16]))))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_66 [i_15] [i_16] [i_22] [i_23] [i_24] [i_22]), (var_7)))))) ? (((/* implicit */int) arr_57 [i_23] [i_23 + 2] [i_22 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)51452)) != (((/* implicit */int) (unsigned short)56107)))))));
                            var_37 -= ((/* implicit */unsigned int) var_10);
                            arr_77 [i_15] [i_16] [i_16] [i_15] [i_22] [i_16] [(unsigned short)10] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_66 [i_15] [i_16] [(_Bool)1] [i_16 - 1] [i_24] [i_22])) ? (((/* implicit */int) arr_70 [i_16 - 1] [i_16 + 2] [i_22 - 1] [i_16])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)14269))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_25 = 1; i_25 < 20; i_25 += 4) 
        {
            var_38 = ((arr_49 [i_25 - 1]) ? (arr_79 [i_25 - 1] [i_25 + 1] [i_25 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [i_25 + 1] [i_25 + 1] [i_25 - 1] [i_25])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)61099)))))));
        }
        for (signed char i_26 = 1; i_26 < 19; i_26 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_27 = 3; i_27 < 18; i_27 += 2) 
            {
                arr_87 [i_15] [i_26 - 1] [i_15] = var_2;
                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_7)))) > ((+(14006934043893514158ULL)))))))))));
            }
            var_41 *= ((/* implicit */unsigned char) var_11);
        }
        var_42 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) arr_62 [i_15] [i_15] [i_15] [i_15] [i_15]))))), (-4021905719179740938LL)));
    }
}
