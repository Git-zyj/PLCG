/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (min(26190, (((255 << 14) ? ((16380 ? var_12 : var_1)) : (16 >> 27)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] = (((((~(arr_5 [i_0])))) ? ((~((47 ? 9 : 3340)))) : -893839144));
            var_21 = (((max((-86 + 63), ((50 ? 17046265767225528157 : 17046265767225528182)))) * ((((((var_16 ? var_9 : 68))) ? (arr_4 [i_0] [i_0] [i_1]) : ((-32757 ? 893839139 : (arr_5 [i_0]))))))));
            var_22 = ((((((!(2122304073 ^ var_4))))) > ((((((arr_1 [i_0] [i_0]) & (arr_2 [1] [i_0])))) ? ((~(arr_0 [i_1]))) : 1400478306484023474))));
        }
    }
    var_23 -= var_5;
    var_24 *= 120;
    #pragma endscop
}
