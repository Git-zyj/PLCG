/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75187
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) << (((var_9) + (8022427631274441205LL))))) & (((((/* implicit */int) var_1)) + (((/* implicit */int) var_8)))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((var_10) ? (((/* implicit */long long int) 3226753544U)) : (var_9)))))) ? (-1368527926362840381LL) : (((/* implicit */long long int) var_6))));
    var_13 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) (signed char)127);
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (min((((/* implicit */unsigned long long int) 1068213741U)), (15448280677502057232ULL)))));
                arr_6 [i_0] = ((/* implicit */int) var_10);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0 - 1] [i_0] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_1] [i_1] [i_2] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (var_9))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-127)))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */long long int) 3050941921U)) | (max((arr_7 [i_0 - 1] [i_1] [i_1] [i_2]), (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))));
                    var_16 = ((/* implicit */int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_4 - 2]) & (((/* implicit */long long int) 1131054686))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) var_1)), (arr_7 [(_Bool)1] [i_1] [(short)15] [i_3]))) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1368527926362840399LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7926))) : (792309879U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
                                var_18 = ((/* implicit */_Bool) 5751109194117500423LL);
                            }
                        } 
                    } 
                }
                var_19 = ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (!(var_10)))));
            }
        } 
    } 
}
