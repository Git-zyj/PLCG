/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74814
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) ^ (var_4))))))));
    var_15 ^= ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 2]);
                                var_16 = ((/* implicit */short) (!((_Bool)1)));
                                arr_17 [i_0] [i_3] [i_2] [3ULL] [i_4 + 1] [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) 2147483647)) + (var_3)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) min((var_17), (var_6)));
                    var_18 = ((/* implicit */long long int) (-2147483647 - 1));
                }
            } 
        } 
        var_19 &= ((/* implicit */int) ((unsigned long long int) (+((-(arr_14 [i_0 - 1] [4LL]))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    arr_25 [i_5] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) == (arr_8 [i_6] [i_5]))))))));
                    arr_26 [i_6] [i_5] [i_0] = ((int) 28);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_32 [i_8 + 1] [i_7] [i_6] [i_5] [i_0]);
                                var_21 = ((/* implicit */int) arr_6 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_11))));
}
