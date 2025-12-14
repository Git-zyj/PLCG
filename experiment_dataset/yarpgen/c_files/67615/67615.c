/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min((((((0 ? 1 : 1))) ? (((var_14 ? 18 : 26760))) : ((var_16 ? var_13 : var_13)))), 5704));
    var_19 = ((((min(-77, var_3)))) >= (min(((0 ? 59832 : 1392964042904906595)), var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 += ((-(((min(1392964042904906593, 768)) | 1))));
                var_21 = (max(var_21, (((8589934591 ? 6917529027641081856 : 1915761367)))));
                var_22 ^= (min((((-88 != 17053780030804645020) | ((76 ? var_16 : var_7)))), ((min(1006632960, (62025 > var_9))))));
            }
        }
    }
    var_23 = (max(var_23, (((var_5 ^ ((((max(var_10, var_11))) ? 11529215046068469760 : 3550851389)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_24 |= (min((((min(1, var_16)))), ((19774 ? (1 <= -4123298677986256231) : 1))));
                var_25 -= 3442809174;
                var_26 += var_0;
                var_27 = (min(var_27, (((((((((var_1 ? var_7 : var_1))) ? (1 > var_13) : (~17540242364797479275)))) ? var_17 : (min(var_16, 3072)))))));
                var_28 *= ((470890900 ? ((min(var_12, 3144711168))) : (min(((2728529476 ? var_5 : 1662019034)), var_16))));
            }
        }
    }
    #pragma endscop
}
