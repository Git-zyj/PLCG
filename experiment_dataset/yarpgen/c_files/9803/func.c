/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9803
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) (-(2147352576)));
                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(max((var_4), (((/* implicit */unsigned int) var_1))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) (+(arr_1 [i_0] [i_1]))))))));
                var_16 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))), (max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (2315509423U))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_10 [9ULL] [i_2] [12U] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)16439))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4593671619917905920ULL)))) : (arr_8 [i_0] [i_1] [i_0] [i_2])))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((((/* implicit */_Bool) 4593671619917905920ULL)) ? (((/* implicit */unsigned int) 130816)) : (0U));
                        arr_13 [(unsigned short)13] [i_2] [i_2] = ((/* implicit */int) var_3);
                        var_18 = ((/* implicit */short) var_10);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) var_11);
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [15ULL] [i_1] [i_0]))) : ((-(((((/* implicit */_Bool) var_9)) ? (var_4) : (arr_12 [(signed char)7] [i_4])))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) -1092053504))))), (min((var_2), (((/* implicit */long long int) arr_0 [i_0]))))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((2315509427U), (((/* implicit */unsigned int) arr_1 [i_4] [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (15905305622904830776ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) % (((/* implicit */unsigned long long int) (-(min((var_3), (((/* implicit */unsigned int) 1928021270)))))))));
                            arr_23 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6] |= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)0))))));
                        }
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */int) var_9);
                            arr_26 [i_0] [i_2] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61922)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_0]))))), (((((/* implicit */_Bool) var_13)) ? (13853072453791645695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_5)))) ? (((/* implicit */long long int) 33553920)) : (var_2)))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */int) max((arr_17 [13LL] [(_Bool)1] [i_2] [6LL] [i_1] [i_0]), (arr_17 [14] [14] [i_1] [i_2] [i_4] [i_7])))), (var_7))))));
                        }
                    }
                    for (unsigned int i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 0U)) ? (arr_29 [i_0] [(_Bool)1] [i_0] [i_8]) : (((/* implicit */unsigned long long int) -1903154491)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_2])) : (var_3)))))) : (((/* implicit */unsigned long long int) var_11))));
                        arr_30 [i_2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 835776754U)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_15 [6ULL] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (arr_20 [i_0] [i_1] [i_1] [(short)12] [i_8 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_25 [i_8] [4] [i_8] [i_8 - 1] [14] [6] [i_0])) : (((/* implicit */int) var_12))))));
                        arr_31 [i_8 - 3] [i_2] [i_2] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_8 - 3]))))), (max((((/* implicit */unsigned int) (+(var_13)))), (max((((/* implicit */unsigned int) (signed char)0)), (var_3)))))));
                    }
                }
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    arr_35 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)102)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)8191)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [6] [6] [i_9]))) : (13093235588072263446ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_9] [i_9])))))) : (3620705103161152969LL)));
                    arr_36 [(short)10] [i_1] [i_9 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_7)) : (0U))))));
                    var_26 ^= ((/* implicit */long long int) var_11);
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))))), ((~(0ULL))))))));
    var_28 = max((3123303552U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
