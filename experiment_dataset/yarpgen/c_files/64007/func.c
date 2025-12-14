/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64007
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
    var_13 = max((((/* implicit */signed char) (!((!(var_9)))))), (((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)50956))))));
    var_14 = var_4;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (arr_5 [i_1] [i_2]) : (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_0] [i_0])))))) >= (((((arr_8 [i_3] [i_2 + 1] [(unsigned char)9] [i_0]) >> (((((/* implicit */int) arr_0 [i_2] [i_3])) - (47832))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)120), (((/* implicit */unsigned char) (_Bool)0))))))))));
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_4]))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_4] [13ULL] [i_4])) ? (17216300103654776701ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2 - 1] [i_2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_14 [i_0] [i_0] [i_5 + 1]))))))), ((((!(((/* implicit */_Bool) (short)-30163)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (min((var_12), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                            /* LoopSeq 3 */
                            for (short i_7 = 3; i_7 < 13; i_7 += 2) /* same iter space */
                            {
                                arr_19 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_12 [i_0] [i_1] [i_6])))) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((-1319294533) < (((/* implicit */int) var_4)))))));
                                arr_20 [i_7] [i_1] [i_1] [(unsigned short)7] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_7 - 2] [i_1] [i_7])), (var_12)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) (_Bool)1))))), (((1152921504606846975ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30720))))))))));
                                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)244))));
                            }
                            /* vectorizable */
                            for (short i_8 = 3; i_8 < 13; i_8 += 2) /* same iter space */
                            {
                                arr_24 [i_8 + 1] [i_8] [(unsigned char)2] [i_0] [i_5 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(var_7))) : (var_7)));
                                var_19 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0]);
                            }
                            for (short i_9 = 3; i_9 < 13; i_9 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) (!(var_1)));
                                var_21 = max((min((arr_0 [i_9 - 3] [i_5 + 1]), (((/* implicit */unsigned short) max((arr_23 [i_9] [i_9] [i_5] [i_6] [i_9]), (((/* implicit */short) var_10))))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)23981))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13171))) - (((var_12) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_0])), (1069547520U))))))));
                                arr_27 [i_0] [(_Bool)1] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_5 [1] [i_1]);
                                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((arr_8 [i_5 + 1] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned char)5] [i_5]))))) ? (((/* implicit */int) var_9)) : (arr_10 [(short)0]))), (((((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_1]))) >> (((arr_1 [i_9]) - (3638979135U)))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)255));
                arr_28 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(arr_22 [i_0] [(short)4] [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_13 [(unsigned char)3]))))) : ((-(4171714094353720417LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        for (short i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_30 [i_10]), (((/* implicit */signed char) arr_31 [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!((_Bool)0))), (arr_31 [i_11]))))) : (10ULL)));
                var_26 = ((/* implicit */_Bool) arr_30 [i_10]);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */int) (short)18947)) * (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49661))) & (var_12)))))))));
}
