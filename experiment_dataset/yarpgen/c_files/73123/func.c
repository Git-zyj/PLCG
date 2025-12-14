/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73123
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 2] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)97))))) ? (((/* implicit */unsigned long long int) ((int) arr_5 [(signed char)8] [i_1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))))) : ((-(var_8))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (+((~(var_3))))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((min((((unsigned long long int) -5364829817739392934LL)), (((/* implicit */unsigned long long int) (+(-5364829817739392934LL)))))) | (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) & (var_3))), (((/* implicit */unsigned long long int) ((_Bool) var_10))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 68719476735ULL)) ? (((arr_0 [i_0]) ^ (1522809409))) : (127)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (15759272952001692736ULL))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10030769278145214417ULL)) ? (1522809392) : (1522809404)))) | (max((var_3), (((/* implicit */unsigned long long int) var_12)))))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)18])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_10)) ^ (3289445501U)))) : (var_6)))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_5] [2] [1ULL])) ? (((/* implicit */int) var_2)) : (147038017)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            arr_29 [i_1] [i_1] [i_0] [i_0] [i_9 + 1] [i_9] [i_1] = ((/* implicit */unsigned char) arr_23 [i_1]);
                            var_18 = var_4;
                        }
                        arr_30 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 526409623590767548ULL)) ? (362468599) : (((/* implicit */int) (signed char)-33)))));
                        var_19 -= (~(((/* implicit */int) arr_12 [i_8] [i_1] [11ULL] [i_8] [i_8] [11ULL])));
                    }
                    for (unsigned int i_10 = 2; i_10 < 22; i_10 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) < (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_33 [i_0] [i_0] [i_5] [i_10] = ((((/* implicit */_Bool) (+(arr_28 [i_0] [i_10 - 2] [i_0] [i_1 + 2] [i_10 - 1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((var_11) / (arr_4 [i_0])))) : (var_6));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    arr_37 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))));
                    arr_38 [i_0] = ((((unsigned long long int) arr_35 [i_0] [7ULL] [7ULL] [7ULL])) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) | (3296933021671666627LL)))));
                    var_21 ^= ((/* implicit */_Bool) (-(((unsigned int) 1723073858U))));
                }
            }
        } 
    } 
    var_22 -= (((-(((var_3) / (var_8))))) % (((/* implicit */unsigned long long int) ((int) ((var_11) % (((/* implicit */int) var_1)))))));
    var_23 = ((/* implicit */int) ((unsigned char) (~((+(var_7))))));
    var_24 = ((/* implicit */int) max((var_24), ((~(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) (-(var_7)))))))))));
}
