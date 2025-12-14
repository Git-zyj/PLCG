/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69544
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1442558449487261816LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2]))) : (arr_2 [i_0])))), (((unsigned long long int) ((unsigned short) 2812549368U)))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) arr_4 [i_1])), (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(arr_2 [4ULL])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (arr_2 [4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) : (max((var_14), (((/* implicit */unsigned long long int) var_10))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (signed char)-94))));
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) (unsigned short)17231));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (+((~(((unsigned long long int) var_5))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 8; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_4] [(signed char)7] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_5 + 2] [i_1 + 1])))) ? ((+(arr_19 [i_0] [i_0] [i_0] [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_4] [i_0] [i_0] [i_1 + 1]) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            arr_21 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_5 + 2] = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) var_11))))))));
                            arr_22 [i_0] [i_1] [i_2] [i_4] [i_5 + 1] [i_0] [i_2] = ((/* implicit */unsigned char) 507688109);
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            arr_27 [(short)4] [i_2] [i_4] [(signed char)4] &= ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) (unsigned short)18216)) ? (((/* implicit */unsigned long long int) 477822381)) : (13412479353873124487ULL))) < (((arr_9 [i_0] [i_0] [i_0] [i_0]) << (((arr_6 [i_0] [i_0] [8U]) + (4170393797395886492LL)))))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_23 [i_6] [i_4] [i_2] [i_1 + 1] [i_0])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (215))))) << (((var_1) - (128229003638857938ULL)))))) ? ((~(13412479353873124487ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(1053978591U))))))))));
                            var_18 = ((((unsigned long long int) arr_2 [i_0])) < ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48286))) : (7515258322690554929ULL))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23334))) & (1889400120U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2] [i_6 - 1]))) / (13412479353873124473ULL)))));
                            arr_28 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_0] [i_1 + 1] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) arr_15 [i_1] [i_0] [i_1] [i_0] [i_1 + 1]))))));
                        }
                        var_20 = ((/* implicit */signed char) (-(((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(var_14)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_18 [(signed char)1] [i_1 + 1] [(signed char)1] [i_0] [i_0] [i_2]) : (arr_18 [i_0] [i_1 + 1] [i_2] [i_0] [(unsigned char)3] [i_1])))) ? (((arr_18 [i_0] [i_1 + 1] [i_7] [i_0] [i_0] [i_0]) & (arr_18 [5ULL] [i_1 + 1] [i_2] [i_0] [i_7] [i_0]))) : (arr_18 [i_1 + 1] [i_1 + 1] [(unsigned short)6] [i_0] [i_0] [i_2])));
                        arr_31 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [0LL] [i_1 + 1] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1] [i_1 + 1] [i_1 + 1])))))) : (((arr_10 [i_0] [i_0] [(unsigned char)3] [i_1 + 1] [(short)2]) * (arr_10 [i_1 + 1] [i_0] [7LL] [i_1 + 1] [i_7])))));
                    }
                    var_22 = ((_Bool) arr_1 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((((/* implicit */int) (signed char)-33)) & (((/* implicit */int) var_0))))))) ? (((min((((/* implicit */unsigned int) var_12)), (1073741823U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_12))))))));
    /* LoopSeq 2 */
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) 2328045190U)) : (arr_36 [i_9] [i_9 - 2] [i_9 + 1]))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_34 [i_8])) ^ (((/* implicit */int) arr_35 [i_8])))) : ((~(((/* implicit */int) arr_33 [i_8]))))));
            var_26 = ((/* implicit */signed char) arr_33 [i_8]);
            arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)150))));
            arr_38 [i_8] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (13412479353873124473ULL))) ? (((/* implicit */int) arr_35 [i_9 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        }
        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
        {
            arr_41 [i_8] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) 1425098481))))))), (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_32 [i_8]))) && (((/* implicit */_Bool) ((arr_39 [i_8] [i_8]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_8] [i_10] [i_10] [i_12])))))))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36203)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1664770065U)))) ? (3134014068844113166ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16721866581609568308ULL)) || (((/* implicit */_Bool) (unsigned short)15264)))))))))));
                    }
                } 
            } 
            arr_49 [i_8] [i_8] [i_10] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_45 [i_10] [i_10 - 2] [6U] [(short)10] [(short)10] [i_10 - 2])))) >= (((((/* implicit */int) (short)-5098)) ^ (((/* implicit */int) (_Bool)1))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_46 [i_10] [i_10] [i_10 - 2] [i_10] [i_10] [i_10 - 2])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)60156)) : (((/* implicit */int) (signed char)-33))))) : (((unsigned int) var_8))));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            arr_52 [i_8] = ((/* implicit */signed char) ((var_4) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [14U] [i_8])) ? (((/* implicit */int) arr_39 [i_8] [i_13])) : (((/* implicit */int) (_Bool)1)))))));
            var_30 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned long long int) var_3)))));
            arr_53 [i_8] [i_13] = ((/* implicit */long long int) ((((var_12) ? (arr_46 [i_8] [i_8] [i_8] [5] [i_13] [i_13]) : (arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) & (((/* implicit */int) ((short) 2187669989271055459LL)))));
            arr_54 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_34 [i_13]);
        }
        var_31 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3134014068844113166ULL)))) : (arr_32 [i_8]))));
        arr_55 [i_8] [i_8] = ((/* implicit */signed char) arr_40 [i_8] [i_8]);
        arr_56 [i_8] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 126786543))))));
    }
    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        arr_59 [i_14] [i_14] = ((/* implicit */_Bool) 16721866581609568313ULL);
        var_32 -= ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)15280))))));
        arr_60 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) (signed char)17))))) ? (arr_43 [i_14]) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-102)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-38)), (arr_44 [i_14] [i_14] [i_14] [(unsigned char)8]))))));
    }
    var_33 = ((/* implicit */signed char) (+(var_14)));
}
