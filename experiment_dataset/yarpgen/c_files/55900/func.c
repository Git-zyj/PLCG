/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55900
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((var_3) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)28411)))) : (var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (var_7))))))));
    var_13 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)37114), (((/* implicit */unsigned short) max(((short)-6248), (((/* implicit */short) (_Bool)1))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_2 - 1] [i_2 + 2]));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), ((-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (18027488436199035039ULL) : (arr_7 [i_0] [i_1 + 4] [(unsigned char)8])))))));
                                arr_17 [i_0] [i_0] [i_1] [(unsigned char)17] [(_Bool)1] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) (_Bool)1))))) : (arr_2 [i_0] [(unsigned char)10])));
                                arr_18 [i_4] [i_3] [i_4] [i_3] &= arr_7 [(_Bool)1] [i_3] [i_3];
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */_Bool) arr_14 [i_2 - 1]);
                    arr_19 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2 - 1]))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_14 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (max((arr_14 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_5] [14LL]))))))) ? (arr_9 [1ULL] [i_1] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)29468))))) <= (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5 - 1])) ? (((/* implicit */unsigned long long int) 627487781385546096LL)) : (arr_7 [i_0] [i_1 + 4] [i_5])))))))));
                    var_16 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0]))))))));
                }
                arr_25 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1 + 1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) arr_2 [i_8] [i_7])) ? (arr_11 [i_0] [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8]))))))) ? (((/* implicit */int) (unsigned short)28425)) : (((/* implicit */int) min((arr_16 [i_0] [i_0] [i_6] [i_8 + 2] [i_1 - 1] [i_0] [i_6]), (arr_16 [i_0] [i_1] [i_6] [i_8 + 2] [i_1 - 1] [i_6] [i_0]))))));
                                var_18 = ((/* implicit */long long int) min((min(((~(arr_7 [12ULL] [i_7] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((_Bool) arr_2 [(unsigned char)9] [i_7])))));
                                arr_36 [i_8] [i_6] [3ULL] [i_7] [i_1] = ((/* implicit */unsigned short) max(((+((~(((/* implicit */int) (signed char)121)))))), (((/* implicit */int) ((unsigned short) (~(11549958471718094020ULL)))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((_Bool)0) ? (max((13039697181272234239ULL), (((/* implicit */unsigned long long int) (unsigned short)30339)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_1 + 4]) != (arr_35 [i_1] [i_1] [i_1 + 4] [i_1] [i_1] [i_1 + 3] [i_1])))))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (max((((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 1])), (((arr_28 [i_10] [i_10] [i_9] [(_Bool)1]) >> (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))))));
                        }
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28420)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_37 [i_6] [i_1 - 1])));
                    }
                    arr_42 [i_0] [10ULL] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    arr_46 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 1] [i_1 + 3])) ? (7852008677272846059ULL) : (arr_7 [i_1 + 1] [i_1 + 3] [i_1 + 4]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_11])) || ((_Bool)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 4; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_51 [i_0] [i_11] [i_13 - 1] [i_12] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1649952485151844229ULL)) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = ((((/* implicit */int) (unsigned short)25467)) <= (((/* implicit */int) (unsigned char)0)));
                                arr_52 [i_1] [(unsigned short)5] = ((/* implicit */long long int) arr_47 [i_12] [i_1]);
                                arr_53 [i_1] [i_12] [i_12] [i_11] [(signed char)11] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (395074425217107886LL)));
                            }
                        } 
                    } 
                    arr_54 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)5995)), ((-(((/* implicit */int) (unsigned short)25467))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_4);
}
