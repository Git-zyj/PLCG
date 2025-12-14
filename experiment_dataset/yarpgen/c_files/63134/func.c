/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63134
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
    var_10 = ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */unsigned char) ((long long int) var_5));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = var_7;
                                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                                arr_15 [i_0] = ((/* implicit */short) 917504);
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1] [i_2 + 1]))))), (((((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_2 + 1])) | (((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_2 + 1]))))));
                    var_15 = ((_Bool) (unsigned short)36607);
                }
                /* LoopNest 3 */
                for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 = max(((-(((/* implicit */int) arr_21 [i_5 - 1] [i_1 + 2] [i_1 + 1] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-84))))));
                                arr_24 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)0), (((/* implicit */short) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_1 [i_6] [i_6])))))))) & (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_6))))))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [i_1] [i_1])))) ? (((arr_19 [i_1 - 2] [i_1] [(signed char)12] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28918))))) : (((/* implicit */long long int) ((int) var_8)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_0))))) ^ (((long long int) var_1)))), (((/* implicit */long long int) 4294967287U))));
}
