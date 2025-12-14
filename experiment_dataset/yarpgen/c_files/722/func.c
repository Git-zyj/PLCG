/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/722
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
    var_16 = var_14;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((_Bool) (_Bool)1));
        var_18 = ((/* implicit */unsigned char) max((var_18), (var_2)));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned int) min((arr_4 [i_1]), (var_1)))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (var_12)))))))) ? ((~(arr_4 [(_Bool)1]))) : (((/* implicit */int) min(((_Bool)1), (max(((_Bool)1), ((_Bool)1)))))))))));
            arr_9 [i_2] [i_2] = ((/* implicit */short) max((max((((/* implicit */long long int) (_Bool)1)), (8223435395603350763LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (var_13))))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (var_1)))))) << (((((/* implicit */int) var_6)) - (61541)))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_11)))), (((((unsigned int) (_Bool)1)) > (max((((/* implicit */unsigned int) var_8)), (arr_7 [i_3] [i_3]))))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_0))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_24 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967290U)) ? (arr_0 [(unsigned short)12]) : (arr_0 [i_1])));
                            arr_25 [i_1] [i_1] [i_4] [i_4 - 1] [i_4] [i_6] [i_7] = ((var_8) / (((/* implicit */int) (_Bool)1)));
                            var_24 = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((signed char) (_Bool)1)))));
                arr_26 [i_1] [i_1] [i_4 + 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (var_13)));
            }
            arr_27 [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_8)) - (((long long int) var_12)))) <= (((/* implicit */long long int) max((2147483647), ((+(arr_12 [i_1] [i_4]))))))));
        }
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        arr_32 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) var_5)) - (2885)))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_8])) ? (var_1) : (var_12))))));
        arr_33 [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
        arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_31 [i_8] [15])) - (50200)))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_42 [i_10] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 2147483647))) ? (((arr_28 [i_8]) + (5U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65408)) % (((/* implicit */int) var_2)))))));
                        arr_43 [i_8] [i_10] [17U] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 4; i_12 < 17; i_12 += 4) 
                        {
                            arr_47 [i_10] [i_9] [i_10] = ((/* implicit */long long int) arr_40 [i_9]);
                            var_26 = ((/* implicit */short) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_11))));
                        }
                        arr_48 [i_10] [(unsigned char)9] [(_Bool)1] = ((unsigned char) (short)-24);
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 4; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_14)))))) | (arr_28 [i_13 - 1])))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((arr_46 [i_8] [(unsigned short)9] [17LL] [i_13] [i_14 - 2]) << (((arr_46 [i_8] [i_9] [i_10] [i_13 + 1] [i_14]) - (2844002357U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_53 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-8223435395603350763LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)22884)))))));
    }
}
