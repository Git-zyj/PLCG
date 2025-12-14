/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -99;
    var_17 = 111;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((144097595889811456 ? (((-7748 ? -932172382 : -932172382))) : ((36084 ? 1143914305352105984 : -5))));
        arr_4 [i_0] = (((~1) - -8434725497002710767));
        var_18 = 932172385;
        arr_5 [i_0] |= (~28);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = -5;
        var_19 = ((-8644070364223855832 ? (~105) : ((31 ? -932172386 : 87))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_20 = ((~((~(~95)))));
        var_21 = ((-169 ? 91 : (~15357081235984196456)));
        var_22 = ((-174 + (((~179) ? 0 : 0))));
        var_23 = ((~(((109 == (199 != -583026112162658095))))));
    }
    var_24 = (var_4 % 95955195071079286);
    #pragma endscop
}
