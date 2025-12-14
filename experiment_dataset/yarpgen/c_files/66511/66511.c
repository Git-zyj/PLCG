/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!((max(10, 115))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((max((arr_1 [i_0 - 1] [8]), 320050930))))));
        var_20 = (max((max((((3974916366 ? 2147483647 : 48185))), (min((arr_2 [i_0] [i_0]), 17351)))), ((max((((!(arr_0 [i_0 + 3])))), ((-(arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [0] = ((-1234355242 ? 4611686018427387904 : 7977995083875665293));
        var_21 = ((min((min(0, (arr_5 [i_1]))), (!0))));
        var_22 = (max((min(var_14, -var_4)), (((max(var_15, (arr_5 [2])))))));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (min((max((arr_7 [i_2 + 1]), (max(775209958385670314, 68)))), (((((min(-166270718, 1))) ? -62561 : (min(var_0, var_9)))))));
        var_23 = (max(var_23, ((max(0, (min(var_14, (arr_7 [i_2 - 2]))))))));
        arr_10 [i_2] = (max((((max((arr_8 [i_2]), var_12)))), (min((((!(arr_4 [i_2 - 1])))), (arr_5 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((min(3974916369, 0)));
        var_24 = (((~((min((arr_11 [i_3] [4]), (arr_11 [i_3] [i_3])))))));
        arr_14 [i_3] [15] &= (((min(0, 0))));
        var_25 = ((-(arr_11 [i_3] [i_3])));
        var_26 = (max(var_26, (max(0, (((6396178819722885539 ? 33800 : (arr_12 [i_3]))))))));
    }

    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] = (min((((max(896744612271919814, -441882329)))), (max((arr_5 [i_4 + 3]), ((79 ? -7160882636281499851 : (-2147483647 - 1)))))));
        arr_19 [i_4] = max((((min(6040, (arr_4 [i_4]))))), -1179334265);
        var_27 = (!((min(((var_7 ? var_2 : 0)), (~var_8)))));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        arr_23 [i_5] [0] = ((min(438191128546562587, ((~(arr_20 [1]))))));
        var_28 = (max(((!(arr_12 [i_5 + 1]))), ((!((min(-31088, var_7)))))));
    }
    #pragma endscop
}
