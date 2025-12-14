/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92840
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
    var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (var_11)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_10))));
                    var_22 = ((/* implicit */int) ((unsigned int) (unsigned char)196));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */int) ((((1906522145) == ((+(976479046))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)12)), (637331374)))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_3 [9ULL]))))));
        var_23 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)182))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_17))))) - (((976479046) & (arr_3 [i_3]))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_2)))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_26 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)169))));
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((min((var_7), (var_9))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_3])), (arr_18 [i_5] [i_3])))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
                    arr_20 [5] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) & (arr_10 [(unsigned short)6])))) || (((/* implicit */_Bool) min((arr_10 [i_4]), (((/* implicit */unsigned int) arr_8 [(short)3] [(_Bool)0]))))))))));
                    var_27 = ((arr_15 [i_5] [i_4] [i_3] [i_3]) ? ((((-(1951020919540589761LL))) / (((/* implicit */long long int) min((-1763356987), (((/* implicit */int) (unsigned char)105))))))) : (((/* implicit */long long int) arr_3 [i_3])));
                }
            } 
        } 
    }
    for (short i_6 = 2; i_6 < 21; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)237)))) + (((/* implicit */int) (unsigned char)244))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                var_29 = ((/* implicit */signed char) arr_28 [2] [i_7] [i_7] [8ULL]);
                arr_30 [i_8] [i_8] [23] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)57911)) && (((/* implicit */_Bool) (unsigned char)50))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_6] [i_6])) % (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)186)) - (((/* implicit */int) arr_28 [24] [(short)13] [i_7] [(short)13]))))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)104)) && ((!(arr_29 [(unsigned char)14] [(unsigned short)5])))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) 1412291215);
            }
            var_34 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_32 [(unsigned short)21] [i_7] [i_7])) + (var_0))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    {
                        var_35 |= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_22 [i_11] [i_12]))));
                        var_36 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)145))))));
                        var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_6] [i_6 + 2] [i_6 - 2] [(short)19])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_12] [(short)24])))));
                        arr_42 [i_6] [i_6 + 3] [i_6] [i_6 + 2] [i_6] &= ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))) % (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10717))) : (arr_32 [i_6] [i_7] [(unsigned char)13])))));
                        var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_6] [i_12] [i_12] [i_12] [i_12]))))) && (((/* implicit */_Bool) (short)4095))));
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */short) var_9);
    }
    for (short i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        var_40 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_13] [i_13] [19U] [i_13]))))))) && (((/* implicit */_Bool) var_14))));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            var_41 = ((/* implicit */int) ((signed char) ((((_Bool) arr_35 [(unsigned short)8] [i_14] [i_13] [(_Bool)1] [i_13])) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), (var_1)))))));
            arr_49 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3636567513U)) || (((/* implicit */_Bool) (unsigned char)70))));
            var_42 = arr_38 [(unsigned char)2] [i_14] [i_14] [i_14];
        }
        for (short i_15 = 4; i_15 < 11; i_15 += 4) 
        {
            var_43 = ((/* implicit */signed char) ((max((((/* implicit */long long int) max((((/* implicit */short) var_5)), ((short)1)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) + (8647971372172625469LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_9)))))))));
            var_44 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_39 [(short)11] [i_13] [18LL]), (((/* implicit */long long int) arr_36 [i_13] [i_13] [(_Bool)1] [i_13] [(unsigned short)22]))))) && (((((/* implicit */_Bool) arr_17 [(unsigned char)12] [i_13] [i_15 - 3])) && (((/* implicit */_Bool) arr_44 [i_13])))))) && (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_15]))))))))));
        }
    }
}
