/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66589
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) arr_3 [i_0] [i_2] [(_Bool)1]);
                        var_15 = ((/* implicit */long long int) var_10);
                        var_16 = ((/* implicit */signed char) -3454935293681646899LL);
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [(signed char)7] [i_3])) - (arr_4 [i_0] [i_0]))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((unsigned int) (unsigned char)255)))));
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) | (arr_11 [i_0] [i_0] [i_0] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    }
    var_20 = ((/* implicit */long long int) var_6);
    var_21 = ((/* implicit */long long int) var_13);
    /* LoopSeq 3 */
    for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
    {
        var_22 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) < (var_0)))), (2905633920U)))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_5]);
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(arr_15 [i_5] [i_5]))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) (~(arr_28 [i_6] [i_7] [i_8] [i_9] [i_10])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)30))))) : ((+(min((arr_26 [7] [i_7] [i_9]), (((/* implicit */long long int) var_3)))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(arr_17 [i_7]))))));
                            var_28 -= ((/* implicit */_Bool) arr_25 [i_10] [i_8] [i_7] [i_6]);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2083281231)) ? (((long long int) arr_19 [i_6] [i_6] [i_7])) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [i_6] [i_7] [i_6])), (var_7))))));
            var_30 += ((/* implicit */int) min((((unsigned int) arr_24 [i_6] [i_6] [i_7] [i_7])), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) >= (((((/* implicit */_Bool) arr_19 [i_6] [i_7] [i_7])) ? (var_8) : (288230376151711743ULL))))))));
        }
        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_12 = 4; i_12 < 24; i_12 += 4) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) ((_Bool) var_12)))))));
                var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [i_12 - 3] [i_12] [i_12])) ? (((/* implicit */int) arr_27 [i_12 - 4] [i_11] [i_11])) : (((/* implicit */int) arr_27 [i_12 - 2] [i_12] [i_12])))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) arr_27 [i_12 - 4] [i_11] [i_11]))))));
                var_33 = min((((/* implicit */long long int) arr_19 [17ULL] [i_11] [i_11])), (arr_21 [i_12 + 1]));
            }
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                var_34 = ((/* implicit */_Bool) arr_34 [i_6] [i_11] [i_13]);
                var_35 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) arr_30 [8LL])) - (arr_20 [16LL]))), (((/* implicit */unsigned int) arr_15 [i_6] [(_Bool)1]))));
                var_36 = ((/* implicit */short) min((((arr_15 [i_6] [i_6]) < (arr_15 [i_6] [i_11]))), ((((-(((/* implicit */int) arr_25 [i_11] [i_11] [i_11] [2LL])))) == ((+(((/* implicit */int) arr_16 [i_6] [i_11]))))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        {
                            var_37 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_26 [i_13] [7LL] [11LL])) - (min((11797759099156781349ULL), (1181282914990754443ULL)))));
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_15] [i_11] [i_15] [i_11] [i_11])) ? (arr_32 [i_13] [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (((var_8) * (((/* implicit */unsigned long long int) arr_18 [i_11] [i_15]))))))) ? (((/* implicit */unsigned int) -1418626602)) : (((((/* implicit */_Bool) (+(-2823004340344482629LL)))) ? (var_7) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)200)))))))));
                            var_39 = ((/* implicit */unsigned char) arr_17 [i_6]);
                            var_40 = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        {
                            var_41 += ((/* implicit */long long int) (_Bool)0);
                            var_42 = ((/* implicit */int) min((arr_37 [i_6]), (((/* implicit */unsigned int) ((arr_42 [i_6] [14ULL] [i_16] [i_16 - 1] [i_17] [i_13] [15LL]) % (var_5))))));
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_44 [18] [i_11] [i_13] [i_16 + 2] [i_16 - 1] [i_16 - 1])))) ? (((/* implicit */long long int) arr_30 [i_16])) : (((((/* implicit */_Bool) arr_22 [i_16 + 1] [i_16 + 1] [19] [i_16 - 1])) ? (arr_22 [i_16 + 1] [i_16 + 1] [(unsigned char)8] [i_16 - 1]) : (arr_22 [i_16 + 1] [i_16 + 1] [i_16] [i_16 - 1])))));
                            var_44 += ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_10)) / (max((((/* implicit */unsigned int) arr_33 [i_6] [i_13] [i_16])), (arr_28 [i_6] [(unsigned char)18] [i_13] [i_13] [6]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)-9))))) >= (arr_22 [i_6] [2LL] [(_Bool)1] [12LL])))))));
                            var_45 = ((/* implicit */unsigned char) ((signed char) arr_38 [i_6]));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    var_46 = ((/* implicit */int) arr_36 [i_6] [i_6] [i_6]);
                    var_47 -= ((/* implicit */_Bool) var_8);
                    var_48 -= ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((-(((/* implicit */int) ((_Bool) 288230376151711763ULL)))))));
                    var_49 = ((/* implicit */unsigned long long int) (((~(arr_39 [i_6] [i_18] [4ULL] [i_19 + 1]))) != (((((/* implicit */_Bool) arr_39 [i_19] [5ULL] [i_19] [i_19 + 1])) ? (arr_39 [i_19 + 1] [i_19] [i_19] [i_19 + 1]) : (arr_39 [i_11] [9LL] [i_11] [i_19 + 1])))));
                    var_50 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -2147483628)) ? (((/* implicit */int) (short)-5095)) : (((/* implicit */int) (signed char)-121))))));
                }
                var_51 = ((/* implicit */_Bool) (signed char)-121);
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    {
                        var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) arr_41 [i_11] [(signed char)10]))));
                        var_53 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                        var_54 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_21] [i_20] [i_11]))) % (min((((/* implicit */long long int) arr_28 [i_6] [20LL] [i_11] [i_11] [i_6])), (8097154300264682785LL))))));
                        var_55 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_36 [i_6] [i_20] [i_21]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_6] [i_11] [i_20])) || (((/* implicit */_Bool) 59700904U)))))) : (min((arr_36 [i_6] [i_6] [i_6]), (arr_36 [i_21] [i_11] [i_11])))));
                    }
                } 
            } 
        }
        var_56 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_52 [i_6] [i_6] [i_6] [21ULL] [i_6])) ? (var_5) : (2147483645)))))) ^ (1181282914990754443ULL)));
    }
}
