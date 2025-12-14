/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70062
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-31285)) % (((/* implicit */int) (short)-31285))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-5631)) | (((/* implicit */int) (short)-31284))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]))));
                            arr_15 [11LL] [11LL] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) -1530582822))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0])) * (((((/* implicit */int) arr_11 [i_0] [i_0] [7ULL] [i_0] [i_0])) / (((/* implicit */int) var_7))))));
                            arr_16 [i_0] [10] [(signed char)6] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+(((var_8) - (((/* implicit */int) (short)5609))))));
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) | (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [8] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((unsigned long long int) (short)2047))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31285)) ? (((/* implicit */int) var_13)) : (var_10)))) && (((/* implicit */_Bool) ((int) 2634736689828262472LL))))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (-((~(((/* implicit */int) ((short) var_5)))))));
                arr_23 [i_5] [2LL] [i_5] = ((/* implicit */int) arr_18 [i_6] [i_6]);
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) ((short) (signed char)-31))) : ((-(((/* implicit */int) (short)26336))))));
            }
        } 
    } 
}
