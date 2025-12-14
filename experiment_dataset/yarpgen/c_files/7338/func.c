/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7338
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
    var_14 = ((/* implicit */_Bool) (+(var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9510))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2 + 3] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-20))))) | (max((((/* implicit */unsigned long long int) (_Bool)1)), (144115153716117504ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_2 + 3] [i_1 + 2]))));
                            var_16 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) (!((_Bool)1)))), (((long long int) (_Bool)1))))));
                            arr_12 [(_Bool)1] [i_0] [i_2 + 2] [i_3] [i_0] = ((/* implicit */short) max(((+(((unsigned int) (short)-32750)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (arr_9 [i_0] [i_0])))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                            {
                                arr_16 [i_0] [i_4] = ((/* implicit */signed char) (short)32767);
                                arr_17 [i_0] [i_0] [i_2 + 3] [i_3] [(signed char)15] [11U] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)32741)) % (((/* implicit */int) (short)31744)))) * (((/* implicit */int) var_9))));
                                arr_18 [i_0] = ((/* implicit */_Bool) arr_10 [i_4]);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_17 *= ((/* implicit */_Bool) max((max((((/* implicit */short) (_Bool)1)), (min((((/* implicit */short) var_12)), (var_5))))), (((/* implicit */short) ((signed char) ((((((/* implicit */int) (short)-8854)) + (2147483647))) << (((((((/* implicit */int) (short)-13640)) + (13650))) - (10)))))))));
                                var_18 = ((/* implicit */long long int) (short)32753);
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((0U) > (268419072U))), (((((/* implicit */int) (short)32749)) == (((/* implicit */int) (short)0)))))))));
                                var_19 = ((/* implicit */short) max((var_19), (((short) (~(arr_23 [i_1] [i_1] [i_2] [i_3] [i_6] [i_1 + 1] [i_2 + 2]))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((+(max((((/* implicit */unsigned int) var_2)), (268419067U))))) / (max((((arr_9 [i_0] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (var_4))));
                                arr_28 [i_0] [i_1] [i_2 + 3] [i_0] [i_6] = (_Bool)1;
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (max(((short)28120), ((short)-32743)))))) : (((/* implicit */int) min((max((var_10), (var_0))), ((short)32749))))));
    var_21 = ((/* implicit */long long int) (_Bool)1);
}
