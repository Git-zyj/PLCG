/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56516
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
    var_20 -= ((/* implicit */short) ((((/* implicit */int) var_13)) / (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) (short)28964)))) : (((((/* implicit */_Bool) var_19)) ? (var_16) : (-78408460)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26538)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))))));
            arr_7 [i_0] = ((((/* implicit */_Bool) -78408460)) && (((/* implicit */_Bool) var_13)));
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 78408452)) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) var_19))))) % (var_7)));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2] [i_2])))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_23 |= ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)));
                        arr_20 [i_0] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_24 += ((/* implicit */signed char) var_15);
                        var_25 += ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
                        var_26 = ((/* implicit */unsigned short) ((((_Bool) var_10)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                    }
                    var_27 = ((/* implicit */unsigned short) ((var_16) != (((/* implicit */int) arr_13 [i_4] [i_2] [i_3] [i_2 + 1]))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) ((short) var_3));
                    var_29 ^= ((/* implicit */int) ((signed char) (signed char)-1));
                    var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7)))) ? (((/* implicit */int) arr_18 [i_0] [i_2] [i_3] [i_6] [i_2 - 1])) : (((1100667822) - (((/* implicit */int) (short)-9522))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    arr_28 [i_0] [i_0] [21LL] [i_3] [i_7] [i_7] = ((/* implicit */unsigned short) ((arr_27 [i_7 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 1]) > (((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))));
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_7] [i_3] [i_7 - 1]))) / (arr_26 [i_0] [(short)18] [i_0] [i_7 - 1])));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (short)9387)) : (((/* implicit */int) (short)15))));
                    var_33 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_16)) : (arr_12 [4LL]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31097)))));
                }
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) - (var_0))))));
                /* LoopSeq 3 */
                for (short i_8 = 4; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_2 - 2] [i_8] [i_8] = ((/* implicit */_Bool) var_0);
                    var_35 += (unsigned short)55414;
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) && (((/* implicit */_Bool) arr_30 [i_0] [i_3] [i_0] [i_0])))))));
                }
                for (short i_9 = 4; i_9 < 20; i_9 += 1) /* same iter space */
                {
                    var_37 &= ((/* implicit */unsigned int) ((var_7) << (((var_0) - (2581141593247898792LL)))));
                    var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)1))));
                }
                for (signed char i_10 = 1; i_10 < 20; i_10 += 4) 
                {
                    var_39 = ((/* implicit */signed char) ((unsigned short) var_9));
                    var_40 = ((/* implicit */unsigned char) var_12);
                }
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) var_5)) ? (19ULL) : (((/* implicit */unsigned long long int) 78408452))))));
                var_42 = ((/* implicit */unsigned int) var_1);
            }
        }
        for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
        {
            var_43 = ((/* implicit */short) ((((((/* implicit */_Bool) 4226215500U)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_19))));
            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32736)))) != (((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)96)))))))));
        }
        for (long long int i_12 = 2; i_12 < 18; i_12 += 2) 
        {
            arr_45 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) var_2);
            arr_46 [i_12] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) != (var_11)));
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)133))))) : (var_17)));
        }
        var_46 += ((/* implicit */_Bool) ((long long int) (signed char)115));
        arr_47 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
        var_47 &= ((/* implicit */signed char) ((unsigned int) ((var_15) << (((((/* implicit */int) var_10)) - (239))))));
    }
    for (int i_13 = 1; i_13 < 19; i_13 += 3) 
    {
        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [i_13 + 1]) : (arr_12 [i_13 - 1])))) ? (min((-9223372036854775789LL), (((/* implicit */long long int) (signed char)-20)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((int) 6U)) : (((/* implicit */int) var_14)))))));
        arr_50 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3802369257U) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) - (var_0)))) : (((unsigned long long int) ((((/* implicit */_Bool) 8862038890062701492LL)) && (((/* implicit */_Bool) 2129464743679292382LL)))))));
    }
    for (short i_14 = 2; i_14 < 10; i_14 += 4) 
    {
        var_49 = ((/* implicit */int) 926083151553000551ULL);
        var_50 += ((/* implicit */unsigned short) (+(max(((-(var_0))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_16)) : (var_17)))))));
    }
    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_5)) / (((/* implicit */int) ((short) var_0))))))))));
    var_52 = ((/* implicit */signed char) var_19);
}
