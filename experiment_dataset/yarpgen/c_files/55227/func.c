/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55227
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
    var_10 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32750))) | (2058758506U)));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (unsigned short)49648)))) : ((+(var_5)))))) % (var_4)));
    var_12 = ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) (signed char)-106)))), (((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) ? (((((2236208796U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >> (((-1784114686) + (1784114703))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1236587023)) ? (((/* implicit */unsigned long long int) 2058758479U)) : (13248386212797875354ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])) * (((/* implicit */int) arr_5 [i_1 + 2] [i_2])))))));
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                arr_11 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((short) ((arr_8 [i_1 + 1]) >> (((arr_7 [8LL]) - (3470315021704561836LL))))));
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))));
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) (signed char)127)) : (0)))));
                /* LoopSeq 2 */
                for (signed char i_5 = 3; i_5 < 24; i_5 += 1) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned short) arr_9 [i_5 - 1] [i_1])))));
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_4 + 1] [i_1] [14LL])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_6 [(short)11] [i_4]))));
                        var_19 = ((/* implicit */long long int) arr_16 [i_1] [i_1 + 1] [i_4 + 1] [i_5 - 3] [i_5 - 2]);
                        var_20 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 2])) ? (((/* implicit */int) arr_14 [i_1 - 2] [i_2] [i_2] [i_5] [i_6] [i_2])) : (((/* implicit */int) (short)-28928))))) & (var_3));
                        var_21 += ((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_4] [i_4]);
                        arr_20 [i_1] [i_2] [i_2] [i_5] [i_6] = ((signed char) 96045657);
                    }
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) (+(var_5)));
                        var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                        arr_24 [i_2] = ((/* implicit */signed char) arr_21 [i_1]);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13920)) ? (2236208796U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                    for (unsigned short i_8 = 4; i_8 < 23; i_8 += 3) 
                    {
                        var_25 |= ((/* implicit */short) 0);
                        arr_28 [i_1] [i_1] [i_1] [i_4] [i_2] [i_8 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2211948118U)) ? (10902539913865906701ULL) : (((/* implicit */unsigned long long int) 7182937870976124291LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_8] [i_5 - 3])))));
                        arr_29 [i_1] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 2] [i_4 + 1]))) / (var_3)));
                        var_26 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 + 1])) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1])) : (arr_21 [i_8])))) > (5421533004505531559ULL)));
                        var_27 += ((/* implicit */unsigned short) -1236587052);
                    }
                    for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_9] [i_9 + 4] [i_9] [i_9] [i_9 + 4] [i_9 + 3]))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_2] [i_1 - 1] [i_1] [i_4 + 1])) * (((/* implicit */int) arr_16 [i_4] [i_2] [i_4 + 1] [i_5 - 2] [i_9]))));
                    }
                }
                for (signed char i_10 = 2; i_10 < 22; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_6)))));
                    var_31 *= ((/* implicit */short) ((signed char) arr_21 [i_4 + 1]));
                }
                var_32 = ((short) arr_23 [i_4] [i_1] [i_4 + 1] [i_4] [i_4 + 1] [i_1 - 2] [i_1]);
            }
            for (short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_38 [i_1 + 2] [i_2] [i_2] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)60))));
                arr_39 [i_1 - 2] [i_2] = ((/* implicit */unsigned int) arr_33 [i_2] [i_2] [i_11] [i_2]);
            }
            for (unsigned short i_12 = 1; i_12 < 23; i_12 += 4) 
            {
                arr_42 [i_1] [i_2] [i_12 - 1] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2176139383069308774ULL))));
                var_33 = ((/* implicit */unsigned short) arr_33 [(short)24] [(short)24] [(short)24] [i_12 + 2]);
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_7))))))));
                arr_43 [i_1] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */short) ((unsigned long long int) 10LL));
                arr_44 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_12 + 1] [i_1] [i_12 + 1]))));
            }
            arr_45 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_2] [i_2])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_25 [i_1 + 2] [i_1 + 2] [24ULL] [i_1] [i_1])) - (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
            arr_46 [i_2] [i_1] [i_1 - 2] |= ((/* implicit */int) ((((/* implicit */_Bool) 96045669)) ? (((/* implicit */unsigned long long int) arr_21 [i_2])) : (arr_10 [i_1] [i_1] [i_1] [i_2])));
            var_35 = ((/* implicit */unsigned int) arr_10 [i_2] [i_1 + 1] [i_1 - 1] [(short)23]);
        }
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            arr_49 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_25 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1]))));
            arr_50 [i_1] [i_1] [3LL] |= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)233))));
        }
        for (unsigned char i_14 = 1; i_14 < 24; i_14 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 96045661)) ? (-7182937870976124284LL) : (((/* implicit */long long int) 64512)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))))))));
            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1085719575622049135ULL))));
            arr_53 [i_1 - 2] [i_1 + 2] = ((/* implicit */short) ((unsigned long long int) 6985019880092549941LL));
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_1])) || (((/* implicit */_Bool) ((unsigned short) arr_13 [i_1] [i_14 - 1] [i_14] [i_14 + 1])))));
        }
        arr_54 [i_1] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */int) arr_19 [i_1 - 2] [i_1 - 2] [i_1 + 1])) <= (((/* implicit */int) ((signed char) -1236587038)))));
        arr_55 [i_1] [i_1 + 1] = arr_27 [i_1] [i_1 - 2] [i_1 + 1] [i_1] [14U];
    }
    for (int i_15 = 1; i_15 < 9; i_15 += 2) 
    {
        arr_58 [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)204))));
        arr_59 [i_15] = ((/* implicit */_Bool) arr_40 [i_15] [i_15 - 1] [i_15]);
    }
    for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
    {
        arr_62 [i_16] = ((arr_26 [i_16] [i_16] [i_16] [(_Bool)1] [i_16] [i_16] [i_16]) & (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_12 [i_16] [i_16] [i_16] [i_16]), ((_Bool)1)))))));
        var_39 = ((/* implicit */int) var_9);
        var_40 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned int) (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9996))) ^ (18446744073709551607ULL))), (arr_10 [(short)12] [i_16] [i_16] [(short)12])))));
    }
    var_41 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((-7182937870976124291LL), (((/* implicit */long long int) 2009378069))))))))));
}
