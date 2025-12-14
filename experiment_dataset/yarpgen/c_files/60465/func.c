/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60465
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(9223372036854775805LL)))) / (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? (var_0) : (((/* implicit */int) ((((((/* implicit */_Bool) 322136082)) ? (1346015212896012519ULL) : (1346015212896012519ULL))) <= (((((/* implicit */_Bool) var_7)) ? (var_3) : (var_16))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                    var_19 |= ((/* implicit */unsigned char) -322136082);
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((-832032819336909079LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)79)) - (49)))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_2] [i_2]))) : (7871442307069541474LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17100728860813539103ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)15))))))), (((/* implicit */long long int) ((max((arr_1 [i_0 + 1]), (((/* implicit */int) var_6)))) / ((~(-269073474))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) && (((/* implicit */_Bool) (+(var_4))))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)253);
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) >= (780707122))) ? (max((var_8), (var_12))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)186)), (var_1))))))) - (var_16));
}
