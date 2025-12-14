/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55590
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 -= ((/* implicit */int) var_10);
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */int) min((((((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((1812244440U) - (1812244424U)))))) : (((arr_7 [21ULL] [24U] [i_1] [i_0]) & (((/* implicit */unsigned int) arr_3 [i_2] [i_3])))))), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_1 [i_3]))))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((min(((signed char)127), (((/* implicit */signed char) var_2)))), (min((((/* implicit */signed char) var_6)), ((signed char)(-127 - 1))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65514)) >= (((/* implicit */int) (signed char)124))))) : (((/* implicit */int) (!((_Bool)1))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_0] [i_0]) : (arr_11 [14ULL] [14ULL] [i_4])))), (max((((/* implicit */long long int) arr_8 [i_0] [i_1 + 1] [i_4] [i_5] [i_6])), (arr_15 [i_0] [13ULL] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1703075856)) + (max((var_11), (var_11)))))) : (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [10ULL] [i_5] [i_6])) ? (arr_17 [i_0] [i_1]) : (arr_11 [i_0] [2] [i_4])))) : (((((/* implicit */_Bool) arr_16 [i_1] [7LL] [i_6])) ? (((/* implicit */unsigned long long int) arr_16 [8] [i_4] [i_5])) : (var_7))))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [(signed char)2] = ((((/* implicit */_Bool) max((arr_1 [i_1 - 1]), (arr_1 [i_0])))) ? (((/* implicit */long long int) arr_7 [i_0] [i_1 + 1] [i_5] [24])) : (((((/* implicit */_Bool) max((-1), (((/* implicit */int) var_5))))) ? (max((var_8), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])))) : ((-(arr_15 [i_0] [i_0] [11LL] [i_0]))))));
                                arr_22 [i_0] [8] [i_4] [(signed char)14] [i_6] = ((/* implicit */unsigned short) arr_17 [i_4] [i_6]);
                                arr_23 [9LL] [i_1] [9LL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (arr_7 [(_Bool)1] [(signed char)5] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)13380)), (arr_8 [8LL] [i_1] [i_1] [i_1] [i_1 + 1]))))))) ? (((((/* implicit */long long int) 2942268758U)) / (arr_15 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] [(_Bool)1] [i_1 + 2])) : (-2062341635165853200LL))) - (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((((/* implicit */int) var_4)) != ((~((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-110)))))));
}
