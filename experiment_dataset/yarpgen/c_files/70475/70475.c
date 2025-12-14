/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (!var_3);
        var_17 = (min(var_17, ((((((var_1 ? 145200572815097708 : var_15))) >= ((((var_10 && 4018895596647307070) % ((-4018895596647307077 ? (arr_2 [i_0 - 1]) : var_2))))))))));
        var_18 = ((!((((arr_2 [i_0 - 1]) % (arr_0 [i_0 + 1]))))));
    }
    var_19 = (((!var_3) - ((min((var_3 >= var_12), var_11)))));
    var_20 = var_9;
    var_21 = var_7;
    #pragma endscop
}
