/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = min((var_11 && 50), (min((min(0, var_3)), (min(-2863696773957939077, var_3)))));
        arr_5 [i_0] [i_0] = (((min(var_11, var_3))) ? (min((8915692884208154079 ^ 6528976005783017721), var_4)) : ((max(32, var_2))));
        var_12 ^= (((max(var_3, var_9))) ? 255 : (max(((4 ? var_10 : var_4)), var_9)));
        arr_6 [i_0] = 18194866722542777796;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_13 = (var_8 > var_10);
        arr_9 [i_1] = ((20 & -1647610563312060640) ? var_0 : (554153860399104 ^ 8));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((((((max(8, 255)))) ^ ((124 ? 2074511476969751727 : 12714576511362353668)))));
        var_14 = (max(var_14, (((((((((min(204, 16372232596739799895))) || ((min(172, 17502456854044289833))))))) == ((5732167562347197937 ? ((165 ? 83 : -3953105157073017793)) : 255)))))));
        var_15 = (((((55 ? (0 == var_7) : ((max(199, var_7)))))) ? (max(((255 ? -7258549233698807226 : 17302897201743816009)), (min(var_8, 16622076160402213555)))) : (((min(47, 4))))));
        var_16 = (min(((var_7 ? (min(10, -7938245172205950197)) : ((min(-1299822880696259838, var_0))))), ((-6520088167009078590 ? 16463669026611610117 : var_8))));
    }
    var_17 = (min(var_17, (min(((var_8 ? (min(5732167562347197937, 274877906944)) : (min(6762009898072386436, -1615260053494107128)))), (~var_9)))));
    var_18 = -var_8;
    #pragma endscop
}
