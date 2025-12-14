/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (((var_7 * (((var_0 ? var_6 : var_9))))));
        arr_2 [1] &= ((((((min(var_3, var_5)) / (((min(22186, 22181))))))) ? (!22169) : (((22195 / 71) ? var_4 : (var_5 / -86)))));
        var_11 = (min(var_11, ((((((var_8 ? var_5 : var_5))) / ((((min(var_4, var_6))) ? var_7 : -22311)))))));
        var_12 = (min(var_12, 55));
        var_13 = 62833;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_14 = (max(var_14, (((!(((var_6 - (var_3 + var_9)))))))));
        arr_5 [i_1 - 2] [i_1] = ((((!((min(var_4, -22191))))) ? (max(var_7, ((max(82, 101))))) : (min((var_5 ^ var_9), ((22193 ? 12327112422322259578 : 8628403249140830883))))));
        var_15 = (min(var_15, (((~((62833 * (!22159))))))));
        var_16 -= ((!(((((-12 + 2147483647) << (((var_6 + 2001559203) - 1)))) > -12))));
    }
    var_17 = (max(((((var_3 ? -86 : 2684)) != var_3)), ((((435595903 ? var_0 : var_9)) == ((1 ? var_2 : 63))))));
    var_18 = var_5;
    #pragma endscop
}
