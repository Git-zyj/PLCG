/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81803
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
    var_12 = ((short) ((unsigned char) (~(18014398509481983LL))));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((max((max((var_7), (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526))))))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)1)), ((unsigned short)59974)))) ? (max((((/* implicit */int) (unsigned short)63)), (var_2))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned short)59969)) : (((/* implicit */int) var_8)))))) - (433443270))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_7), (var_9))), ((~(var_2)))))) ? ((-((~(527242696))))) : (max(((+(((/* implicit */int) (unsigned char)249)))), ((+(((/* implicit */int) (unsigned short)38459)))))))))));
                                arr_15 [(unsigned short)10] [i_3] [i_3] [i_1] [11LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_13 [i_1 + 1] [i_1 + 1] [i_4 + 1]))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2]))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) max((-1759048008), (((int) (_Bool)1)))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_11))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1]))))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)9798))))))) ? (max(((+(((/* implicit */int) (unsigned short)9785)))), (((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1)))))) : ((((+(var_7))) / (((var_3) ^ (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5])))))))))));
                            }
                            for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned short) ((short) ((unsigned char) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_1))))));
                                arr_23 [i_3] = (-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (min((((/* implicit */unsigned short) (unsigned char)191)), (var_8)))))));
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                var_20 += ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_3 - 1] [i_7 - 1])))))));
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) -2147483631)))));
                                arr_28 [i_0] [i_3] [(unsigned char)10] [i_3 + 1] [i_7 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_24 [i_7 - 1]))) ? ((+(arr_24 [i_7 - 1]))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)225))))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) 
                            {
                                arr_31 [19LL] [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(unsigned char)19] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)36)) : (var_9))), (((/* implicit */int) (unsigned short)41024))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_6)))))) >= ((-(5448111882109254609LL))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (((long long int) (unsigned short)59968)))));
                                arr_32 [i_8] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (max((var_7), (var_7))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1]))))) + (min((arr_19 [i_3] [i_1] [i_2] [i_3] [11] [i_3 + 1] [i_3]), (((/* implicit */long long int) var_8))))));
                            }
                            for (unsigned short i_9 = 2; i_9 < 21; i_9 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((var_7), (((/* implicit */int) var_10)))))) ? (min((min((131071LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (67106816)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (max((((long long int) (+(1346807494)))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_8))))))))));
                                arr_35 [i_9 + 2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) max((((((/* implicit */unsigned long long int) arr_27 [i_3] [i_9] [i_9] [i_3] [i_2] [7LL] [i_3])) != (arr_29 [i_0] [i_0] [i_2] [i_3]))), (((_Bool) var_1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-131072LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 263685932))))) : ((-(((/* implicit */int) var_1))))))));
                                var_25 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_4)))));
                            }
                            arr_36 [i_3] [i_3] = ((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) var_11))))));
                            var_26 ^= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (_Bool)1))))) : (arr_22 [i_2] [i_3 + 1] [i_2] [i_3] [i_1 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((int) max((var_7), (((/* implicit */int) (unsigned short)8192)))));
                                var_28 = arr_5 [i_12] [i_11];
                                var_29 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (var_2)))) ? (((/* implicit */long long int) max((var_2), (((/* implicit */int) (unsigned short)19))))) : ((+(5629904676985696487LL)))))));
                                arr_45 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] = var_11;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
    var_31 = ((/* implicit */short) var_3);
}
