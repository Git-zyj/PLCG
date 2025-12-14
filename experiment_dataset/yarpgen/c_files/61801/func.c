/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61801
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [3] = ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) > ((+(arr_3 [i_0]))))))));
                arr_7 [i_1] [10] [0ULL] = ((/* implicit */short) arr_5 [(_Bool)1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned long long int) (-(((long long int) (+(((/* implicit */int) arr_11 [i_2])))))));
                arr_14 [i_2] [i_3] [(_Bool)1] = ((/* implicit */short) var_3);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_21 [i_2] [(signed char)14] = ((/* implicit */int) min((((/* implicit */unsigned short) max(((signed char)-86), (((/* implicit */signed char) (_Bool)1))))), (arr_18 [8ULL] [i_2] [i_2] [(unsigned char)0])));
                            arr_22 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (arr_19 [(_Bool)1] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                            arr_23 [i_5] [i_4] [i_4] [i_2] = (!(((/* implicit */_Bool) var_13)));
                            arr_24 [i_2] [i_2] [(_Bool)0] [2LL] [0] = ((/* implicit */_Bool) ((unsigned char) min((min((arr_12 [i_2] [i_3]), (((/* implicit */int) var_12)))), ((+(((/* implicit */int) arr_16 [(_Bool)0] [(_Bool)0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((unsigned short) (signed char)-92))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-86)));
}
