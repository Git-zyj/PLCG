/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57880
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) max((max((max((var_10), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) min((arr_5 [i_0] [i_0]), ((signed char)127)))))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) (~(min(((-(((/* implicit */int) arr_4 [i_1])))), ((~(((/* implicit */int) (signed char)-17))))))));
                            var_13 = ((/* implicit */unsigned char) (+((+((+(arr_8 [i_3] [i_2] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) min((max((18ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))), (max((max((((/* implicit */unsigned long long int) arr_10 [i_5] [i_0] [i_1] [i_0] [i_0])), (var_2))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_5 + 1])))))))));
                            arr_20 [i_0] [i_0] [i_1] [i_4] [i_5 - 2] |= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (arr_11 [i_5] [i_5 + 1] [i_5 - 1] [i_4])))), (max((9007199254740991ULL), (((/* implicit */unsigned long long int) (signed char)31)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_4] [i_4] [i_5])), (var_0)))))))));
                            arr_21 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_4])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((~(((/* implicit */int) (signed char)127))))))), (max((((/* implicit */unsigned long long int) (unsigned char)1)), (15098987616884971019ULL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                arr_35 [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_10] = (-((-(max((18437736874454810625ULL), (18446744073709551615ULL))))));
                                var_15 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_9] [i_9] [i_9])), (arr_30 [i_6] [i_8] [i_8] [i_9])))), (max((((/* implicit */unsigned long long int) var_5)), (18437736874454810624ULL)))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */_Bool) min((max((2147483647), (((/* implicit */int) (unsigned char)250)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-((+((-(var_6))))))))));
                var_18 |= ((/* implicit */long long int) max(((-((-(((/* implicit */int) arr_15 [i_12] [i_11] [i_11])))))), ((~(max((1744594275), (((/* implicit */int) var_5))))))));
                /* LoopNest 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                arr_49 [i_14] [i_12] [i_13] [i_14] [i_14] [i_12] = (-(min((max((((/* implicit */unsigned long long int) var_8)), (arr_36 [i_11]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (arr_28 [i_11] [i_12] [i_13] [i_14])))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127)))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((max((max((((/* implicit */unsigned long long int) arr_17 [i_11] [i_13] [i_13] [i_14])), (var_3))), (max((((/* implicit */unsigned long long int) var_0)), (arr_12 [i_14] [i_13] [i_12] [i_11]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2113929216)), (1279410284U))))))));
                                arr_50 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_15]))))), ((~(9007199254741001ULL))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_0)), (var_8))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)15109))));
                                var_22 = ((/* implicit */unsigned long long int) min((max(((-(-1LL))), (((/* implicit */long long int) min((((/* implicit */short) (signed char)42)), (var_5)))))), (((/* implicit */long long int) (~(min((arr_45 [i_11] [i_12]), (((/* implicit */unsigned int) (unsigned char)1)))))))));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)139)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))), ((-(var_8))))), (((/* implicit */unsigned int) (+((~(var_4))))))));
    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)1914), (((/* implicit */short) var_7)))))))), (max((max((var_3), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((var_8), (var_6))))))));
}
