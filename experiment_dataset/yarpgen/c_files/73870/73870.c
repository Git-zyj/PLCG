/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 699472664;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((var_3 ? (max(var_11, 612556833)) : (arr_2 [i_0])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [8] [i_0] [i_2] = (max((-1228628145 - -31), (1948694054 == -111)));
                    var_17 = 6454239324696187065;
                    var_18 = (i_0 % 2 == 0) ? ((((((var_0 >> (((arr_2 [i_0]) - 3403033191))))) ? (((((arr_5 [i_0]) || -526996334)))) : ((-615198876 ? (arr_0 [6]) : 17427))))) : ((((((var_0 >> (((((arr_2 [i_0]) - 3403033191)) - 3881327832))))) ? (((((arr_5 [i_0]) || -526996334)))) : ((-615198876 ? (arr_0 [6]) : 17427)))));
                    var_19 = 1794898354;
                    arr_8 [i_0] [i_1] [i_0] = (((max(-526996345, (arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_1]));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_20 = ((526996333 << (122 - 121)));
                    var_21 = (max(var_21, (((max(-110, -112))))));
                }
                arr_11 [i_0] [i_1] [i_0] = ((((((arr_5 [10]) / (arr_5 [i_0])))) && (arr_5 [i_0])));
                arr_12 [i_0] [i_0] [i_0] = (-32767 - 1);
            }
        }
    }
    #pragma endscop
}
