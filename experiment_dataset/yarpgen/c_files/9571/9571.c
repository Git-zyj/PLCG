/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max(((18014123631575040 ? 1 : 479475194)), (~1))), var_17));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 99;
        arr_5 [i_0] [i_0] = ((((41673 ? 1 : 23849)) & ((1 ? 0 : 39973))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [0] = (((((0 || 53567) ? (~1) : ((41680 ? 211486556459407217 : 23836))))) ? ((max(((1070877610 ? (-127 - 1) : 1)), (1070877598 >= 4294967266)))) : 0);
        arr_9 [0] = (((((((3310115179550790613 ? 23820 : 0))) ? ((32767 ? 3072 : 24915)) : 1)) % 1));
        arr_10 [i_1] = (10259 ? 17733629906250388619 : ((15136628894158761002 << (11910220557732353783 - 11910220557732353771))));
    }
    var_20 = ((var_17 ? ((-((10240 ? 1152921504606846975 : -699487624)))) : ((((!((max(65535, 101)))))))));
    var_21 = (((((0 ? -115 : 17370))) ? var_15 : var_6));
    #pragma endscop
}
