/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57253
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-8047195047329237651LL) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14))))))) ? (((int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [3U])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                arr_6 [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [(signed char)1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_1 [i_1]))) % ((((_Bool)0) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                var_18 = ((/* implicit */signed char) arr_0 [i_1]);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -353568198)) || (((/* implicit */_Bool) ((5627481165710885397LL) ^ (var_5))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                arr_13 [(short)10] [i_2] = max((((((/* implicit */_Bool) 353568170)) ? (((/* implicit */long long int) max((var_13), (((/* implicit */int) arr_2 [i_2]))))) : (((((/* implicit */long long int) -353568159)) | (arr_8 [(short)9]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)192)) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) arr_3 [i_3] [i_3]))))));
                arr_14 [i_2] [i_3] [i_3] = ((/* implicit */short) var_4);
                arr_15 [(_Bool)0] = ((/* implicit */long long int) arr_4 [i_2] [i_2]);
                arr_16 [i_2] = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
}
