/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9712
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
    var_17 = ((/* implicit */signed char) 2871217191U);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) var_11);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            arr_17 [i_3] [i_0] = ((/* implicit */unsigned char) arr_1 [(unsigned char)13]);
                            var_19 = ((/* implicit */_Bool) min((1423750113U), (((/* implicit */unsigned int) (unsigned char)54))));
                            var_20 = ((/* implicit */long long int) ((((((arr_7 [i_0] [(_Bool)1] [i_3] [i_3]) >= (((/* implicit */long long int) var_3)))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) << ((((-(min((arr_7 [i_0] [i_0] [i_0] [i_2]), (arr_4 [i_0] [i_2]))))) - (8341325702584125685LL)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) var_13)), (((/* implicit */unsigned int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(1423750121U))) >= (((/* implicit */unsigned int) ((int) var_15)))))))));
                            arr_20 [i_2] [i_1 - 1] [i_0 - 1] [i_2] [i_0 + 1] = ((/* implicit */long long int) arr_16 [i_1 - 1] [i_2]);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((short) arr_10 [(short)4] [i_1 - 1] [i_1 + 1]))))) != (((unsigned int) (-(2871217201U)))))))));
                            arr_21 [i_0] = ((/* implicit */_Bool) ((unsigned short) min((2U), (4294967288U))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [(signed char)8] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)26)))) : ((+(arr_2 [i_0])))))) ? (((unsigned int) arr_11 [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 2] [i_0])) : (min((max((1423750104U), (var_10))), (max((arr_12 [i_0 + 2] [i_0]), (((/* implicit */unsigned int) var_6))))))));
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~((-(arr_0 [i_0] [i_0 - 1])))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 10; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                var_24 += max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (140737488355327LL) : (((/* implicit */long long int) 1423750082U)))))), ((~(1423750113U))));
                                var_25 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) (!(((/* implicit */_Bool) 4294967279U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_8 [i_7 + 2] [i_7 - 1] [i_7 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                                arr_40 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((arr_23 [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))) : (var_3)))))) && (((_Bool) arr_27 [i_7 - 1] [i_8 - 1] [i_8 + 1]))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-99)))) << (((((unsigned int) var_16)) - (2649536141U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((4294967279U), (1423750097U)))) != (min((((/* implicit */long long int) arr_12 [i_6] [i_7])), (arr_30 [i_6] [i_11] [i_8] [i_7 - 1] [i_6] [i_6]))))))) : (min((((((/* implicit */_Bool) (unsigned char)50)) ? (var_4) : (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30538)) ? (((/* implicit */unsigned int) -289939844)) : (0U))))))));
                                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((var_7) + (4294967292U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 10; i_14 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1423750115U))));
                                arr_45 [i_6] [i_6] [1] [1] [i_13] [i_6] = ((/* implicit */short) (unsigned short)32529);
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((int) 0U))) : (((((/* implicit */_Bool) var_10)) ? (arr_30 [i_6] [i_13] [i_7] [(signed char)7] [i_14 + 1] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_13])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)201));
                                arr_51 [i_6] [i_6] [i_8] [i_15] [i_6] = ((/* implicit */short) -423390585800889932LL);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (((+(((/* implicit */int) arr_43 [8LL])))) + (((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_33 = ((/* implicit */int) max((((/* implicit */long long int) 2871217191U)), (-7687955464235448512LL)));
    }
}
