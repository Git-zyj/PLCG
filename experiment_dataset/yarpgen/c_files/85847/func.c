/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85847
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
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 6712245656379611546ULL);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) 533992259)) ? (1020870045U) : (((/* implicit */unsigned int) -2132638232)))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_5 [6]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 |= ((/* implicit */int) ((max((3274097236U), (((/* implicit */unsigned int) arr_1 [i_0 - 1])))) ^ ((+(3274097261U)))));
                    arr_9 [10] [16LL] [i_3] &= arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1];
                    var_20 = ((/* implicit */long long int) arr_5 [i_0]);
                }
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((2067959057) < (arr_8 [i_0] [i_1] [i_0 + 2])))) ^ (((((/* implicit */_Bool) arr_8 [i_0] [7] [i_0 + 3])) ? (arr_8 [(_Bool)1] [i_1] [i_0 + 2]) : (arr_8 [i_1] [i_1] [i_0 + 3]))))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 33554416U)) | (13169495862064051224ULL)))) ? (((((/* implicit */_Bool) 73235853744419791LL)) ? (1647293804U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned char)18])) ? (((/* implicit */int) arr_6 [0])) : (((/* implicit */int) arr_6 [(signed char)18]))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_7);
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2508334200U)))) ? (var_15) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7390074732670569276LL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned char)217))))) * ((((_Bool)1) ? (1306677024218855266ULL) : (((/* implicit */unsigned long long int) 6342545574342496931LL))))))));
}
