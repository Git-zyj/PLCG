/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74692
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
    var_15 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_0))))) != (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_6))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) < (var_5)))), ((~(var_12))))));
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */int) var_0))))) ? (min((((/* implicit */int) var_0)), (var_11))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-40593535))))) <= (((/* implicit */int) ((var_9) <= (((/* implicit */int) min((var_6), ((_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1 + 2] = ((((/* implicit */_Bool) (+(arr_3 [(_Bool)1] [i_1] [i_1 + 1])))) ? (((min((arr_3 [2U] [i_1 - 2] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) + (((/* implicit */unsigned long long int) (~(-1741168764)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 + 2]), (((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])) < (arr_3 [i_1 + 1] [9] [(unsigned short)9]))))))));
                arr_5 [(_Bool)1] = ((/* implicit */unsigned int) arr_1 [i_1 + 2] [i_0 - 1]);
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1 - 2] [i_2] = ((unsigned int) min((arr_1 [i_0 + 1] [i_1 + 2]), (arr_1 [7U] [i_1 - 1])));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((min((((/* implicit */int) var_13)), (arr_1 [(_Bool)1] [7]))) - (((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))))));
                }
                for (int i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] [i_1] [5ULL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_3 + 2] [i_1 - 2] [i_1 - 2]))) ? (((((/* implicit */_Bool) arr_11 [i_0 + 2] [9] [i_3])) ? ((+(721991518U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))))) : (min((arr_7 [i_1 + 2] [i_1 + 2] [(_Bool)1]), (((/* implicit */unsigned int) ((_Bool) (_Bool)0)))))));
                    arr_14 [0] [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_20 [0ULL] [i_5] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */int) (((_Bool)1) ? (arr_3 [(unsigned short)3] [i_1] [(unsigned short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_5] [i_4 - 1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 2] [i_3 + 2] [i_4 - 1] [i_5])))))))));
                                arr_21 [i_3] [i_1] [i_3] [0] [(_Bool)0] [i_3] [11] = ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((((/* implicit */int) var_8)) - (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5))))) >> (((/* implicit */int) ((_Bool) var_8))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (max(((_Bool)0), ((_Bool)1))))))) / (2482148696U)));
}
