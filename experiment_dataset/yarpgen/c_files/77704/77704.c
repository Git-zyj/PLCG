/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = 131071;
                var_17 = (max(var_17, (((36 ? (arr_0 [i_0] [i_1]) : (min((((arr_3 [i_0] [i_1] [i_1]) ^ 131079)), (arr_2 [i_0] [i_1]))))))));
                var_18 = (max(var_18, (arr_1 [i_0])));
            }
        }
    }
    var_19 = ((((min(((-461482349 ? 131068 : var_16)), ((4294836225 >> (4294836225 - 4294836197)))))) ? (min((~var_16), (((var_10 ? var_7 : 0))))) : var_12));
    var_20 = ((var_7 && (((2214496086 ? (max(var_4, var_5)) : (2251799813685247 & 1639181291))))));
    var_21 = (min(var_21, ((max((!6310044039534586415), ((4294836224 ? (~var_15) : ((var_8 ? var_3 : -2251799813685268)))))))));
    #pragma endscop
}
