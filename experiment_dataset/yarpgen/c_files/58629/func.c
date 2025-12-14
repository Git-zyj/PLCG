/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58629
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(var_10))))));
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62248)) - (((/* implicit */int) var_11)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (var_9)))) && (((((/* implicit */_Bool) (unsigned short)3288)) && (((/* implicit */_Bool) var_15))))))), (var_15))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) arr_6 [i_0] [i_1])), (((142590533) << (((((/* implicit */int) (unsigned char)91)) - (89)))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1300669968U)) ? (min((max((((/* implicit */unsigned int) arr_4 [i_0])), (var_5))), (((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62248)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_0] [0] [i_4] [i_5] |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_6 [6LL] [i_4 + 1])) < (((/* implicit */int) ((_Bool) (short)23509))))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 3; i_6 < 6; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) (+(((/* implicit */int) ((-275045331) <= (((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */unsigned long long int) ((short) (short)23509))), (((arr_14 [i_0] [i_3] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (var_7))))) : (((/* implicit */unsigned long long int) max((arr_18 [i_6 + 2] [i_4 + 1]), (((arr_8 [i_0] [i_3] [4U] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_18 [i_0] [i_6]))))))))));
                            var_21 *= ((/* implicit */unsigned char) arr_12 [i_0] [i_3] [(_Bool)1]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) 1996444548U);
                            var_23 *= arr_8 [i_0] [i_3] [(signed char)8] [i_5];
                            arr_26 [i_0] [i_3] [6ULL] [i_5] [i_0] &= ((/* implicit */short) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_12 [i_0] [i_0] [(unsigned char)6]))), (max((var_12), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_3] [i_4] [i_5] [i_7])))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [0LL]))) <= (4539314660423765892LL))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) (short)22229)))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [0LL])) & (((/* implicit */int) arr_4 [(unsigned char)6]))))) ? (((((/* implicit */_Bool) arr_4 [8LL])) ? (((/* implicit */int) arr_4 [0LL])) : (((/* implicit */int) arr_4 [2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) < (var_12)))))))));
                        }
                        arr_27 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_3] [i_4])) == (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_8 [i_0] [i_3] [8LL] [i_3]))));
                            arr_32 [i_0] [0LL] [i_4] |= ((/* implicit */long long int) (+((~(((unsigned int) var_12))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_26 += ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3] [i_4])), (((unsigned long long int) (unsigned short)49777)))), (((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_3] [i_4] [i_5] [i_4] [i_9] [i_4 + 1]) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (12391339956118995697ULL)))))))));
                            arr_35 [i_0] [i_5] [i_5] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) var_15)) ? (var_8) : (-4124394492684550609LL))))), (((/* implicit */long long int) arr_28 [i_0] [i_5] [i_4] [i_5] [i_9] [i_9] [i_9]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                        {
                            var_27 *= ((/* implicit */unsigned char) ((((arr_24 [i_3] [i_4 + 1] [i_10] [i_4 + 1] [i_4] [i_4 + 1]) ? (arr_31 [i_3] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned long long int) min((2321985174U), (((/* implicit */unsigned int) (signed char)-71)))))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] &= (~(((((/* implicit */_Bool) 3895291984U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_4 + 1] [i_4] [i_4]))))));
                            var_28 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned char) (short)-16908))) | (((((/* implicit */_Bool) arr_37 [i_4])) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned short)46627))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)194)), (9447104880594353884ULL))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (signed char)63))));
}
