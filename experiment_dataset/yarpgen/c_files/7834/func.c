/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7834
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
    var_11 = ((/* implicit */signed char) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)159)), ((unsigned short)13187))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_4 + 1]))))) - (max((var_1), (((/* implicit */unsigned long long int) var_0))))));
                                var_13 = ((/* implicit */int) var_8);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1045038556842160329ULL)) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)116)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_17 [i_5] = ((/* implicit */signed char) ((int) (((-(12414581785712152810ULL))) & (((/* implicit */unsigned long long int) ((((arr_4 [(unsigned char)5] [i_1] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5] [i_5]))))))));
                        var_15 &= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_1 [i_0])) >> (((((((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [13ULL] [i_5])) ^ (((/* implicit */int) var_3)))) - (130)))))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min(((-(((/* implicit */int) (short)-17679)))), ((-(((((/* implicit */_Bool) 8674054714270701466LL)) ? (var_9) : (((/* implicit */int) (unsigned char)90)))))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)21537)) : (((/* implicit */int) (short)255))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_18 = var_10;
                            arr_20 [i_0] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) || ((!(((/* implicit */_Bool) arr_6 [i_6] [i_1] [(short)7]))))));
                            var_19 = ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2] [i_5] [i_2])) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_5] [i_6]))));
                        }
                        for (long long int i_7 = 3; i_7 < 18; i_7 += 1) 
                        {
                            arr_23 [i_5] [i_2] [i_5] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7 + 1] [i_5] [i_5])) && (var_5)))));
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_8))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7 - 1] [i_7] [i_7]))))) : (((/* implicit */int) ((_Bool) ((933311122) / (((/* implicit */int) (signed char)-6))))))));
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_22 [i_7] [i_0] [i_7 - 1] [i_0] [i_5]), (arr_22 [(unsigned short)14] [i_0] [i_7] [i_0] [(unsigned short)14])))) & (((var_9) | (((((/* implicit */_Bool) arr_19 [i_5] [i_1] [i_2] [i_0] [i_7])) ? (var_9) : (var_4)))))));
                            var_23 = ((/* implicit */unsigned char) var_5);
                        }
                        for (short i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            arr_26 [5ULL] [i_5] [i_2] [i_1] [i_8] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)28))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) arr_19 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((unsigned long long int) arr_19 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1]))));
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((unsigned short) var_3)), (var_8))))));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_25 ^= ((/* implicit */short) arr_2 [(signed char)1]);
                            arr_32 [i_9] [i_5] [i_5] [i_5] [i_5] [i_0] = (-((-(max((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_0])), (-62602194))))));
                            arr_33 [i_0] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)171))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27118)) + (((/* implicit */int) (signed char)46))));
                            arr_34 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((signed char) max((((/* implicit */int) var_3)), (var_10))))) / ((-(((int) var_9))))));
                        }
                    }
                    arr_35 [i_0] [(short)10] [i_2] = ((/* implicit */unsigned short) var_4);
                    arr_36 [i_0] = ((/* implicit */short) max((max((var_4), (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_22 [i_2] [i_0] [i_1] [i_0] [14LL]))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_8 [i_0]), (arr_8 [i_0]))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21624))))) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_21 [(unsigned char)8] [i_0] [(unsigned char)8] [(unsigned char)8] [i_0] [i_0] [(_Bool)1])))) == (((((/* implicit */unsigned long long int) var_9)) ^ (arr_15 [i_0] [i_0]))))))));
        var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (_Bool)1))) - (max((((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_0] [i_0])))), (((12414581785712152816ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        arr_37 [i_0] = ((/* implicit */unsigned long long int) max(((+((-(((/* implicit */int) (_Bool)0)))))), ((-((-(((/* implicit */int) var_6))))))));
    }
    for (long long int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
    {
        arr_40 [i_10] [i_10] = ((short) -7073479706143344029LL);
        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)165)) - (((/* implicit */int) (_Bool)1)))) - ((-(var_4)))));
        arr_41 [i_10] [i_10] = (+(7073479706143344029LL));
    }
    var_31 = ((unsigned char) var_8);
    var_32 = ((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_8))));
}
