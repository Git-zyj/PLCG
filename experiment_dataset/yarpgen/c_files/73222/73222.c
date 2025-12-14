/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((241 ? (max(var_3, 28)) : (((((1302348081 ? 241 : (arr_0 [i_0] [i_0])))) - 1633264544045938341))));
        arr_3 [i_0] = 67;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 ^= (((min((min(var_0, var_7)), (var_6 != 246)))) ? 1939557734 : (((12 == 246) ? 503316480 : 34318)));
            arr_6 [i_0] [i_0] [i_0] = 18446744073709551615;
            var_17 += ((((max(var_7, 14165933691679447301))) ? 503316490 : (((9 ? ((var_7 + (arr_0 [i_0] [i_1]))) : var_12)))));
        }
    }
    var_18 = (((((var_9 / 1) ? var_0 : 10)) ^ var_12));
    var_19 = (248 - 8415019201901199546);
    var_20 |= ((var_10 && ((((var_3 ? var_10 : 34))))));
    #pragma endscop
}
