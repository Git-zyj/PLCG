/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99847
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) arr_2 [i_3]);
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)1))));
                        arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_2 [i_0]);
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned int) ((long long int) ((unsigned int) 4U)));
                        var_22 = ((unsigned long long int) arr_4 [i_5] [i_2] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (unsigned short)13542)) : (-110024577)));
                        var_24 = ((/* implicit */_Bool) var_12);
                    }
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_2] [i_2])))))));
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0]));
                        var_27 *= ((/* implicit */unsigned int) var_12);
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_28 ^= ((((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_8] [i_3] [i_8] [i_3] [(signed char)11])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : ((((_Bool)0) ? (-5370020455397901530LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12095))))));
                        var_29 = ((/* implicit */signed char) ((4U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_32 [i_0] [i_0] [i_9] [i_2] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-12))))) ? ((+(var_17))) : (arr_5 [i_2])));
                        arr_33 [i_9] [i_9] [i_2] [i_9] [i_0] = ((/* implicit */unsigned long long int) -6463102051992814002LL);
                        var_30 = ((/* implicit */unsigned short) ((6652211751415155765LL) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3])))));
                    }
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                }
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)29)) != (-2086571297)));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_7)))))));
                var_34 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
            }
            var_35 = ((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned char)255)))) != ((+(((/* implicit */int) (short)7)))));
            arr_34 [i_0] [i_1] = ((/* implicit */short) (+(0U)));
            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        }
        var_37 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) max((var_11), (arr_15 [i_0] [4LL] [i_0] [i_0] [i_0] [i_0])))), (arr_0 [i_0] [11LL]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48924)) ? (2514068593U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_38 [i_10] [i_10] = ((/* implicit */signed char) (-((-((((_Bool)0) ? (((/* implicit */unsigned int) 2035103689)) : (4294967295U)))))));
    }
    for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            arr_45 [i_11] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11] [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) ((-1480480783207163257LL) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [3ULL]))))))) : (var_16)))));
            var_39 = ((/* implicit */long long int) max((var_39), (((((/* implicit */_Bool) (short)0)) ? (((long long int) (+(4294967295U)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) - (4294967273U))))))));
            var_40 -= ((/* implicit */signed char) (-((-(((/* implicit */int) (short)-30650))))));
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (short)-4357))));
        }
        for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            var_42 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11] [i_13] [i_13] [i_13] [i_13] [i_11] [i_11]))) != (var_10))) ? (((/* implicit */int) arr_9 [i_11])) : (((/* implicit */int) (signed char)127))));
            var_43 += ((/* implicit */unsigned short) ((min(((((_Bool)1) && (((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11])))), (((((/* implicit */int) (unsigned short)65260)) < (((/* implicit */int) (unsigned short)6176)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_11] [i_13] [i_13] [i_13] [i_11]))))) : (1192650263U)));
        }
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            var_44 = ((/* implicit */unsigned short) (-(var_10)));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8804))) : (2336015411U))))));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((unsigned short)2047), (((/* implicit */unsigned short) (_Bool)1))))), ((+(min((((/* implicit */unsigned int) arr_26 [8U] [i_17])), (2216208964U))))))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1753425261)) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_61 [i_11] [i_14] [i_15] [i_16] [i_18])))))));
                            arr_62 [(signed char)9] [i_15] [i_14] [i_18] = (((~(min((arr_10 [i_11] [i_14] [i_18]), (((/* implicit */long long int) (short)1505)))))) | (((/* implicit */long long int) arr_44 [i_14])));
                            var_48 = (+((+(((((/* implicit */int) (unsigned char)101)) * (((/* implicit */int) var_13)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            arr_65 [i_14] [i_11] [i_15] [i_16] [i_19] [i_15] [(signed char)1] = ((/* implicit */_Bool) arr_28 [i_15] [i_19] [i_15]);
                            var_49 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2550951888U)))))));
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14] [i_15]))) ^ (((unsigned int) (_Bool)1))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            var_51 = ((/* implicit */long long int) (unsigned short)0);
                            var_52 = ((/* implicit */signed char) arr_5 [(signed char)11]);
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(7057353117394626386LL))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)19726)))))))) ? (2550951888U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_11] [(unsigned short)0])) != (((/* implicit */int) ((unsigned char) (signed char)6)))))))));
                            arr_68 [i_11] [i_14] [i_15] [i_14] [i_11] [i_11] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-1234177814)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((35184372088831LL), (((/* implicit */long long int) arr_4 [i_11] [i_14] [i_15])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_15)))))))));
                            var_54 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                        }
                        arr_69 [i_14] = ((/* implicit */signed char) (+(((unsigned int) ((_Bool) (signed char)-3)))));
                        /* LoopSeq 1 */
                        for (long long int i_21 = 0; i_21 < 13; i_21 += 3) 
                        {
                            var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) (+(((3849741818U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))));
                            arr_72 [i_11] [i_11] [i_15] [(signed char)2] [(signed char)2] [i_14] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_11] [i_14] [i_15] [i_14]))));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_22 = 0; i_22 < 20; i_22 += 3) 
    {
        var_56 = ((/* implicit */unsigned short) ((-428411485709781381LL) * (0LL)));
        arr_75 [i_22] = ((/* implicit */unsigned char) var_5);
    }
    var_57 = ((/* implicit */unsigned short) var_17);
    var_58 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-18485))))), (min((var_9), (var_6)))))));
}
