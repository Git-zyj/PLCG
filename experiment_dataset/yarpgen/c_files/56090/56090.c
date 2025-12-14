/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_8;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] &= (((+-4894) ? (~-7952990873248278663) : (60651 / 38160)));
        var_21 = 267911168;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((~(~-267911141)));
        arr_7 [i_1] = (~((4865 ? 1155492664710316757 : 841729752)));
        var_22 ^= ((((((4865 ? 11944 : 1)) > ((327822063 >> (18856 - 18846))))) ? ((16515072 ? 833956365 : 3433687833)) : -960));
    }
    #pragma endscop
}
