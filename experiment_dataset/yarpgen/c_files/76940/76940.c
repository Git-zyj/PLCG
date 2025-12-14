/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (((((((!(arr_2 [i_1] [i_0]))) ? (4250464877 << 0) : ((((arr_4 [i_0] [i_1] [i_1]) ^ var_13)))))) ? ((((~(arr_2 [i_0] [i_1]))) >> (((arr_0 [i_0]) + 45)))) : (((var_4 > 33) | (((51669 || (arr_0 [i_0]))))))));
                var_17 = ((((max((((arr_4 [7] [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_2 [9] [6]))), (((!(arr_4 [0] [i_1] [i_1]))))))) ? ((((arr_3 [i_0] [i_1]) && (80 || 97)))) : (((((min((arr_2 [i_0] [i_0]), var_3))) || (!var_7))))));
                var_18 = (max(var_18, ((((((var_5 ? (((arr_2 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 628245166)) : (arr_2 [i_1] [i_0])))) ? ((((min(628245166, (arr_3 [i_0] [i_1])))) ? (arr_0 [i_0]) : (((var_11 || (arr_2 [i_0] [i_0])))))) : (arr_4 [i_0] [i_1] [i_1]))))));
                var_19 = (max(var_19, (((((max((((arr_4 [i_0] [i_1] [i_1]) ? 44502418 : (arr_2 [i_0] [i_0]))), (max(1509849425, 904611313))))) || (arr_2 [i_0] [i_0]))))));
            }
        }
    }
    var_20 = (max(var_2, ((var_7 >> ((((var_3 ? var_10 : var_7)) - 95937819))))));
    var_21 = (min(((((628245175 / var_15) && (var_11 << var_8)))), (-628245158 * 79)));
    #pragma endscop
}
