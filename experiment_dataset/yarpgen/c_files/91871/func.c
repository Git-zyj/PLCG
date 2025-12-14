/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91871
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */_Bool) ((((arr_1 [i_0 + 1]) == (arr_1 [i_0 - 1]))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) var_6)) * ((-(arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_8))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                arr_8 [i_1] = 17246988244004719719ULL;
                var_14 &= ((/* implicit */_Bool) ((long long int) ((long long int) ((((/* implicit */unsigned long long int) var_9)) == (arr_6 [i_0] [i_0] [13LL])))));
                var_15 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]);
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -3013602130543215968LL)) ? (((-1912328582168792067LL) / (-3013602130543215953LL))) : (((/* implicit */long long int) -1697315484))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned long long int) var_4))));
                var_18 = ((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1]));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]);
                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_0 + 1]))));
            }
            var_19 += arr_11 [i_0] [10] [i_0];
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((arr_4 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) : (var_7))) << (((((unsigned long long int) ((((/* implicit */_Bool) -7307215242547652550LL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_19 [i_1]))))) - (16722372373763769616ULL)))));
                        var_21 = ((unsigned long long int) ((((/* implicit */_Bool) -3013602130543215968LL)) ? (3013602130543215967LL) : (3013602130543215984LL)));
                        var_22 ^= arr_7 [10ULL] [10ULL];
                        arr_21 [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1536700942)), (3875444651270425536ULL)))) ? ((-(-1LL))) : (((/* implicit */long long int) min((arr_17 [i_0] [i_5]), (var_7)))))))));
                    }
                } 
            } 
        }
        var_23 += ((/* implicit */_Bool) (~(0LL)));
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((int) 9912193058119462161ULL))) >= (arr_6 [i_7] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_7] [i_7]), ((!(((/* implicit */_Bool) -617797704)))))))) : (arr_5 [i_7] [i_7] [i_7])));
        var_25 += (-((-(arr_24 [i_7]))));
    }
    var_26 -= var_7;
}
