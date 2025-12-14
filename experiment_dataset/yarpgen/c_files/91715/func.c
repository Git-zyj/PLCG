/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91715
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (18))))));
            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [(signed char)10])) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_18 = ((/* implicit */long long int) var_7);
                var_19 = ((((((/* implicit */_Bool) (-(18446744073709551609ULL)))) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (var_0))))))) : (var_0));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((int) var_5)))));
                    var_21 = ((((/* implicit */int) var_6)) > (((/* implicit */int) ((var_14) == (((/* implicit */int) min((((/* implicit */short) var_11)), (var_5))))))));
                }
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) arr_1 [1LL]);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((arr_0 [i_1]) / (((/* implicit */unsigned long long int) (-(var_2)))))) - (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4))))))));
                    var_23 &= ((/* implicit */int) ((max((((/* implicit */int) ((arr_9 [i_0] [i_1] [i_4] [i_5 + 1]) && (((/* implicit */_Bool) var_12))))), ((-(((/* implicit */int) arr_2 [(unsigned short)14])))))) <= (-1951449022)));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (18304046987268959035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_5 [i_7 + 1]))));
                            var_25 = (+(arr_10 [1] [i_1] [i_6] [i_8]));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))) | (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0])), (arr_21 [i_0] [i_1] [i_0] [i_6])))))))));
                arr_26 [i_0] = arr_24 [i_0] [i_1] [i_6];
            }
            for (int i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_8 [i_0] [i_0] [i_9] [i_1] [i_0] [i_9 - 1]))), (280925220896768LL)));
                arr_31 [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((max((0U), (((/* implicit */unsigned int) arr_28 [i_0] [i_9] [i_0] [i_0])))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [(unsigned char)9] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (var_10)))))))));
            }
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
        {
            arr_35 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_23 [i_10] [i_10])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_5))))))) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_33 [i_10] [i_0])))));
            arr_36 [i_0] [i_10] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_10]))))));
            var_28 = ((/* implicit */signed char) 7294270920781393710LL);
        }
        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_11] [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_30 = ((/* implicit */long long int) (~(var_15)));
        }
        var_31 = ((/* implicit */unsigned long long int) arr_23 [12ULL] [i_0]);
        var_32 = ((/* implicit */_Bool) (signed char)-46);
    }
    for (int i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            for (unsigned short i_14 = 2; i_14 < 19; i_14 += 4) 
            {
                {
                    var_33 = (+((+(arr_46 [i_14 - 2] [i_14 - 2] [i_14 + 1]))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_48 [i_12] [i_12] [i_12]))))) ? ((-(((/* implicit */int) arr_43 [i_14 - 2] [i_14 - 2])))) : (((/* implicit */int) var_13)))))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_12] [i_12])) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (2305229772758134289ULL))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */short) var_13))))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_45 [i_12])))) ? (((/* implicit */int) arr_43 [i_14] [i_12])) : ((-(var_3))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(arr_48 [i_12] [i_12] [i_12])))), (((unsigned short) arr_48 [i_12] [i_12] [i_12]))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_37 = ((/* implicit */short) arr_51 [i_15]);
        arr_53 [i_15] = ((/* implicit */_Bool) var_9);
    }
    var_38 = ((/* implicit */unsigned int) var_11);
}
