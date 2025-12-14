/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_5 ? var_2 : (var_8 == var_5))), -var_8));
    var_14 = ((((!(((42957 ? 1 : 53946))))) ? (((min(var_5, 3107844409667330132)) ^ (((var_5 ? var_5 : var_9))))) : 32429));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_1] = ((!((min((arr_5 [i_1] [i_1 - 1] [1]), ((((arr_2 [i_1] [i_0 - 4] [i_1 + 1]) == var_3))))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (((arr_9 [i_0 + 1]) - (arr_9 [i_0 + 1])));
                        var_16 = (arr_7 [i_0] [i_1 + 1] [i_0]);
                    }
                }
            }
            var_17 -= ((((+((1 ? (arr_2 [20] [2] [20]) : 16)))) << 1));
        }
        arr_12 [i_0 + 1] = ((((((arr_2 [12] [12] [20]) & (arr_11 [i_0 - 1] [i_0 + 1] [0] [i_0 - 2] [i_0 - 4])))) ? (arr_2 [10] [8] [10]) : (arr_1 [i_0 - 2])));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_18 *= ((((-3107844409667330127 | (arr_10 [i_4] [i_4] [22] [i_4] [i_4]))) == 88376368));
        var_19 = max(((((((arr_8 [i_4]) ? (arr_0 [i_4] [i_4]) : 63488))) ? (!363770555804111163) : (!65535))), (-127 - 1));
        var_20 = (max(((((((-127 - 1) ? var_1 : 363770555804111177))) ? (~var_2) : (3249831339 | 4294967281))), (((((min((arr_10 [i_4] [i_4] [1] [i_4] [i_4]), (arr_9 [16])))) <= (arr_8 [i_4]))))));
    }
    var_21 = (((((-3095 ? 3176330522 : -587720417))) ? ((~(var_12 > var_10))) : var_9));
    #pragma endscop
}
