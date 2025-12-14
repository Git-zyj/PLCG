/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66868
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (((~(max((15624498014836823545ULL), (((/* implicit */unsigned long long int) var_1)))))) - (((unsigned long long int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [6ULL])) != (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) var_4)) : (((arr_0 [9]) >> (((var_13) + (1205909683)))))))));
        var_17 -= ((/* implicit */unsigned long long int) 809125059U);
        var_18 = ((((/* implicit */_Bool) (+((+(0U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1117103813820416ULL)) || (((/* implicit */_Bool) arr_0 [i_0]))))) : ((~(var_0)))))) : (((0ULL) / (((/* implicit */unsigned long long int) max((2721489906U), (arr_1 [i_0])))))));
        var_19 = ((/* implicit */int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), ((+(1343409715U)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) 1337192235))));
        var_22 |= (~(arr_2 [i_1 - 1]));
        var_23 -= ((/* implicit */int) ((((((/* implicit */_Bool) 1290793552U)) ? (((/* implicit */unsigned long long int) 1799904869)) : (13251205679848702578ULL))) > (arr_2 [i_1])));
    }
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_24 ^= ((/* implicit */int) ((20U) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_2])))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            var_25 = 15735069778393619571ULL;
            var_26 = 4ULL;
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_14 [i_2] [i_5] [i_3] [i_5] [i_3 + 1] = arr_3 [i_2];
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                        {
                            arr_17 [i_3] = ((/* implicit */unsigned long long int) 536870912U);
                            var_27 = ((/* implicit */unsigned int) (~(arr_16 [i_2] [i_3] [i_5] [i_3] [i_6 - 2] [i_3])));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((arr_11 [i_3] [i_2] [20U] [i_3 - 1]) >= (arr_11 [i_2] [i_3 - 1] [i_4] [i_3 + 1]))))));
                            arr_18 [i_2 + 2] [i_2 + 2] [i_5] &= ((/* implicit */int) arr_6 [i_2]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_29 ^= (~((-(671059708))));
                            var_30 = ((/* implicit */int) ((14U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_3]))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((unsigned long long int) 15986918609401860373ULL)) + (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (arr_6 [i_3]) : (18446744073709551615ULL)))));
                            arr_24 [i_2 - 1] [i_3] [i_3] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */int) (-((~(2951557580U)))));
                            arr_25 [i_3] [i_3] = var_8;
                            var_32 = (+(arr_19 [16ULL] [i_2 - 1] [i_4] [i_3] [i_3 - 1]));
                        }
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((668754856092129254ULL) <= (2836796238048658952ULL))))) ^ (((((/* implicit */_Bool) -2147483623)) ? (((/* implicit */unsigned long long int) 2147483647)) : (13343211550150733327ULL))))))));
                        var_34 = ((/* implicit */int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9007199254478848ULL) : (3872447758389646287ULL)))));
                        var_35 += ((/* implicit */unsigned int) (~(-1554798894)));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2632281495U)) ? (3U) : (((/* implicit */unsigned int) 2147483647))));
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_37 = ((/* implicit */unsigned int) (+(var_1)));
                var_38 *= ((/* implicit */unsigned long long int) var_5);
                arr_29 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12307541304416407205ULL))));
            }
            for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [8U])) ? (((/* implicit */unsigned long long int) arr_27 [i_3 + 1] [14ULL] [14ULL] [i_2 + 1])) : ((~(arr_13 [i_2] [i_3 + 1])))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_11])) ? (((/* implicit */unsigned long long int) (-(16U)))) : (arr_15 [i_2] [i_2] [21ULL] [i_2] [i_3] [19U])));
                    var_41 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_34 [i_3] [i_3]) < (arr_30 [i_3] [i_3] [i_3]))))));
                }
                var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_10 + 1] [14])) ? ((-(arr_26 [20] [20]))) : (((/* implicit */unsigned int) var_3)))))));
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) arr_6 [i_3]))));
                arr_36 [i_3] = (~(arr_11 [3ULL] [i_3 + 1] [i_10 + 1] [4ULL]));
            }
        }
        for (unsigned int i_12 = 2; i_12 < 22; i_12 += 2) 
        {
            var_44 = ((/* implicit */int) min((1117103813820426ULL), (min((28ULL), (((((/* implicit */_Bool) arr_35 [20U] [i_2] [i_12] [i_12] [i_12])) ? (13799640817807777641ULL) : (((/* implicit */unsigned long long int) 1493317251))))))));
            arr_39 [i_2] [i_12] [11] = -934122926;
            arr_40 [13ULL] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 5907653415490856668ULL)) ? (((((/* implicit */unsigned int) 868818430)) - (arr_19 [2U] [2U] [i_2] [i_12] [i_2]))) : (((/* implicit */unsigned int) arr_20 [i_12] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_45 = ((/* implicit */unsigned int) 1117103813820416ULL);
            var_46 = ((/* implicit */unsigned long long int) 3736850724U);
            arr_44 [i_13] = ((/* implicit */unsigned int) 1701220514737292334ULL);
            arr_45 [i_13] = 18446744073709551584ULL;
        }
        arr_46 [20U] [0ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483632))));
        var_47 = ((/* implicit */unsigned int) ((unsigned long long int) 3641603201U));
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            arr_51 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -2147483632)), (4294967295U))))))) == (((/* implicit */int) ((((/* implicit */unsigned int) var_1)) >= (((((/* implicit */_Bool) arr_30 [i_14] [i_2] [i_14])) ? (((/* implicit */unsigned int) arr_33 [i_2] [i_2 - 1] [i_2] [i_14])) : (4294967295U))))))));
            arr_52 [i_14] &= ((((((/* implicit */_Bool) 12486340003169035412ULL)) ? (498661601560081380ULL) : (4163282496904361297ULL))) % (((/* implicit */unsigned long long int) 276943666U)));
            var_48 = ((/* implicit */int) arr_13 [i_2] [16U]);
            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1629136012)))) ? (1175881476) : (var_5)));
            arr_53 [i_14] [i_14] [i_2] = ((/* implicit */int) 4856019374320190215ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((var_7) >= ((-(0ULL))))))));
            var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (~(934122926))))));
        }
    }
    for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) 
    {
        var_52 = (~((+(((((/* implicit */unsigned long long int) -2147483632)) | (18446744073709551615ULL))))));
        var_53 = 524224;
    }
}
