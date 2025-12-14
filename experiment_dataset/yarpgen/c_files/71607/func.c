/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71607
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)28298)))))) : (((unsigned int) arr_1 [i_0] [i_0])))))));
                var_15 ^= var_5;
                var_16 = ((/* implicit */int) (short)-28276);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (2044LL)))) ? (((/* implicit */int) max((var_8), (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)20788))))))));
                var_18 = ((/* implicit */short) var_0);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_3);
    var_20 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_4)) ? (-902932016593946206LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11892))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-26970)) | (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (short)-2884)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11882))) : (var_2))))))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_10))));
}
