/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9435
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
    for (int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((422125354U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0 + 1])) ? (max((var_8), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))) : (((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) 422125345U)) : (17399413754077105797ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_12)) : (var_16))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_3 [i_0] [9])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0 + 2] [19LL] [(_Bool)0]))))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))))))));
                arr_7 [i_0] [14LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0 - 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((arr_2 [i_0] [i_1] [i_0 - 1]) ? (arr_4 [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? (min((((/* implicit */unsigned int) 4194303)), (min((((/* implicit */unsigned int) var_5)), (arr_4 [i_0] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [20U])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_0] [i_1]), ((_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (422125352U)))))));
                var_18 = min((((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-69)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_0 - 4] [i_0 - 1]) : (arr_11 [i_0 - 1] [i_0 - 1]));
                        arr_14 [i_3] [13U] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (arr_10 [i_3] [i_0 - 1]) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_18 [(unsigned char)8] [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
                        arr_19 [7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_1] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_0 - 3] [6] [i_0] [i_0 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_0 - 4] [i_0 - 4] [i_0] [i_0] [i_0 + 2] [i_0 + 2]))));
                        arr_20 [0LL] [0LL] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) : (var_8)));
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_3) : (-2121701092215413497LL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_6))))))) ? (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_5 [i_0 - 2] [17]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (0)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (17399413754077105797ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) 7789948389464130770ULL)) ? (((/* implicit */int) (_Bool)1)) : (-2138152014))) : ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)31)))))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(signed char)11] [2U] [i_2] [i_0 - 2] [i_0 + 1] [i_1])) ? (arr_4 [i_0 - 2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [9LL] [i_1] [5])))))) ? (((((/* implicit */_Bool) arr_8 [19] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0 - 3] [17U] [i_2])))) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 4] [i_0 - 3]))))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_15);
}
