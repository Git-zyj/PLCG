/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 = var_7;
        var_13 &= (max(((min(var_6, 32767))), (max((arr_1 [i_0 - 1] [i_0 + 1]), (max(var_8, var_2))))));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        var_14 = ((max(((var_6 ? 166235861 : var_11)), (var_4 - 15671986654757801804))) * (((min(32767, 61583)))));
        var_15 = (max(var_15, ((min(((((min((arr_2 [0] [i_1]), (arr_5 [i_1] [i_1])))) ? (var_1 != var_2) : ((32767 ? (arr_2 [i_1] [i_1]) : var_0)))), (((+((var_4 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))))))))));
        var_16 ^= var_5;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (max(var_17, (arr_8 [i_2])));
        var_18 = 13330320122541749074;

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_19 = (arr_10 [i_3] [i_2]);
            var_20 |= max(((((min((arr_4 [i_2] [i_2]), 13250132829472412474))) ? 288230376149614592 : (max(127, 18273733257543724297)))), ((((-(arr_8 [i_2]))))));
        }

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_2] = var_4;
            var_21 = (min(var_21, 1482116920588737062));
            var_22 = (((arr_5 [i_4 + 1] [i_4 + 3]) ? (arr_4 [i_2] [i_4]) : ((max((arr_11 [i_2]), (arr_10 [i_4 + 1] [i_4]))))));
            var_23 |= (min(((var_1 ? var_11 : (((((arr_7 [i_4]) != var_5)))))), (((arr_12 [i_2] [i_4 + 2]) / var_10))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_24 = (min(((max((arr_17 [i_2] [i_5] [i_5]), (arr_10 [i_2] [i_2])))), (min((min(var_3, var_5)), (var_7 % var_7)))));
            var_25 = (max(var_25, ((min((arr_9 [8] [i_5] [14]), ((min((!var_11), (((arr_12 [i_2] [i_5]) ? (arr_3 [i_2]) : 1))))))))));
            arr_18 [i_5] [i_2] = var_8;
        }
        var_26 = (((!((min((arr_9 [i_2] [i_2] [i_2]), (arr_2 [i_2] [i_2])))))) ? (((arr_4 [i_2] [i_2]) ? (arr_16 [i_2] [i_2]) : (arr_4 [i_2] [i_2]))) : (max((((-32767 % (arr_8 [i_2])))), var_10)));
    }
    var_27 = ((-24810 >> (((max(var_3, (~var_3))) - 16773728670855702423))));
    var_28 = min((min((max(var_10, var_8)), 16407)), var_2);
    var_29 += (((max(var_8, var_2))) % var_9);
    #pragma endscop
}
