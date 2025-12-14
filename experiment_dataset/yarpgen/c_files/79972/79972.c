/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((max(65527, var_3))) ? (((var_9 != 9) ? (!65535) : ((65527 ? 3250 : var_6)))) : (~var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((11798683033573798362 ? (((((max(-2789006128869001227, 9)) < var_5)))) : ((-1 ? 4294967283 : 1))));
                arr_6 [i_0] = ((~((-3251 ? 0 : -6950134103334160071))));
                arr_7 [i_1] = (min(((65535 % ((927923530557853516 ? (arr_1 [i_0]) : (arr_4 [i_0] [i_1] [i_0]))))), -1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = min((((((((arr_9 [i_2] [i_1] [i_0]) >= 4294901761)))) ^ (min((arr_10 [i_0] [i_1] [i_2]), (arr_0 [i_0]))))), (((((((arr_4 [i_1] [i_1] [i_2]) ? 16415 : (arr_1 [i_0])))) ? ((1 ? 1 : 1)) : ((15089 << (var_7 - 2844797990126985559)))))));
                    var_15 = (min(var_15, ((max((((((73 ? (arr_4 [i_2] [i_1] [i_0]) : var_7))) ? (((var_6 ? 49152 : -5))) : (max(21, 15546903776408362396)))), (max((((var_8 ? (arr_0 [i_2]) : var_8))), (min(var_2, (arr_10 [i_2] [i_1] [i_0]))))))))));
                    arr_11 [i_1] [i_0] = ((((min(((max(var_11, var_1))), (((arr_4 [i_0] [i_1] [i_1]) ? 2899840297301189218 : (arr_0 [i_1])))))) || (((-(((arr_9 [i_2] [i_1] [i_0]) ? 65530 : 0)))))));
                }
            }
        }
    }
    var_16 = (min(((min(var_8, var_10))), ((((((4294901772 ? 32767 : 1))) ? var_11 : (!var_7))))));
    #pragma endscop
}
