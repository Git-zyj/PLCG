/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 31784;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = ((-31790 ? (((!(((var_11 ? 3 : -25540)))))) : -380));
            arr_6 [i_0] [i_1] [i_0] = (((-(-1 + -6078))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_0] = 31784;
            var_13 = 138;
            arr_12 [i_0] [i_0] [i_0] = (min(((min(25483, 32097))), (arr_3 [i_0 - 1] [i_0])));
            arr_13 [9] [i_0] = ((min((min((arr_8 [i_0] [i_0]), 16382)), -3203)));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_3] = ((~((32767 ? 8130964315017854991 : -1989869984052516940))));
            var_14 ^= 6031689562230228167;
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_4] [i_0] = 2113929216;
            var_15 *= (max((arr_1 [i_4 - 1]), ((124 / (arr_3 [i_4] [i_0 + 2])))));
            var_16 = (((((-1810058500 ? -9530 : 0))) ? (((-7039 >= (-32767 - 1)))) : (((var_0 || (-32767 - 1))))));
        }
        var_17 = (min(var_17, ((max(-var_11, (~34))))));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = (((min(65535, (-32767 - 1)))));
        arr_24 [i_5] = 2181038079;
    }
    var_18 = (min(var_18, ((-(min(((var_11 << (6647886574947503154 - 6647886574947503150))), var_1))))));
    #pragma endscop
}
