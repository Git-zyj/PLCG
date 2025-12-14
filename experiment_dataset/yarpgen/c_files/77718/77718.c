/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((min(((4294967295 ? 4294967293 : 86)), (71 == 79)))) || (((var_8 ? -var_0 : (min(var_11, var_12)))))));
    var_18 = (!var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((-88617030 ? 93 : 170));
                arr_5 [i_0] [i_0] = ((((((((~(arr_4 [i_1] [i_0] [i_0])))) ? (!88) : (arr_4 [i_0] [i_0] [i_1])))) ? ((((arr_4 [i_1 + 2] [i_1] [i_0]) ^ (!85)))) : (arr_0 [5] [i_1])));
                var_20 -= ((((((1 ? 4398046507008 : 88)) | (((~(arr_3 [i_0])))))) > ((((((110 ? (arr_3 [16]) : 1))) ? (arr_2 [1]) : (((arr_3 [16]) ? (arr_1 [i_0]) : (arr_3 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = var_5;
                arr_12 [i_2] [i_2] = (max((63 != 86), (!var_11)));
            }
        }
    }
    #pragma endscop
}
