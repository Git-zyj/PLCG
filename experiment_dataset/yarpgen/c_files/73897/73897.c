/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_10 - 0) ? (((var_5 + (min(var_6, -867298799))))) : ((var_5 - ((var_12 ? 61801 : var_4))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((!4294967295) == (min(var_13, 0))))) * ((((arr_0 [i_0]) == (~4294967295)))))))));
        arr_3 [i_0] [i_0] = ((((var_1 << (((arr_2 [i_0] [4]) - 83)))) > ((((!(arr_2 [i_0] [14])))))));
    }
    #pragma endscop
}
