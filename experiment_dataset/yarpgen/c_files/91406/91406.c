/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 &= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 += 7;
        arr_2 [12] [7] |= ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        arr_3 [11] = (1215641496170842055 > 1215641496170842080);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_19 *= (!157);
            arr_7 [i_1] [i_1] = (((arr_6 [i_1] [i_1 - 1]) != (max(((var_9 ? 91 : 167)), (arr_1 [12] [12])))));
            arr_8 [2] [i_1] [2] = 255;
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_20 = 1215641496170842055;
            var_21 ^= var_2;
            arr_11 [i_0] [1] [i_2] = ((((min((arr_10 [i_2 + 2] [i_2] [i_2 + 1]), (17231102577538709560 <= var_3)))) ? var_5 : (((min((((190 && (arr_9 [i_0] [i_0])))), (min(-23323, 157))))))));
            var_22 = ((-2526288747126280076 / ((((2718492570414614654 ? 4572612951918785351 : -2718492570414614654)) / 1))));
        }
        arr_12 [7] = (var_7 >= 65531);
    }
    var_23 = max(((((222 ? 1 : 1215641496170842028)))), ((65535 ? (1215641496170842055 <= 217) : (max(32758, 17619211496251038787)))));
    #pragma endscop
}
