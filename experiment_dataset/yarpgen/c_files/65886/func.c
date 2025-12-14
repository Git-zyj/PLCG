/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65886
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_6))))));
    var_12 = ((/* implicit */short) ((long long int) ((unsigned short) var_4)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_3 [i_1] [i_1])))) / (((unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) 10094564052369572579ULL)) ? (10367170601940400812ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((/* implicit */int) (short)13))))))) : (((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])))) >> (((((((/* implicit */_Bool) 14982268141554594646ULL)) ? (arr_3 [i_1] [i_0 - 1]) : (((/* implicit */int) var_1)))) + (1250924870))))));
                arr_5 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))), (((((max((((/* implicit */int) var_8)), (-2147483641))) + (2147483647))) >> (((arr_1 [i_0 + 1]) + (1488620877030761596LL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */int) var_0);
}
