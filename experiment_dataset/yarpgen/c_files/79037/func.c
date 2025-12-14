/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79037
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
    var_14 = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >= ((-(((/* implicit */int) var_11))))))), ((signed char)-123)));
    var_15 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 6088281416844268336ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)196)))) < (((/* implicit */int) var_8))))));
    var_16 = ((/* implicit */unsigned short) max((((max((((/* implicit */unsigned int) (signed char)123)), (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 -= ((/* implicit */long long int) (-(max(((~(var_3))), (((/* implicit */int) var_11))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min(((!(arr_0 [i_0] [8LL]))), ((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) var_1))))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (max((((/* implicit */unsigned int) (unsigned char)11)), (1935433873U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) ((unsigned short) -493108698885725512LL)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (15801167879850338273ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 781588622549870119ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-2295)))))))));
        arr_4 [(unsigned char)4] [(unsigned char)4] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_12)))) - (((/* implicit */int) (_Bool)0))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0]))), (var_4)));
    }
}
