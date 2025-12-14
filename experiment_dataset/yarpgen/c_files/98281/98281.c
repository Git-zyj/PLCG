/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 = (18014329790005248 || 9223372036854775807);
        var_21 = 13510440618936423426;
    }
    var_22 = ((((((((9223372036854775807 ? 11445952411632795614 : 4666)) < ((71 ? 64630 : 7000791662076756012)))))) != (((4936303454773128190 ? 4936303454773128189 : 4448643331736789756)))));
    #pragma endscop
}
