/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93857
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)75)))), ((~(((/* implicit */int) min(((short)4064), ((short)-4065)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_16 |= ((/* implicit */_Bool) ((((unsigned long long int) arr_3 [i_2])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4066)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)2]))) : (-8912202643683630550LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4066))))) : ((+(((/* implicit */int) (signed char)-67)))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((long long int) (signed char)112)), (((/* implicit */long long int) (-((+(((/* implicit */int) var_4)))))))));
                        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)-4))))) & (1759117375U)))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (short)3232))))) & (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-72)) * (((/* implicit */int) (unsigned char)41))))), ((~(1245201964646909861LL)))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0]))))) | (((var_1) ? (arr_6 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (min((((/* implicit */unsigned long long int) (~(var_11)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (arr_7 [i_0] [i_0] [i_0] [i_2]))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((((/* implicit */_Bool) max(((short)4054), (((/* implicit */short) arr_3 [i_0]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24812)) & (((/* implicit */int) var_12))))));
        var_21 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)10)))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1245201964646909861LL)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (955857207U))) - (955857183U)))));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_12 [i_4] [i_4])))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            var_23 += ((max((((/* implicit */long long int) (signed char)24)), (arr_2 [i_4]))) / (max((arr_2 [i_4]), (arr_2 [i_4]))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_24 += ((/* implicit */unsigned int) var_7);
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16256)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32350))) : (-7499176169927645399LL))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            var_26 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 24ULL)) ? (arr_4 [i_4] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) <= (4143795673381568350LL)));
            var_27 = ((/* implicit */signed char) ((int) arr_9 [(unsigned char)8] [i_4] [(unsigned char)18] [i_8] [i_4]));
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_1))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        {
                            arr_36 [i_4] [i_12] |= ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */_Bool) (short)32349)) && (((/* implicit */_Bool) 1770499102248903265ULL))))))), (((((/* implicit */int) (signed char)58)) & (((/* implicit */int) (_Bool)1))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((signed char) arr_19 [i_9])))));
                        }
                    } 
                } 
                var_30 += (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-58))))));
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)21169)) : (var_6)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967295U)), (8912202643683630549LL)))) : (arr_6 [i_10]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)185)))))))));
            }
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (-(-4862074036386302002LL))))));
                var_33 = ((/* implicit */signed char) (~(arr_13 [i_9] [i_13])));
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_21 [i_9] [i_14] [(_Bool)1] [i_9] [(_Bool)1])) : (var_11))));
                    var_35 |= ((/* implicit */short) ((unsigned long long int) var_14));
                    var_36 = ((/* implicit */long long int) var_5);
                }
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_52 [i_4] [i_9] [i_4] [i_16] [i_17] [i_9] = ((/* implicit */unsigned int) 0);
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_6)) == (1447088388U)));
                        arr_53 [i_4] [i_9] [i_14] [(short)8] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_15 [i_9] [i_9] [i_9])) : (var_6)));
                        arr_54 [(signed char)14] [(signed char)14] [i_9] [(unsigned char)0] [i_14] [i_9] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-4862074036386301996LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_39 |= (unsigned char)183;
                    }
                    var_40 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                }
                var_41 *= ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-104));
            }
            var_42 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) -2184008945728670460LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_24 [i_4])), (arr_45 [i_4] [i_4] [i_9] [i_9] [i_9] [i_9]))))) : (arr_16 [i_9]))));
            arr_55 [16ULL] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (469435292U)));
            var_43 = ((/* implicit */unsigned long long int) var_6);
        }
        var_44 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (min((arr_19 [i_4]), (((/* implicit */long long int) (unsigned char)115)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4])))))), (min((18ULL), (((/* implicit */unsigned long long int) var_2))))));
        var_45 = ((/* implicit */unsigned int) min((arr_7 [i_4] [(_Bool)1] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4]))));
        var_46 = ((/* implicit */unsigned char) var_7);
    }
    var_47 = ((/* implicit */unsigned long long int) ((unsigned int) max((((6704040906306014414LL) >> (((((/* implicit */int) var_4)) - (119))))), (var_0))));
}
