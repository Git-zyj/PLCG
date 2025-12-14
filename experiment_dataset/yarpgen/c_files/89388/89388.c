/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(990486482, (!var_8)))) != 3304480814));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 += (max(((3304480814 >> (-1 + 17))), (((((arr_4 [i_0] [i_1] [i_2]) + 990486507)) - (11317 <= 990486497)))));
                    var_18 = ((((-2085660394 & ((990486456 ? 3304480814 : 16391772891754888816)))) ^ (((arr_5 [i_1] [i_1]) ? ((((-98 + 2147483647) >> (2085660385 - 2085660359)))) : (max(2054971181954662800, 16391772891754888832))))));
                }
            }
        }
    }
    var_19 = min((((max(4, 2054971181954662800)) >> (((max(2054971181954662800, -2085660386)) - 18446744071623891182)))), ((116 ? 174 : ((-2147483637 ? -1461888606 : 16391772891754888832)))));
    var_20 = ((2085660400 <= (max(2147483636, (120 + 354110488)))));
    var_21 = (max(((((71 >> (3940856805 - 3940856784))) >> ((var_9 >> (var_9 - 386362494))))), ((max(-2147483632, 2085660357)))));
    #pragma endscop
}
