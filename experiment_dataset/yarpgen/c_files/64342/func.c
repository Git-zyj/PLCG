/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64342
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -82366568144727532LL)) ? (((/* implicit */int) (short)14538)) : (((/* implicit */int) (short)14535)))))) % (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-14532))))) || (((/* implicit */_Bool) -1LL)))))));
    var_15 |= ((/* implicit */signed char) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) var_5);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (arr_0 [i_0] [i_0])))) & (((/* implicit */int) var_2))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) (signed char)14);
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)14535)) : (((/* implicit */int) var_4)))))));
        }
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) /* same iter space */
            {
                var_20 ^= ((/* implicit */long long int) 4238299074896640385ULL);
                arr_11 [i_0] [i_2 + 2] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (unsigned short)37062))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((((/* implicit */_Bool) 529603981)) && (((/* implicit */_Bool) var_2))))))))));
                arr_12 [i_3] [i_3] [i_3] = var_9;
            }
            for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) (short)-17162)) <= (((/* implicit */int) arr_14 [(unsigned char)1] [i_2 - 1] [4ULL] [i_4]))))))));
                var_23 = ((/* implicit */signed char) 407710925);
                var_24 = ((/* implicit */short) arr_5 [i_0] [12ULL] [i_4]);
                var_25 = ((/* implicit */signed char) (unsigned short)29507);
            }
            for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) ((((var_9) ^ (((/* implicit */unsigned long long int) var_8)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28477)))));
                var_27 -= ((((/* implicit */int) (signed char)2)) % (var_6));
                var_28 = ((arr_15 [i_5 - 3] [i_2 - 1] [i_2 - 1] [i_2 + 1]) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))));
            }
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((var_9) == (((/* implicit */unsigned long long int) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((~(var_0))))))));
            /* LoopSeq 3 */
            for (long long int i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_16 [i_2]))))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            arr_27 [i_0] [(_Bool)1] [i_6] [i_7] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))));
                            var_31 = ((/* implicit */unsigned char) (+(14208444998812911227ULL)));
                            var_32 ^= ((/* implicit */int) ((var_8) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28480)) - (((/* implicit */int) arr_9 [i_0] [i_6] [i_6])))))));
                            arr_28 [i_0] [i_2] [i_2] [i_2] [i_7 + 3] [i_8] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) var_8)));
                        }
                    } 
                } 
                arr_29 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((4507484227819207808LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))))))));
                arr_30 [i_0] [(signed char)2] = ((/* implicit */unsigned long long int) ((signed char) var_13));
            }
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                arr_35 [i_0] [i_9] [(signed char)8] &= ((/* implicit */unsigned long long int) ((((var_9) << (((((/* implicit */int) arr_6 [i_0] [(unsigned char)12] [i_9])) - (5931))))) <= (((/* implicit */unsigned long long int) var_8))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 2])) * (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
            }
            for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
            {
                var_34 -= ((/* implicit */unsigned char) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-80)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                arr_38 [i_2] [i_2 - 1] [i_10] [i_10] = ((/* implicit */_Bool) (-((~(var_9)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    arr_41 [i_10] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned char)95)) >= (((/* implicit */int) (unsigned char)235)))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_10))));
                }
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    arr_44 [i_0] [i_0] [i_2] [i_10] [i_10] = ((/* implicit */unsigned char) ((signed char) arr_26 [i_10 + 1] [i_10] [i_2] [0] [7LL] [i_2 + 2] [i_2 + 2]));
                    arr_45 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */int) (short)-32755);
                    var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-1259463802) < (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))));
                    var_37 = ((/* implicit */signed char) (_Bool)1);
                }
                arr_46 [i_10] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) var_11)));
            }
        }
        for (unsigned short i_13 = 1; i_13 < 12; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 1; i_14 < 13; i_14 += 2) 
            {
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 2ULL))))) == (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-33))))));
                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_13)))))));
                var_40 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) >= ((~(var_0)))));
            }
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (~((~(((/* implicit */int) var_1)))))))));
        }
        var_42 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)215))) <= (((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1))))));
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (4132955090825816354LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14546))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)82))))))));
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
    {
        arr_54 [i_15] = ((/* implicit */unsigned char) arr_53 [i_15] [0ULL]);
        /* LoopSeq 3 */
        for (long long int i_16 = 1; i_16 < 21; i_16 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_17 = 1; i_17 < 20; i_17 += 1) 
            {
                arr_60 [i_17] [i_16 - 1] [i_17] = ((/* implicit */short) var_5);
                var_44 = ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) ((signed char) 18446744073709551615ULL))));
                var_45 = ((/* implicit */unsigned long long int) ((var_11) ? (arr_57 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)25096))) >= (var_8)))))));
            }
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                var_46 = var_12;
                var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-75)) & (((/* implicit */int) (short)-21826))));
                var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
                var_49 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
            }
            arr_63 [i_15] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)169))));
            arr_64 [i_16] &= ((/* implicit */unsigned char) (-((+(var_9)))));
        }
        for (long long int i_19 = 1; i_19 < 21; i_19 += 2) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned int) var_12);
            var_51 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_13)))));
        }
        for (long long int i_20 = 1; i_20 < 21; i_20 += 2) /* same iter space */
        {
            var_52 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_53 [i_15] [i_20])) : (1494365594)))));
            arr_69 [i_15] = ((((/* implicit */unsigned long long int) (((_Bool)1) ? (6460268779302910681LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) <= ((~(6105131469793029574ULL))));
        }
        var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) var_10))));
    }
}
