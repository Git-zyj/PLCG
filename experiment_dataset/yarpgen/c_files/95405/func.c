/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95405
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (max(((short)19276), (((/* implicit */short) var_11))))))))))));
    var_18 *= ((/* implicit */_Bool) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned char) var_1)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (arr_1 [(signed char)10])));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0 - 3]);
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */short) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)3469), (var_15))))) : (4813545781951294349LL)))));
                            arr_20 [i_2] [i_2] [i_3] [i_1] &= ((/* implicit */short) arr_9 [i_1] [i_1] [i_1 - 2]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((5194217136770718811LL), (((/* implicit */long long int) (short)-19259)))))));
                            var_23 ^= ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) var_3);
            var_25 = ((/* implicit */long long int) arr_14 [i_1] [5LL] [i_1 - 1] [(_Bool)1]);
            var_26 = ((/* implicit */unsigned int) min((var_26), (arr_19 [(unsigned short)14] [i_2] [i_2] [i_1] [i_2] [i_2])));
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_27 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_1) ? (-5194217136770718812LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))))))));
                            var_28 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [5ULL] [5ULL]))));
                        }
                        for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned char)80)) - (71)))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) 1048576U)) + (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-5194217136770718812LL)))))))))));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min((17179868672LL), (((/* implicit */long long int) ((unsigned char) (short)19247))))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */long long int) ((var_10) * (var_5)))) : (min((((/* implicit */long long int) (_Bool)1)), (7221935285023059613LL)))))) && (((/* implicit */_Bool) min((var_0), (var_3))))));
                        }
                        arr_35 [i_1] [i_1] [i_6] [i_1 - 1] &= ((/* implicit */unsigned short) var_14);
                        var_33 -= ((/* implicit */short) var_5);
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_16), (var_12))))))), (var_0))))));
            var_35 = ((/* implicit */int) min((var_35), ((+(((/* implicit */int) (unsigned char)6))))));
        }
        for (long long int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) -5194217136770718812LL);
                            arr_45 [i_1] [i_12] [i_14] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_11] [i_1 - 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63839)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */long long int) (short)19238)), (-5194217136770718812LL))) : (((/* implicit */long long int) ((arr_18 [i_1] [i_14] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (arr_10 [i_1 - 2] [i_1 - 2] [7])))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    var_37 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(8642258155742303845LL)))) ? (((/* implicit */int) arr_24 [i_16])) : (((/* implicit */int) var_14))));
                    var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48314))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    arr_50 [14LL] [i_1] [i_11] [i_11] [i_15] [3U] &= ((/* implicit */short) ((((/* implicit */_Bool) 17179868689LL)) ? (((/* implicit */int) arr_34 [15U] [9LL] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_34 [i_15] [6LL] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1 - 2]))));
                }
                for (short i_17 = 3; i_17 < 15; i_17 += 2) /* same iter space */
                {
                    var_39 ^= ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_1 - 2] [i_11] [i_15] [i_15] [i_17]))))) ^ (21980680U));
                    var_40 *= ((/* implicit */short) -17179868649LL);
                }
                for (short i_18 = 3; i_18 < 15; i_18 += 2) /* same iter space */
                {
                    var_41 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)31)) & (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (var_7)))));
                    arr_58 [i_1] [i_11] [i_11] [i_18] [i_15] [i_1] = ((/* implicit */int) (unsigned short)55576);
                    var_42 &= ((/* implicit */_Bool) arr_12 [i_1] [i_1]);
                }
                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) 922440628U))));
            }
            var_44 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(9223372036854775807LL))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_19 = 1; i_19 < 13; i_19 += 2) 
        {
            for (unsigned char i_20 = 2; i_20 < 16; i_20 += 3) 
            {
                for (int i_21 = 1; i_21 < 16; i_21 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_34 [i_19 + 4] [i_19 - 1] [i_19 - 1] [i_19] [i_19] [i_19 + 2] [(unsigned short)7]) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)))))))));
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */_Bool) (short)28016)) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) ^ (17179868672LL)))))))));
                    }
                } 
            } 
        } 
    }
    var_47 = ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */long long int) var_10)) : (var_3)));
}
