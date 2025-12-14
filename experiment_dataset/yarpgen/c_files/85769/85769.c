/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = 6537121208125448950;
        var_19 = (((18446744073709551601 / 4229817521260510955) ? ((min(1, 235))) : (((((max(16489828950117653540, 1))) && ((min(14338517291112466548, var_15))))))));
    }
    var_20 &= ((12949552881457803193 >> ((var_2 ? ((1 ? var_9 : 18446744073709551615)) : (var_6 ^ 18446744073709551615)))));
    var_21 = (((((min(18446744073709551591, var_8)) != var_13)) ? -78 : (max((var_0 * 208), ((65208 >> (226 - 222)))))));
    #pragma endscop
}
