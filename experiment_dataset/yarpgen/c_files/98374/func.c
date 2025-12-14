/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98374
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (729479208354886857ULL)));
                arr_5 [i_1] &= ((min((17717264865354664759ULL), (17717264865354664759ULL))) << (((660011305) - (660011266))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */int) ((signed char) ((-219213338) + (((/* implicit */int) (signed char)1)))));
                                arr_21 [i_4 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1396378879155045279LL)) | (729479208354886857ULL)));
                            }
                        } 
                    } 
                } 
                arr_22 [(signed char)8] [i_2] = ((/* implicit */short) var_18);
            }
        } 
    } 
}
