/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (((((3864294744809908907 ? (!3864294744809908898) : -4177473318576892996))) ? (min(-4177473318576892972, -4177473318576892972)) : (!-4177473318576892998)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 ^= (3864294744809908907 < 9223372036854775807);
                            var_20 ^= (min((-4177473318576892979 < 4177473318576892971), (((!4177473318576892983) ? ((-(arr_10 [i_3] [i_3]))) : (min(4177473318576892973, -4177473318576892979))))));
                            var_21 = ((var_17 ? (!var_5) : (~-9223372036854775807)));
                            var_22 *= var_7;
                        }
                    }
                }
                var_23 = (min(var_23, (-4177473318576892995 ^ 959416326)));
                var_24 = 4177473318576892983;
            }
        }
    }
    var_25 = (min(var_25, var_13));
    #pragma endscop
}
