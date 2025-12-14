/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81557
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
    var_18 = ((/* implicit */signed char) -1202165380);
    var_19 = ((/* implicit */long long int) var_5);
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) min(((-(arr_4 [i_0 + 2] [6U]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1202165380)), (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (3328238480416712433ULL) : (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */_Bool) var_12)) ? (4ULL) : (((/* implicit */unsigned long long int) var_8))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)3869);
                arr_7 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (signed char)25)), (var_11)))));
                arr_8 [i_0] [i_1] [i_0 + 1] = max((((((/* implicit */int) max(((unsigned short)41635), ((unsigned short)23900)))) < (((/* implicit */int) arr_1 [i_0 + 4])))), (arr_1 [i_1]));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max(((+(min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-6287))))))))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-3880)) && (((/* implicit */_Bool) (-(15118505593292839175ULL)))))))));
}
