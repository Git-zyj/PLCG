/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((165 ? 192 : 91))) ? ((((((199 ? -8002272618400732374 : 473690868496320539))) ? 250 : ((255 ? var_10 : 4294967295))))) : (((((171 ? 7044031739140976036 : 7745033022506422278))) ? (((58102 ? var_3 : var_14))) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = 165;
                arr_5 [2] [i_1] = ((var_6 ? 4294967293 : 32767));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = (((((1268402395 - 11402712334568575579) ? 14500 : 4294967293)) != (165 <= 181)));
                            var_18 = (min(var_18, ((((3452928982 <= var_6) ? (((((165 ? 7044031739140976036 : 0))) ? ((var_14 ? var_9 : 165)) : (((var_0 ? var_13 : var_14))))) : ((((var_3 ? 0 : 78)))))))));
                            arr_10 [i_1] = (((((((32767 ? 0 : 65124))) ? var_6 : (((58102 ? 199 : var_4)))))) ? 1 : -var_6);
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((((14162070984016564456 ? 1743660638251749777 : 23))) ? var_14 : ((var_4 ? var_5 : 247))))) ? (((274877906943 ? 238 : 32767))) : -8530988569540206608));
    var_20 = (((((var_11 ? ((var_11 ? var_6 : var_3)) : var_7))) ? (((56750 ? var_14 : var_9))) : var_6));
    #pragma endscop
}
