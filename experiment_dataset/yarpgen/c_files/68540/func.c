/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68540
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))))))));
                            arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_1] [i_0])) ? (max((((((/* implicit */_Bool) 4078268127U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12263555460604757939ULL))), (((/* implicit */unsigned long long int) (unsigned short)25909)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (((0ULL) * (3152694305692969578ULL)))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_1]))))) / (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) ((arr_4 [i_0] [(signed char)5] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_1] [i_0]))))));
                var_18 = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)23554)), (var_0)))) ? (((/* implicit */unsigned long long int) 4294967289U)) : ((((_Bool)1) ? (arr_8 [i_1] [12LL] [10ULL] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_7);
}
