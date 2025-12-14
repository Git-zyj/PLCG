/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80468
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((11747752595648698374ULL) <= (14122059383240940932ULL))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)0] [i_0]))) >= (((((/* implicit */_Bool) 11747752595648698373ULL)) ? (11747752595648698381ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15655))))))), ((!(((/* implicit */_Bool) 567648506)))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)-15656)) / (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0]))))))), ((-((-(((/* implicit */int) arr_1 [(short)3]))))))));
        var_18 = ((/* implicit */unsigned int) var_3);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 4611686018427387904ULL)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 1] [i_3])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22529))))))) & ((~(908040113))))))));
                        var_20 *= ((/* implicit */signed char) arr_4 [i_0]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned short) (((_Bool)1) ? (min((6698991478060853247ULL), (((/* implicit */unsigned long long int) (unsigned short)28)))) : (max((((/* implicit */unsigned long long int) (short)15655)), (0ULL)))));
            var_22 += ((/* implicit */_Bool) (+(4611686018427387911ULL)));
            var_23 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) 18446744073709551599ULL)));
        }
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
        {
            var_24 |= (!((_Bool)1));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                arr_22 [i_7] [15ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)4712)) ? (11747752595648698374ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9395)))));
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 630233020073662349LL))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    var_26 ^= ((/* implicit */_Bool) 4494803534348288ULL);
                    arr_26 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 1]))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_6] [i_6]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (16ULL)))) : (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (unsigned short)1609)) : (908040113)))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (short)-15655))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_29 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned short) ((arr_5 [i_4] [i_4] [(signed char)2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4])))));
                    var_29 *= ((/* implicit */_Bool) ((int) 1419684867));
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_30 += ((/* implicit */_Bool) (unsigned char)255);
                        arr_32 [i_9] [i_9] [i_4] = arr_4 [i_4];
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_6])) <= (((/* implicit */int) (unsigned short)16158)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (unsigned short)9))))) : (var_13))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) | (11747752595648698387ULL))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (signed char)62))))) ^ (((unsigned long long int) (-2147483647 - 1)))));
                        var_34 = ((unsigned char) 4575657221408423936LL);
                    }
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_6] [i_6] [i_6] [i_6] [i_9] [(unsigned short)5] = ((/* implicit */unsigned short) (short)15643);
                        var_35 |= ((/* implicit */int) ((((/* implicit */_Bool) (short)-15655)) && (((/* implicit */_Bool) (signed char)-52))));
                        var_36 ^= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)95))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                var_37 -= ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_13])) & (((/* implicit */int) arr_0 [i_6] [i_6]))))) ? (arr_41 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) var_7)));
                var_38 = ((/* implicit */unsigned int) ((signed char) var_8));
            }
            var_39 = (unsigned short)65531;
            arr_44 [i_4] [i_4] = ((/* implicit */signed char) (_Bool)1);
            var_40 = ((/* implicit */unsigned char) ((unsigned short) arr_31 [i_6] [i_6] [(short)0] [i_6] [i_4]));
        }
        arr_45 [(short)8] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((var_0) & (((/* implicit */int) arr_34 [i_4] [i_4] [(unsigned char)8] [i_4] [(unsigned char)8] [(unsigned char)8]))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) & (-4575657221408423936LL))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 6996079208103055357LL)) ? (((((/* implicit */_Bool) 1299432375169782261ULL)) ? (((/* implicit */int) arr_31 [(unsigned short)8] [16ULL] [i_4] [16ULL] [i_4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)127)) && (((/* implicit */_Bool) arr_33 [i_4]))))))))));
        var_41 ^= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1191)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7397))) : (-7478094983370271668LL)))), (max((6698991478060853251ULL), (((/* implicit */unsigned long long int) arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned short)2] [i_4])))))), (((/* implicit */unsigned long long int) ((int) arr_9 [(unsigned short)2])))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_42 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-55)) ? (4575657221408423952LL) : (7478094983370271683LL))), (((/* implicit */long long int) min((arr_19 [i_14]), (arr_19 [i_14]))))));
        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((signed char) (unsigned short)65526)))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15; i_15 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_16 = 4; i_16 < 14; i_16 += 4) 
        {
            arr_55 [i_15] = ((/* implicit */unsigned short) arr_17 [i_15] [i_16] [i_16]);
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) >= (((/* implicit */int) (short)-27574))));
        }
        for (int i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            arr_60 [i_15] [i_15] [9ULL] = ((/* implicit */_Bool) (unsigned short)10713);
            var_45 = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_15]));
            var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_15] [i_17])))))));
            var_47 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_15] [i_15])) ? (arr_41 [i_15] [i_15] [i_15] [i_17]) : (((/* implicit */int) (unsigned short)65526)))) % (((/* implicit */int) arr_49 [i_17] [i_15]))));
        }
        for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            arr_64 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_15] [(signed char)16])) ? (((/* implicit */int) ((((/* implicit */int) arr_61 [i_15] [i_15])) <= (((/* implicit */int) var_6))))) : (((int) 576460752303415296LL))));
            var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / ((+(((/* implicit */int) arr_9 [i_15]))))));
            var_49 = arr_15 [i_15] [i_15];
            var_50 ^= ((/* implicit */short) (((_Bool)1) ? (3430286302084997011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11455)))));
        }
        /* LoopSeq 3 */
        for (signed char i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3376632138U)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))));
            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) : (8827770578119271078ULL))))));
            arr_67 [i_15] [8ULL] [8ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(7478094983370271667LL)))) & (arr_8 [0] [i_19] [i_15] [0])));
        }
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            arr_70 [i_15] = ((/* implicit */long long int) ((signed char) (_Bool)1));
            var_53 = ((/* implicit */unsigned char) ((signed char) (-2147483647 - 1)));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_73 [i_15] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_15] [(signed char)3])) ? (arr_16 [i_15] [i_21]) : (arr_16 [i_15] [i_15])));
            arr_74 [i_21] [i_21] = ((/* implicit */_Bool) ((long long int) arr_63 [i_21]));
        }
    }
}
