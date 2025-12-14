/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = min(((18446744073709551615 ? (max(var_7, 15125217175932920414)) : (arr_0 [i_0] [i_0]))), ((max(15541216285295994959, 15727561634147206))));
        arr_5 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        arr_6 [i_0] [i_0] = (((~((4192256 ? 18446744073709551615 : (arr_0 [i_0] [20]))))) | 9816336534196089674);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_12 = (~(((arr_0 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))));
        arr_10 [i_1] = ((18446744073709551615 / 6055057583300539475) ? (((((arr_0 [i_1] [i_1]) ? 9007199254740991 : (arr_0 [i_1] [i_1]))) << ((((~(arr_8 [i_1]))) - 3447544236206867429)))) : ((((!((var_5 <= (arr_1 [i_1] [i_1]))))))));
    }
    var_13 = (var_6 % ((-12075899934856977381 * ((6795959564719272457 ? var_0 : var_4)))));
    var_14 = 8417907029274126871;
    #pragma endscop
}
