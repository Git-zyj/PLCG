/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_0);
    var_12 = var_5;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (((((-((max(var_9, var_7)))))) > (((var_6 ^ var_0) ? 0 : (min(18193600309056970293, (arr_1 [i_0])))))));
        arr_5 [i_0] = (max(((-54 ? (((arr_1 [i_0]) ? 15014149029228448429 : var_6)) : 0)), ((((max(var_5, var_7)) != (min((arr_0 [i_0 - 1]), (arr_1 [i_0 - 2]))))))));
    }
    var_13 = ((((((max(0, 3446630043012661460)) % (max(var_3, var_8))))) ? -var_10 : 393));
    var_14 |= ((var_7 % var_4) ? ((var_7 ? var_10 : var_3)) : (min((~2942468887355185237), ((var_10 >> (-7785756447503459538 + 7785756447503459594))))));
    #pragma endscop
}
