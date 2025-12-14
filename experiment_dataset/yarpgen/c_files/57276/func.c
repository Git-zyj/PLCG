/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57276
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_4 [i_0] [i_1])) == (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1] [i_1] [i_1] [i_0]) : (16499139225105116031ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_18 = (~(((arr_10 [i_3]) * (var_7))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_19 = arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4];
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3 - 4])) || (((/* implicit */_Bool) arr_3 [i_3 + 3]))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((unsigned long long int) 5281987323218945241ULL)) + (arr_1 [i_1 - 1]));
                            var_21 = (-(arr_12 [i_1 - 1]));
                        }
                        var_22 = (+(((((/* implicit */_Bool) arr_10 [i_3])) ? (var_13) : (arr_15 [i_0]))));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 11141735683273874671ULL))))));
                        var_24 = (+(arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2] [i_5 + 2] [i_2]));
                        arr_21 [13ULL] [13ULL] [13ULL] [i_0] = ((arr_11 [i_0] [i_1] [i_1]) & (arr_7 [i_0] [10ULL] [i_0] [i_0]));
                    }
                }
                var_25 = ((unsigned long long int) ((((/* implicit */_Bool) min((3659915146844077428ULL), (1640602406107660116ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10056586148285409042ULL) == (arr_4 [i_1] [i_0])))))));
            }
        } 
    } 
    var_26 = var_1;
    var_27 = max((((((((/* implicit */_Bool) var_12)) ? (14201849668104528914ULL) : (2305843009213693888ULL))) * ((~(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_16)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_25 [i_6] = max((var_17), (((((/* implicit */_Bool) arr_23 [i_6])) ? (arr_24 [i_6]) : (((((/* implicit */_Bool) var_9)) ? (7890849318189895511ULL) : (8979312663197008290ULL))))));
        arr_26 [i_6] [i_6] = var_6;
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 3) 
        {
            arr_29 [i_6] [i_6] = ((((/* implicit */_Bool) ((arr_28 [i_6] [i_7] [i_7]) / (8979312663197008270ULL)))) ? (18446744073709551596ULL) : (9467431410512543312ULL));
            arr_30 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_22 [i_6]), (9467431410512543310ULL)))) ? (((((/* implicit */_Bool) 9467431410512543319ULL)) ? (9467431410512543302ULL) : (18301358079097908219ULL))) : (((((/* implicit */_Bool) arr_23 [i_6])) ? (var_6) : (arr_28 [i_6] [i_6] [i_6]))))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            var_28 = ((((/* implicit */_Bool) var_12)) ? (min((((3369075781802680287ULL) | (arr_31 [i_6] [i_6]))), (((((/* implicit */_Bool) 4243016249723164244ULL)) ? (var_15) : (8512233553168096916ULL))))) : (((unsigned long long int) arr_23 [i_6])));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_41 [i_10] [i_8] [i_6] [i_6] = arr_31 [i_6] [i_11];
                            var_29 = 3369075781802680288ULL;
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 2) 
            {
                var_30 = ((unsigned long long int) min((min((arr_24 [i_6]), (var_17))), (((4376493044328219013ULL) * (12802604918739499278ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 3) 
                {
                    arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = min((arr_24 [i_6]), (((((/* implicit */_Bool) max((4265663245806377106ULL), (arr_28 [i_6] [i_6] [i_6])))) ? (arr_34 [i_6] [i_6] [i_6] [i_6]) : (max((var_1), (arr_33 [i_12] [i_8] [i_6]))))));
                    var_31 = min(((-(9180401744214081375ULL))), (67108863ULL));
                }
                var_32 = ((unsigned long long int) (~(((unsigned long long int) 8979312663197008270ULL))));
                arr_49 [i_6] [i_6] [i_6] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_6] [i_6] [i_6]) <= (8979312663197008303ULL))))) >= (((arr_24 [i_6]) | (var_8)))));
                arr_50 [i_6] [i_8] [i_6] = min((var_0), (((((/* implicit */_Bool) 67108848ULL)) ? (max((2516511471824120218ULL), (arr_32 [i_6]))) : (var_14))));
            }
            for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 1) 
            {
                arr_54 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_36 [i_6]), (var_15)))) ? (arr_42 [i_6]) : ((+(4866170280654405928ULL)))))) ? (((max((3748293865847581006ULL), (6916561534474817880ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_36 [i_6]) != (67108848ULL))))))) : (max((((unsigned long long int) arr_53 [i_8])), (((unsigned long long int) arr_43 [i_6] [i_6] [i_6] [i_6])))));
                arr_55 [i_6] [i_14] [i_6] [i_6] = arr_24 [18ULL];
                arr_56 [i_6] [i_14] = ((unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_14) : (arr_27 [i_6] [i_6] [i_6]))))));
            }
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_52 [i_8] [i_8] [i_6]), (max((0ULL), (67108839ULL)))))) && (((/* implicit */_Bool) ((9266342329495470270ULL) | (arr_32 [0ULL]))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 2) 
        {
            var_34 -= (+(arr_51 [12ULL] [12ULL]));
            var_35 = min((((8268592713440099971ULL) % (14698450207861970611ULL))), (((((/* implicit */_Bool) 3014662266014052995ULL)) ? (arr_47 [i_15 + 1] [i_15] [i_15 + 1]) : (arr_22 [i_6]))));
            var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 17913965110652557761ULL)) ? (18172187227412388672ULL) : (((((/* implicit */_Bool) 11091386067843606959ULL)) ? (arr_36 [i_6]) : (9467431410512543332ULL))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_6] [i_15] [i_6])) && (((/* implicit */_Bool) 15077668291906871341ULL))))))))));
            var_37 = min((((unsigned long long int) (-(arr_53 [i_15])))), (var_15));
        }
    }
}
