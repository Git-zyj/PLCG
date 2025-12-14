/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80427
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
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_19 *= ((/* implicit */signed char) ((min((((((/* implicit */long long int) ((/* implicit */int) (short)126))) / (3722451158266455636LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_12))))))) * (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-92)) == (((/* implicit */int) (_Bool)1))))))))));
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_12)))))) ^ (((long long int) arr_1 [i_0]))))) ? (max((var_11), (((/* implicit */long long int) arr_1 [i_0 - 3])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (((_Bool)0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))) ? (arr_1 [i_0]) : (((/* implicit */int) ((max((arr_1 [i_0 + 2]), (((/* implicit */int) arr_0 [(signed char)18])))) != ((-(((/* implicit */int) (_Bool)0))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0]))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */short) (~(((/* implicit */int) var_15))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)82))))) ? (((int) 140788570U)) : (((/* implicit */int) (signed char)106))));
                            var_24 = ((/* implicit */short) arr_5 [i_0 - 3] [(signed char)21] [i_0 - 1]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_25 = ((/* implicit */short) ((arr_17 [i_0 + 1]) ? (arr_10 [i_6] [i_6] [i_6] [i_0 - 2] [i_0]) : (((/* implicit */int) arr_8 [i_6] [6LL] [i_5] [i_0] [21LL] [i_0]))));
                    var_26 |= (signed char)96;
                }
                /* LoopSeq 4 */
                for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    var_27 ^= ((((/* implicit */int) (_Bool)1)) >> (((3604375273U) - (3604375258U))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    var_29 = ((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_5]);
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_30 = ((((/* implicit */_Bool) (-(arr_10 [(short)17] [i_1] [i_0] [i_8] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5] [(_Bool)1]) < (arr_1 [i_8]))))) : (7510264098046984189LL));
                    var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
                }
                for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    arr_25 [i_1] [i_1] [9LL] [i_9] = ((/* implicit */int) ((long long int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) var_17))))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_4 [22LL]) < (((/* implicit */long long int) arr_11 [i_0] [i_1] [(_Bool)1] [i_5] [i_1]))))) << (((/* implicit */int) (!(arr_18 [i_0] [i_1] [13U] [i_9]))))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 4154178726U))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_7)))) : (arr_14 [i_9])));
                    var_34 *= ((((arr_19 [i_0 + 2] [i_1] [(signed char)22]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(var_3))))));
                }
                for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) (-(-1623024076)));
                    var_36 = ((((/* implicit */int) arr_15 [i_0] [i_0] [i_1])) == ((+(((/* implicit */int) var_9)))));
                    var_37 = ((/* implicit */int) var_1);
                    var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (8994794218241618462LL) : (var_11)))) ? (((/* implicit */int) (signed char)63)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))));
                    var_39 = ((/* implicit */signed char) ((arr_6 [i_5] [(signed char)17]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) : (arr_16 [i_0] [i_1] [i_5] [(_Bool)1])));
                }
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) == (18014398509481983LL))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_6)) : (672276929)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (140788570U))))))));
                            var_41 = ((/* implicit */unsigned int) ((((arr_17 [i_1]) && (arr_6 [i_5] [7LL]))) ? (((/* implicit */long long int) arr_22 [12U] [i_1] [i_0 - 2] [i_11])) : (((((/* implicit */long long int) 4154178726U)) / (var_5)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            arr_40 [i_1] = ((/* implicit */signed char) var_1);
                            arr_41 [(_Bool)1] [i_1] [i_1] [i_13] [i_14] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18899))) != (690592023U))));
                        }
                    } 
                } 
                var_42 &= ((/* implicit */_Bool) ((((/* implicit */int) (short)-32763)) & (((/* implicit */int) (!(arr_29 [i_0 - 1] [22U] [i_0] [i_5]))))));
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_43 -= (((+(max((((/* implicit */unsigned int) arr_5 [i_0] [i_15] [i_15])), (arr_22 [i_0] [i_15] [i_0] [i_15]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))));
            var_44 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_17 [i_0 - 3]))) / ((+(((/* implicit */int) (_Bool)1))))));
        }
        var_45 ^= ((/* implicit */_Bool) ((long long int) min((var_12), (((/* implicit */signed char) min((var_6), (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-12685)) || (((/* implicit */_Bool) arr_22 [i_16] [i_16] [i_16] [i_16]))));
            var_47 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) ^ (var_18))) - (((/* implicit */int) var_4))));
        }
        var_48 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */int) var_4)) & (-1623024058)))) & (max((((/* implicit */long long int) arr_23 [i_16] [(short)16] [i_16] [i_16])), (-3158526483896131358LL))))) <= (((/* implicit */long long int) min((((int) arr_35 [(_Bool)1] [i_16] [(_Bool)1] [10] [i_16] [i_16])), (((/* implicit */int) ((signed char) (signed char)1))))))));
    }
    var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)12693))));
}
